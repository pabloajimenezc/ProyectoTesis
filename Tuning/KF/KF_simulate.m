function cost = KF_simulate(x, data, do_plot)

fs_cc = 6e3;      % Current control frequency
Ts_cc = 1/fs_cc; % Current control timestep

%% Induction Machine (IM)
IM = struct();
% Nominal values and structural parameters
% Converter control designed to operate with 50% nominal torque and 50% nominal speed
IM.VLLN  = 380;  % [V] Line-line rms rated stator voltage
IM.PN    = 3000; % [W] Rated active power
IM.FPn   = 0.81; % Rated power factor
IM.SN    = IM.PN / IM.FPn; % [VA] Rated apparent power
IM.fN    = 50;             % [Hz] Rated stator frequency
IM.f_max = IM.fN * 0.5;    % [Hz] Max. stator frequency
IM.wN    = 1450 * pi / 30; % [rad/s] Rated rotor speed
IM.w_max = IM.wN * 0.5;    % [rad/s] Max. rotor speed
IM.IN    = IM.SN / (IM.VLLN * sqrt(3));    % [A] Rms rated stator current
IM.TN    = IM.PN / IM.wN;                  % [Nm] Rated electrical torque
IM.FrN   = sqrt(2/3)*IM.VLLN/(2*pi*IM.fN); % [Wb] Rated rotor flux
IM.np    = 2; % Number of pole pairs
% Lumped parameters
IM.J    = 0.006;    % [kg/m^2] Rotor inertia
IM.Rs   = 1.8;      % [Ohm] Stator resistance
IM.Rr   = 1.8;      % [Ohm] Equivalent rotor resistance
IM.Los  = 2.6e-3;   % [H] Stator leakage inductance
IM.Lor  = 2.6e-3;   % [H] Rotor leakage inductance
IM.Lm   = 235.1e-3; % [H] Mutual inductance
IM.Ls   = IM.Los + IM.Lm; % [H] Stator inductance
IM.Lr   = IM.Lor + IM.Lm; % [H] Rotor inductance

IM.kr    = IM.Lm / IM.Lr;
IM.ks    = IM.Lm / IM.Ls;
IM.tau_r = IM.Lr / IM.Rr;
IM.o     = 1 - IM.ks * IM.kr;
IM.Ro    = IM.Rs + IM.Rr * IM.kr^2;
IM.Lo    = IM.o * IM.Ls;
IM.tau_o = IM.Lo / IM.Ro;

%% Modular Multilevel Converter (M2C)
M2C = struct(); % Modular Multilevel Converter parameters
% Parameters
M2C.Rb     = 0.2;                       % [Ohm] Branch resistance
M2C.Lb     = 5e-3;                      % [H] Branch inductance

%% Machine Current Control (MCC)
% Proportional Integral controller, dq reference frame with feedforward compensation
MCC = struct();

MCC.Ts    = Ts_cc;                  % Sampling time
MCC.R     = M2C.Rb/2 + IM.Ro;       % Coupled equivalent converter-machine resistance
MCC.L     = M2C.Lb/2 + IM.Lo;       % Coupled equivalent converter-machine inductance
MCC.tau   = MCC.L / MCC.R;          % Plant time constant

%% Kalman Filtering of Induction Machine (KF)
% Measure current and speed is known, slow varying parameter
KF = struct(); % Kalman Filter parameters, for state estimation in alpha-beta

KF.Ts    = Ts_cc;           % Sampling time
KF.nx    = 4;               % # of state variables
KF.nu    = 2;               % # of inputs
KF.ny    = 2;               % # of measurements
KF.qi    = x.qi;            % Current process noise covariance
KF.qF    = x.qF;            % Flux process noise covariance
KF.r     = 1e-3;            % Current measurement noise covariance
KF.Q     = diag([KF.qi, KF.qi, KF.qF, KF.qF]); % Process noise covariance matrix
KF.R     = KF.r*eye(KF.ny); % Measurement noise covariance matrix
KF.x1_mu = zeros(KF.nx, 1); % Initial state estimations
KF.SIG1  = 1e-3*eye(KF.nx); % Initial state covariance

% State matrix
KF.A       = zeros(KF.nx);
KF.A(1, 1) = -1/MCC.tau;
KF.A(1, 3) = IM.kr/(IM.tau_r*MCC.L);
KF.A(1, 4) = IM.kr/MCC.L; % * we
KF.A(2, 2) = -1/MCC.tau;
KF.A(2, 3) = -IM.kr/MCC.L; % * we
KF.A(2, 4) = IM.kr/(IM.tau_r*MCC.L);
KF.A(3, 1) = IM.Lm/IM.tau_r;
KF.A(3, 3) = -1/IM.tau_r;
KF.A(3, 4) = -1; % * we
KF.A(4, 2) = IM.Lm/IM.tau_r;
KF.A(4, 3) = 1; % * we
KF.A(4, 4) = -1/IM.tau_r;

KF.Ad = eye(KF.nx) + KF.Ts * KF.A + 0.5 * (KF.Ts * KF.A)^2;

% Input matrix
KF.B       = zeros(KF.nx, KF.nu);
KF.B(1, 1) = 1/MCC.L;
KF.B(2, 2) = 1/MCC.L;

KF.Bd = (eye(KF.nx) + 0.5 * KF.Ts * KF.A) * KF.B * KF.Ts;

% Measurement matrix
KF.C = zeros(KF.ny, KF.nx);
KF.C(1, 1) = 1;
KF.C(2, 2) = 1;

% Steady-state Kalman gain schedule
KF.we_steps = 200;
KF.gain_schedule = zeros(KF.nx, KF.ny, KF.we_steps);
KF.we_list = IM.w_max * IM.np * linspace(-1.1, 1.1, KF.we_steps);

for i = 1:KF.we_steps
    we = KF.we_list(i);
    A = KF.A;
    A(1, 4) = KF.A(1, 4) * we;
    A(2, 3) = KF.A(2, 3) * we;
    A(3, 4) = KF.A(3, 4) * we;
    A(4, 3) = KF.A(4, 3) * we;
    Ad = eye(KF.nx) + KF.Ts * A + 0.5 * (KF.Ts * A)^2;
    [~, K] = idare(Ad', KF.C', KF.Q, KF.R);
    K = K.';
    KF.gain_schedule(:, :, i) = K;
end

%% Get simulation variables
im_ab_vec = data(1:2, :);
we_vec = data(3, :);
vm_ab_vec = data(4:5, :);
Fr_ab_vec = data(6:7, :);

%% Apply Kalman Filter

xt_est_apriori = KF.x1_mu;
C  = KF.C;

im_ab_est = zeros(size(im_ab_vec));
Fr_ab_est = zeros(size(Fr_ab_vec));

for t = 1:numel(we_vec)

    im_ab = im_ab_vec(:, t);
    we = we_vec(t);
    vm_ab = vm_ab_vec(:, t);

    % State matrix actualization
    A = KF.A;
    A(1, 4) = A(1, 4) * we;
    A(2, 3) = A(2, 3) * we;
    A(3, 4) = A(3, 4) * we;
    A(4, 3) = A(4, 3) * we;
    M = eye(KF.nx) + 0.5 * KF.Ts * A;
    Ad = eye(KF.nx) + KF.Ts * A * M;
    
    % Initialize
    yt = im_ab;
    ut = vm_ab;
    
    % xt_est = zeros(nx, 1);
    xt_est = zeros(4, 1);
    
    % Measurement update
    Kt = LUT(we, KF);
    xt_est(:) = xt_est_apriori + Kt * (yt - C * xt_est_apriori);
    
    % Temporal update
    Bd = M * KF.B * KF.Ts;
    xt1_est = Ad * xt_est + Bd * ut;
    xt1_est(1:2) = min(max(xt1_est(1:2), -2*IM.IN*sqrt(2)), 2*IM.IN*sqrt(2)); % Clip current
    xt1_est(3:4) = min(max(xt1_est(3:4), -2*IM.FrN), 2*IM.FrN);               % Clip flux
    xt_est_apriori = xt1_est;
    
    % Output
    im_ab_est(:, t) = xt_est(1:2);
    Fr_ab_est(:, t) = xt_est(3:4);
end

%% Compute mean squared error

% Mean squared error
error_i = (im_ab_vec(:) - im_ab_est(:)) / (IM.IN / sqrt(2));
cost = mean(error_i.^2);

% To reduce the spread between good and bad cost
cost = log(1 + cost);

% To prevent Q from exploding (fminsearch cannot be constrained)
if abs(KF.qi) > 1e-3
    cost = cost + abs(KF.qi);
end

if abs(KF.qF) > 1e-3
    cost = cost + abs(KF.qF);
end

%% Plot filtering

if do_plot
    clf
    figure
    subplot(2, 1, 1)
    hold on
    plot(Fr_ab_vec', '--')
    plot(Fr_ab_est')
    legend('Fra*', 'Frb*', 'Fra KF', 'Frb KF')
    hold off
    subplot(2, 1, 2)
    hold on
    plot(im_ab_vec', '--')
    plot(im_ab_est')
    legend('ima*', 'imb*', 'ima KF', 'imb KF')
    hold off
end

end

function Kt = LUT(we, KF)
    % LUT: Look-up table for Kalman gain

    % Find indexes of the closest 2 scheduled gains
    [~, idx_1] = min(abs(KF.we_list - we));
    idx_2 = idx_1 + sign(we - KF.we_list(idx_1));

    N_steps = numel(KF.we_list);
    if min(idx_1, idx_2) == 0
        idx_1 = idx_1 + 1;
        idx_2 = idx_2 + 1;
    elseif max(idx_1, idx_2) == N_steps + 1
        idx_1 = idx_1 - 1;
        idx_2 = idx_2 - 1;
    end

    Kt_1 = KF.gain_schedule(:, :, idx_1);
    Kt_2 = KF.gain_schedule(:, :, idx_2);

    D = KF.we_list(2) - KF.we_list(1);
    coef_1 = abs(we - KF.we_list(idx_2)) / D;
    coef_2 = abs(we - KF.we_list(idx_1)) / D;

    Kt = coef_1 * Kt_1 + coef_2 * Kt_2;
end
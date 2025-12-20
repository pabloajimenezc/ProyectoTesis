function cost = KF_simulate(x)

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
IM.kT    = 1.5 * IM.np * IM.kr;

IM.isdN  = IM.FrN / IM.Lm;
IM.isqN  = IM.TN / (3/2*IM.np*IM.kr*IM.FrN);

%% Modular Multilevel Converter (M2C)
M2C = struct(); % Modular Multilevel Converter parameters
% Parameters
M2C.ax     = [1, 1, 1, 0, 0, 0;         % Input incidence matrix
              0, 0, 0, 1, 1, 1];
M2C.ay     = [1, 0, 0, 1, 0, 0;         % Output incidence matrix
              0, 1, 0, 0, 1, 0;
              0, 0, 1, 0, 0, 1];
M2C.p      = size(M2C.ax, 1);           % # of input ports
M2C.q      = size(M2C.ay, 1);           % # of output ports
M2C.A      = [M2C.ax;                   % Incidence matrix
             -M2C.ay];
M2C.m      = size(M2C.A, 2);            % # of clusters
M2C.pinvA  = pinv(M2C.A);               % Incidence matrix inverse
M2C.N      = null(M2C.A, 'rational');   % Nullspace matrix
M2C.n      = size(M2C.N, 2);            % # of LICCs (Linearly Independent Circulating Currents)
M2C.pinvN  = pinv(M2C.N);               % Nullspace matrix inverse
M2C.Rb     = 0.2;                       % [Ohm] Branch resistance
M2C.Lb     = 5e-3;                      % [H] Branch inductance
M2C.Csm    = 987e-6;                    % [F] Submodule capacitance
M2C.Nsm    = 4;                         % # of submodules per cluster
M2C.C      = M2C.Csm / M2C.Nsm;         % [F] Equivalent branch capacitance
M2C.As     = -eye(M2C.m)*M2C.Rb/M2C.Lb; % Cluster current model continuous state matrix
M2C.Bs     = -eye(M2C.m)/M2C.Lb;        % Cluster current model continuous input matrix
M2C.Vdc    = 520;                       % [V] DC-link voltage
M2C.Ax_max = M2C.Vdc / 2;               % Max. input voltage
M2C.Ay_max = sqrt(2/3)*IM.VLLN*IM.w_max/IM.wN + IM.Rs*IM.IN; % Max. output voltage (50% machine's nominal speed)
M2C.ix_max = 4.2;                       % Max. input current
M2C.iy_max = sqrt(IM.isdN^2+(0.5*IM.isqN)^2); % Max. output current
M2C.is_max = 8.5;                       % Max. branch current
M2C.Vc_ref = 520;                       % Cluster capacitor voltage reference
M2C.vo_max = M2C.Vc_ref - M2C.Ax_max;   % Max. CMV at zero machine speed
M2C.Ec_ref = M2C.C / 2 * M2C.Vc_ref^2;  % Cluster energy reference
M2C.vc_ref = M2C.Vc_ref / M2C.Nsm;      % Submodule capacitor voltage reference
M2C.vc_dev = 0.15;                      % [pu] Max. capacitor voltage deviation from reference
M2C.vc_m_dev = 10/M2C.Vc_ref;           % [pu] Max. cap. voltage MEAN deviation from reference
M2C.Ec_dev = ((1+M2C.vc_dev)^2 - 1);    % [pu] Max. cap. energy deviation from reference

%% Machine Current Control (MCC)
% Proportional Integral controller, dq reference frame with feedforward compensation
MCC = struct();

MCC.Ts    = Ts_cc;                  % Sampling time
MCC.R     = M2C.Rb/2 + IM.Ro;       % Coupled equivalent converter-machine resistance
MCC.L     = M2C.Lb/2 + IM.Lo;       % Coupled equivalent converter-machine inductance
MCC.tau   = MCC.L / MCC.R;          % Plant time constant
MCC.xi    = 1 / sqrt(2);            % Closed loop damping
MCC.wn    = 1 / (MCC.xi * MCC.tau); % Closed loop bandwith
MCC.kp    = 2 * MCC.L * MCC.wn * MCC.xi - MCC.R; % PI proportional gain
MCC.ki    = MCC.L * MCC.wn^2;       % PI integral gain
MCC.u_max = M2C.Ay_max;             % Max. control action

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
KF.Ad       = zeros(KF.nx);
KF.Ad(1, 1) = 1-KF.Ts/MCC.tau;
KF.Ad(1, 3) = KF.Ts*IM.kr/(IM.tau_r*MCC.L);
KF.Ad(1, 4) = KF.Ts*IM.kr/MCC.L; % * we
KF.Ad(2, 2) = 1-KF.Ts/MCC.tau;
KF.Ad(2, 3) = -KF.Ts*IM.kr/MCC.L; % * we
KF.Ad(2, 4) = KF.Ts*IM.kr/(IM.tau_r*MCC.L);
KF.Ad(3, 1) = KF.Ts*IM.Lm/IM.tau_r;
KF.Ad(3, 3) = 1-KF.Ts/IM.tau_r;
KF.Ad(3, 4) = -KF.Ts; % * we
KF.Ad(4, 2) = KF.Ts*IM.Lm/IM.tau_r;
KF.Ad(4, 3) = KF.Ts; % * we
KF.Ad(4, 4) = 1-KF.Ts/IM.tau_r;

% Input matrix
KF.Bd       = zeros(KF.nx, KF.nu);
KF.Bd(1, 1) = KF.Ts/MCC.L;
KF.Bd(2, 2) = KF.Ts/MCC.L;

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
    Ad = KF.Ad;
    Ad(1, 4) = KF.Ad(1, 4) * we;
    Ad(2, 3) = KF.Ad(2, 3) * we;
    Ad(3, 4) = KF.Ad(3, 4) * we;
    Ad(4, 3) = KF.Ad(4, 3) * we;
    [P, K, L, info] = idare(Ad', KF.C', KF.Q, KF.R);
    K = K.';
    KF.gain_schedule(:, :, i) = K;
end


% % Ahora guardamos P_pri y P_post además de K
% KF.we_steps = 200;
% KF.we_list = IM.w_max * IM.np * linspace(-1.1, 1.1, KF.we_steps);
% 
% KF.gain_schedule   = zeros(KF.nx, KF.ny, KF.we_steps); % K
% KF.P_pri_schedule  = zeros(KF.nx, KF.nx, KF.we_steps); % P a priori (predicción)
% KF.P_post_schedule = zeros(KF.nx, KF.nx, KF.we_steps); % P a posteriori (corrección)
% 
% for i = 1:KF.we_steps
%     we = KF.we_list(i);
%     Ad = KF.Ad;
%     Ad(1, 4) = KF.Ad(1, 4) * we; Ad(2, 3) = KF.Ad(2, 3) * we;
%     Ad(3, 4) = KF.Ad(3, 4) * we; Ad(4, 3) = KF.Ad(4, 3) * we;
% 
%     % idare devuelve la covarianza de estado estacionario (Predictiva/A priori)
%     [P_inf, K, ~] = idare(Ad', KF.C', KF.Q, KF.R);
%     K = K.';
% 
%     % Calculamos P a posteriori: P_post = (I - KC) * P_pri
%     P_post = (eye(KF.nx) - K * KF.C) * P_inf;
% 
%     KF.gain_schedule(:, :, i)   = K;
%     KF.P_pri_schedule(:, :, i)  = P_inf;  % P(k|k-1)
%     KF.P_post_schedule(:, :, i) = P_post; % P(k|k)
% end

%% Get simulation variables
out = load('KF_TuningData.mat').out';
im_ab_vec = out(1:2, :);
we_vec = out(3, :);
vm_ab_vec = out(4:5, :);
Fr_ab_vec = out(6:7, :);

%% Apply Kalman Filter

xt_est_apriori = KF.x1_mu;
Bd = KF.Bd;
C  = KF.C;

im_ab_est = zeros(size(im_ab_vec));
Fr_ab_est = zeros(size(Fr_ab_vec));

for t = 1:numel(we_vec)

    im_ab = im_ab_vec(:, t);
    we = we_vec(t);
    vm_ab = vm_ab_vec(:, t);
    
    % State matrix actualization
    Ad = KF.Ad;
    Ad(1, 4) = Ad(1, 4) * we;
    Ad(2, 3) = Ad(2, 3) * we;
    Ad(3, 4) = Ad(3, 4) * we;
    Ad(4, 3) = Ad(4, 3) * we;
    
    % Initialize
    yt = im_ab;
    ut = vm_ab;
    
    % xt_est = zeros(nx, 1);
    xt_est = zeros(4, 1);
    
    % Measurement update
    Kt = LUT(we, KF);
    xt_est(:) = xt_est_apriori + Kt * (yt - C * xt_est_apriori);
    
    % Temporal update
    xt1_est = Ad * xt_est + Bd * ut;
    xt_est_apriori = xt1_est;
    
    % Output
    im_ab_est(:, t) = xt1_est(1:2);
    Fr_ab_est(:, t) = xt1_est(3:4);

end

% %% 2. Forward Kalman Filter (MODIFICADO)
% N_samples = numel(we_vec);
% 
% % Pre-allocation para RTS
% X_pri_hist  = zeros(KF.nx, N_samples); % x(k|k-1)
% X_post_hist = zeros(KF.nx, N_samples); % x(k|k)
% P_pri_hist  = zeros(KF.nx, KF.nx, N_samples);
% P_post_hist = zeros(KF.nx, KF.nx, N_samples);
% A_hist      = zeros(KF.nx, KF.nx, N_samples); % Guardamos la matriz A usada en cada paso
% 
% xt_est_apriori = KF.x1_mu;
% Bd = KF.Bd;
% C  = KF.C;
% 
% for t = 1:N_samples
%     im_ab = im_ab_vec(:, t);
%     we = we_vec(t);
%     vm_ab = vm_ab_vec(:, t);
% 
%     % State matrix actualization (Depende de we)
%     Ad = KF.Ad;
%     Ad(1, 4) = Ad(1, 4) * we; Ad(2, 3) = Ad(2, 3) * we;
%     Ad(3, 4) = Ad(3, 4) * we; Ad(4, 3) = Ad(4, 3) * we;
% 
%     % Guardamos Ad para el paso Backward
%     A_hist(:, :, t) = Ad;
% 
%     % Measurement update (Correction)
%     % Obtenemos K, P_pri, P_post interpolados de la LUT
%     [Kt, Pt_pri, Pt_post] = LUT(we, KF);
% 
%     yt = im_ab;
%     ut = vm_ab;
% 
%     % Corrección: x(k|k)
%     xt_est = xt_est_apriori + Kt * (yt - C * xt_est_apriori);
% 
%     % ALMACENAMIENTO PARA RTS (Forward Pass)
%     X_pri_hist(:, t)      = xt_est_apriori;
%     X_post_hist(:, t)     = xt_est;
%     P_pri_hist(:, :, t)   = Pt_pri;
%     P_post_hist(:, :, t)  = Pt_post;
% 
%     % Time update (Prediction): x(k+1|k)
%     xt1_est = Ad * xt_est + Bd * ut;
%     xt_est_apriori = xt1_est;
% end
% 
% %% 3. RTS Smoother (Backward Pass) (NUEVO)
% 
% X_smooth = zeros(KF.nx, N_samples);
% X_smooth(:, end) = X_post_hist(:, end); % El último valor suavizado es igual al filtrado
% 
% % Recorremos hacia atrás desde N-1 hasta 1
% for t = N_samples-1 : -1 : 1
% 
%     % Recuperamos matrices guardadas
%     P_curr_post = P_post_hist(:, :, t);      % P(t|t)
%     P_next_pri  = P_pri_hist(:, :, t+1);     % P(t+1|t)
%     Ad_next     = A_hist(:, :, t);           % A usada para proyectar t -> t+1
% 
%     % Ganancia de suavizado (Smoother Gain) J = P(t|t) * A' * P(t+1|t)^-1
%     J = P_curr_post * Ad_next' / P_next_pri; 
% 
%     % Estado suavizado: xs(t) = x(t|t) + J * (xs(t+1) - x(t+1|t))
%     x_post_curr = X_post_hist(:, t);         % x(t|t)
%     x_pri_next  = X_pri_hist(:, t+1);        % x(t+1|t)
%     x_smooth_next = X_smooth(:, t+1);        % xs(t+1)
% 
%     X_smooth(:, t) = x_post_curr + J * (x_smooth_next - x_pri_next);
% end
% 
% 
% %% Compute mean squared error
% 
% im_ab_est = X_post_hist(1:2, :);    % Filtro Kalman (Original)
% Fr_ab_est = X_post_hist(3:4, :);    % Filtro Kalman (Original)
% 
% im_ab_smooth = X_smooth(1:2, :);    % RTS Smoother
% Fr_ab_smooth = X_smooth(3:4, :);    % RTS Smoother

error_i = mean((im_ab_vec-im_ab_est).^2, 'all') / IM.isdN^2;
error_F = mean((Fr_ab_vec-Fr_ab_est).^2, 'all') / IM.FrN^2;

% cost = error_i + error_F;

cost = error_i;

if isnan(cost) || cost < 0 || cost > 0.01
    cost = 0.01;
end

% clf
% figure
% subplot(2, 1, 1)
% hold on
% plot(Fr_ab_vec', '--')
% plot(Fr_ab_est')
% plot(Fr_ab_smooth')
% legend('Fra*', 'Frb*', 'Fra KF', 'Frb KF', 'Fra RTS', 'Frb RTS')
% hold off
% subplot(2, 1, 2)
% hold on
% plot(im_ab_vec', '--')
% plot(im_ab_est')
% plot(im_ab_smooth')
% legend('ima*', 'imb*', 'ima KF', 'imb KF', 'ima RTS', 'imb RTS')
% hold off

end

function Kt = LUT(we, KF)
% function [Kt, Pt_pri, Pt_post] = LUT(we, KF)
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

    % % Interp P_pri
    % Pt_pri = coef_1 * KF.P_pri_schedule(:, :, idx_1) + coef_2 * KF.P_pri_schedule(:, :, idx_2);
    % 
    % % Interp P_post
    % Pt_post = coef_1 * KF.P_post_schedule(:, :, idx_1) + coef_2 * KF.P_post_schedule(:, :, idx_2);
end
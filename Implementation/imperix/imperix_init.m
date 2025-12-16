rng(0)

%% Initialize Simulink simulation parameters
%% Simulation

Tf    = 3;       % Total simulation time

fi    = 100e3;    % Simulation frequency
fs_cc = 6e3;      % Current control frequency
fc    = fs_cc/2;  % Carrier frequency (double update)
fs_ce = 600;      % Energy control frequency

Ti    = 1/fi;    % Integration timestep
Ts_cc = 1/fs_cc; % Current control timestep
Tc    = 1/fc;    % Carrier step
Ts_ce = 1/fs_ce; % Energy control timestep
%% Reference Frame Transforms (RFT)

T = reference_frame_transforms;
RFT        = struct();
RFT.abc2ab = T.abc2ab; % Three-phase to alpha-beta
RFT.ab2abc = T.ab2abc; % Alpha-beta to three-phase
RFT.rot    = T.rot;    % 90° rotation
%% Induction Machine (IM)

IM = struct();
%% 
% Nominal values and structural parameters
% 
% Converter control designed to operate with 50% nominal torque and 50% nominal 
% speed

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
%% 
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
%% Induction Machine Stator Voltage Estimation (IM_vs)

IM_vs = struct();

IM_vs.M = [IM.Ro     , -IM.o*IM.Ls, -IM.kr/IM.tau_r;
           IM.o*IM.Ls,       IM.Ro,     IM.kr*IM.np];

% M       = IM_vs.M;
% M(1, 2) = M(1, 2) * ws;
% M(2, 1) = M(2, 1) * ws;
% M(2, 3) = M(2, 3) * wm_ref;
% 
% vm_dq = M * [imdq_ref;
%              Frd_ref];
%% Modular Multilevel Converter (M2C)

M2C = struct(); % Modular Multilevel Converter parameters
%% 
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
%% Positive DC-link Current Control (PCC)
% Proportional Integral controller, constant disturbance

PCC = struct();

PCC.Ts  = Ts_cc;                               % Sampling time
PCC.R   = M2C.Rb;                              % Resistance
PCC.L   = M2C.Lb;                              % Inductance
PCC.tau = PCC.L / PCC.R;                       % Time constant
PCC.xi  = 1 / sqrt(2);                         % Closed loop damping
PCC.wn  = 5 / (PCC.xi * PCC.tau);              % Closed loop bandwith
PCC.kp  = 2 * PCC.L * PCC.wn * PCC.xi - PCC.R; % Proportional gain
PCC.ki  = PCC.L * PCC.wn^2;                    % Integrative gain
PCC.u_max = 5 * M2C.Rb * M2C.ix_max;           % Max. control action
%% Total Energy Balance (TEB)
% Total energy balance PI with feedback first-order low-pass filtering:
% 
% Parameters

TEB = struct(); % Total Energy Balance PI parameters

TEB.Ts = Ts_cc; % Sampling time

% Plant model gain
TEB.k = M2C.Ax_max / (3 * M2C.C * M2C.Vc_ref);

% Second and first order poles (s^2+2*xi*wn*s+wn^2)*(s+wn)
TEB.xi = 1 / sqrt(2); % Damping factor
TEB.wn = PCC.wn / 5; % Natural frequency

% PI
TEB.kp    = TEB.wn / TEB.k;                          % Proportional gain
TEB.ki    = TEB.wn^2 / (TEB.k + 2 * TEB.k * TEB.xi); % Integrator gain
TEB.u_max = M2C.ix_max;                              % Max. control action

% Low-pass filter (yf=alpha*yf+(1-alpha)*y)
TEB.tau_f = 1 / (TEB.wn + 2 * TEB.wn * TEB.xi);
TEB.alpha = exp(-TEB.Ts / TEB.tau_f);
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
%% Field Oriented Control (FOC)

FOC = struct();

FOC.Ts    = Ts_cc;       % Sampling time
FOC.wn    = MCC.wn / 10; % Closed loop bandwith
FOC.xi    = 1 / sqrt(2); % Closed loop damping
FOC.u_max = M2C.iy_max;  % Max. control action

% Flux PI
FOC.kp_F = (2 * FOC.xi * FOC.wn * IM.tau_r - 1) / IM.Lm; % Proportional gain
FOC.ki_F = FOC.wn^2 * IM.tau_r / IM.Lm;                  % Integral gain

% Speed PI
FOC.k_w  = IM.FrN * IM.kT / IM.J;         % Plant model gain
FOC.kp_w = 2 * FOC.wn * FOC.xi / FOC.k_w; % Proportional gain
FOC.ki_w = FOC.wn^2 / FOC.k_w;            % Integral gain
%% Cluster Energy Model Predictive Controller (CEMPC)

CEMPC = struct(); % Cluster Energy MPC parameters

CEMPC.Ts        = Ts_ce; % Sampling time
CEMPC.Nl        = 10;    % # of BCD iterations
CEMPC.Np        = 3;    % Rolling horizon length
CEMPC.ONE       = repmat({ones(M2C.m, 1)}, CEMPC.Np, 1);
CEMPC.ONE       = blkdiag(CEMPC.ONE{:});                     % CMV incidence matrix, long horizon
CEMPC.NN        = repmat({M2C.N}, CEMPC.Np, 1);
CEMPC.NN        = blkdiag(CEMPC.NN{:});                      % LICCs incidence matrix, long horizon
CEMPC.MI        = repmat({eye(M2C.m)-ones(M2C.m)/M2C.m}, CEMPC.Np, 1);
CEMPC.MI        = blkdiag(CEMPC.MI{:});                      % Deviation from mean matrix, long horizon
CEMPC.K         = kron(tril(ones(CEMPC.Np)), eye(M2C.m));
CEMPC.Hu_z      = 2 * CEMPC.NN' * CEMPC.NN / M2C.is_max^2;   % LICCs control effort hessian, normalized
CEMPC.Aineq_z   = [CEMPC.NN; -CEMPC.NN];                     % LICCs control action constraints matrix
CEMPC.Hu_o      = 2 * eye(CEMPC.Np) / M2C.vo_max^2;          % CMV control effort hessian, normalized
CEMPC.Aineq_o   = [eye(CEMPC.Np); -eye(CEMPC.Np)];           % CMV control action constraints matrix
%% 
% 600 Hz

% CEMPC.lambda_z  = 0.2; % LICCs control effort weighting factor
% CEMPC.lambda_o  = 0.8; % CMV control effort weighting factor

CEMPC.lambda_z  = 0.2 * 3;
CEMPC.lambda_o  = 0.4 * 3;

% CEMPC.lambda_z  = 0.2 * 10;
% CEMPC.lambda_o  = 0.4 * 10;

% CEMPC.lambda_z  = 0.2 * 20;
% CEMPC.lambda_o  = 0.4 * 20;
%% Circulating Current MPC (CMPC)

CCMPC = struct();

% Cluster voltage mapping ([vsP; vsm; vse] = T*vs) => vs = T^-1 * [vsP; vsm; vse]
CCMPC.T = -[[1, 1, 1, -1, -1, -1]/2;
                RFT.abc2ab * M2C.ay;
                          M2C.pinvN];
CCMPC.pinvT = pinv(CCMPC.T);

CCMPC.Ts = Ts_cc; % Sampling time
CCMPC.nx = M2C.n; % # of state variables (LICCs)
CCMPC.nu = M2C.n; % # of control actions (decoupled voltage)
% Continuous time state space model
CCMPC.As = -eye(CCMPC.nx) * M2C.Rb / M2C.Lb; % State
CCMPC.Bs = eye(CCMPC.nu) / M2C.Lb;           % Input
% Discrete time model
CCMPC.ABd = expm(CCMPC.Ts * [CCMPC.As, CCMPC.Bs; zeros(CCMPC.nx, CCMPC.nx+CCMPC.nu)]);
CCMPC.Ad  = CCMPC.ABd(1:CCMPC.nx, 1:CCMPC.nx);
CCMPC.Bd  = CCMPC.ABd(1:CCMPC.nx, CCMPC.nx+1:end);

% 2 steps horizon
CCMPC.Bd = [CCMPC.Bd, zeros(CCMPC.nx, CCMPC.nu);
            CCMPC.Ad*CCMPC.Bd, CCMPC.Bd];
CCMPC.Ad = [CCMPC.Ad; CCMPC.Ad^2];
% Hessian
CCMPC.Hx     = 2 * CCMPC.Bd' * CCMPC.Bd / M2C.is_max^2; % Reference tracking (normalized)
CCMPC.Hu     = 2 * eye(2*CCMPC.nu) / M2C.Vc_ref^2;      % Control effort (normalized)
CCMPC.lambda = 10;                                      % Control effort weighting factor
CCMPC.H      = CCMPC.Hx + CCMPC.lambda * CCMPC.Hu;      % Total hessian
CCMPC.H      = (CCMPC.H + CCMPC.H') / 2;                % Symmetrical hessian
% Control action constraints matrix
CCMPC.Aineq  = [CCMPC.pinvT(:, 4:5), zeros(M2C.m, CCMPC.nu);
                zeros(M2C.m, CCMPC.nu), CCMPC.pinvT(:, 4:5);
                -CCMPC.pinvT(:, 4:5), zeros(M2C.m, CCMPC.nu);
                zeros(M2C.m, CCMPC.nu), -CCMPC.pinvT(:, 4:5)];

% Reference low-pass filter (yf=alpha*yf+(1-alpha)*y)
CCMPC.tau_f = CEMPC.Ts/10;
CCMPC.alpha = exp(-CCMPC.Ts/CCMPC.tau_f);
%% Extended Kalman Filtering of Induction Machine (KF)
% Measure current and speed

KF = struct(); % Extended Kalman Filter parameters, for state estimation in alpha-beta

KF.Ts    = Ts_ce;           % Sampling time
KF.nx    = 6;               % # of state variables
KF.nu    = 2;               % # of inputs
KF.ny    = 3;               % # of measurements
KF.qi    = 1e1;             % Current process noise covariance
KF.qF    = 1e-1;            % Flux process noise covariance
KF.qw    = 1e1;             % Speed process noise covariance
KF.qT    = 1e0;            % Speed process noise covariance
KF.r     = 1e-3;            % Current measurement noise covariance
KF.Q     = diag([KF.qi, KF.qi, KF.qF, KF.qF, KF.qw, KF.qT]); % Process noise covariance matrix
KF.R     = KF.r*eye(KF.ny); % Measurement noise covariance matrix
KF.x1_mu = zeros(KF.nx, 1); % Initial state estimations
KF.SIG1  = 1e-3*eye(KF.nx); % Initial state covariance

KF.Ad       = zeros(KF.nx); % State matrix
KF.Ad(1, 1) = 1-KF.Ts/IM.tau_o;
KF.Ad(1, 3) = KF.Ts*IM.kr/(IM.tau_r*IM.Lo);
KF.Ad(1, 4) = KF.Ts*IM.kr/IM.Lo; % * we
KF.Ad(2, 2) = 1-KF.Ts/IM.tau_o;
KF.Ad(2, 3) = -KF.Ts*IM.kr/IM.Lo; % * we
KF.Ad(2, 4) = KF.Ts*IM.kr/(IM.tau_r*IM.Lo);
KF.Ad(3, 1) = KF.Ts*IM.Lm/IM.tau_r;
KF.Ad(3, 3) = 1-KF.Ts/IM.tau_r;
KF.Ad(3, 4) = -KF.Ts; % * we
KF.Ad(4, 2) = KF.Ts*IM.Lm/IM.tau_r;
KF.Ad(4, 3) = KF.Ts; % * we
KF.Ad(4, 4) = 1-KF.Ts/IM.tau_r;
KF.Ad(5, 1) = KF.Ts*IM.np*IM.kT/IM.J; % * Frb
KF.Ad(5, 2) = -KF.Ts*IM.np*IM.kT/IM.J; % * Fra
KF.Ad(5, 5) = 1;
KF.Ad(5, 6) = -KF.Ts*IM.np/IM.J;
KF.Ad(6, 6) = 1;

KF.Adt       = KF.Ad; % Jacobian
KF.Adt(1, 5) = KF.Ts*IM.kr/IM.Lo; % * Frb
KF.Adt(2, 5) = -KF.Ts*IM.kr/IM.Lo; % * Fra
KF.Adt(3, 5) = -KF.Ts; % * Frb
KF.Adt(4, 5) = KF.Ts; % * Fra
KF.Adt(5, 3) = -KF.Ts*IM.np*IM.kT/IM.J; % * isb
KF.Adt(5, 4) = KF.Ts*IM.np*IM.kT/IM.J; % * isa

KF.Bd       = zeros(KF.nx, KF.nu); % Input matrix
KF.Bd(1, 1) = KF.Ts/IM.Lo;
KF.Bd(2, 2) = KF.Ts/IM.Lo;

KF.C = zeros(KF.ny, KF.nx); % Measurement matrix
KF.C(1, 1) = 1;
KF.C(2, 2) = 1;
KF.C(3, 5) = 1;
%% Modulation
% <https://ieeexplore.ieee.org/document/8912558 PSPWM Comparison>
% 
% Phase shifted pulse width modulation (PSPWM)
% 
% Modulation is done with 'Symmetrical PWM' block from Plecs
% 
% Carrier shifts for upper and lower converter clusters are in [0, 1[, as fraction 
% of the carrier period

pspwm = 1;

switch pspwm
    case 0
        du = (0:M2C.Nsm-1)/M2C.Nsm;
        dl = du;
    case 1
        du = (0:M2C.Nsm-1)/M2C.Nsm;
        dl = mod(du + 0.5, 1);
    case 2
        du = (0:M2C.Nsm-1)/M2C.Nsm;
        dl = mod(du + 0.5/M2C.Nsm, 1);
    case 3
        du = (0:M2C.Nsm-1)/M2C.Nsm;
        dl = mod(du + 0.5*(1+1/M2C.Nsm), 1);
    case 4
        du = (0:M2C.Nsm-1)*0.5/M2C.Nsm;
        dl = du;
end
%% 
% Local balancing is performed by rotating the modulation signals of same branch 
% submodules each carrier period
%% Neural network
% Input/output normalization

Xmax = load("ImitationLearningSimulink\TrainingData\Data\Xmax.mat").Xmax;
Ymax = load("ImitationLearningSimulink\TrainingData\Data\Ymax.mat").Ymax;
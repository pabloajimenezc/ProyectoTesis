function cost = KF_simulate(x)

%% Simulation
fs = 6e3;   % Sampling frequency
Ts = 1/fs;  % Control step

%% Induction Machine (IM)
IM = struct();

% Nominal values and structural parameters
IM.VLLN = 380;
IM.fN   = 50;
IM.PN   = 3000;
IM.FPn  = 0.81;
IM.SN   = IM.PN / IM.FPn;
IM.wN   = 1450 * pi / 30;
IM.IN   = IM.SN / (IM.VLLN * sqrt(3));
IM.TN   = IM.PN / IM.wN;
IM.FrN  = sqrt(2/3) * IM.VLLN / (2 * pi * IM.fN);
IM.np   = 2;

% Lumped parameters
IM.J    = 0.006;
IM.Rs   = 1.8;
IM.Rr   = 1.8;
IM.Los  = 2.6e-3;
IM.Lor  = 2.6e-3;
IM.Lm   = 235.1e-3;
IM.Ls   = IM.Los + IM.Lm;
IM.Lr   = IM.Lor + IM.Lm;

IM.kr    = IM.Lm / IM.Lr;
IM.ks    = IM.Lm / IM.Ls;
IM.tau_r = IM.Lr / IM.Rr;
IM.o     = 1 - IM.ks * IM.kr;
IM.Ro    = IM.Rs + IM.Rr * IM.kr^2;
IM.Lo    = IM.o * IM.Ls;
IM.tau_o = IM.Lo / IM.Ro;
IM.kT    = 1.5 * IM.np * IM.kr;

IM.isdN  = IM.FrN / IM.Lm;

%% Field Oriented Control (FOC)
FOC = struct();
FOC.Ts    = Ts;

%% Extended Kalman Filtering of Induction Machine (KF)
KF = struct(); % Extended Kalman Filter parameters, for state estimation in alpha-beta

KF.nx = 5;                     % # of state variables
KF.nu = 2;                     % # of inputs
KF.ny = 2;                     % # of measurements
KF.qi = x.qi;                     % Current process noise covariance
KF.qF = x.qF;                     % Flux process noise covariance
KF.qw = x.qw;                     % Speed process noise covariance
KF.r  = 1e-3;                  % Current measurement noise covariance
KF.Q  = diag([KF.qi, KF.qi, KF.qF, KF.qF, KF.qw]); % Process noise covariance matrix
KF.R  = KF.r*eye(KF.ny);       % Measurement noise covariance matrix
KF.x1_mu = zeros(KF.nx, 1); % Initial state estimations
KF.SIG1 = zeros(KF.nx); % Initial state covariance

KF.Ad       = zeros(KF.nx); % State matrix
KF.Ad(1, 1) = 1-FOC.Ts/IM.tau_o;
KF.Ad(1, 3) = FOC.Ts*IM.kr/(IM.tau_r*IM.Lo);
KF.Ad(1, 4) = FOC.Ts*IM.kr*IM.np/IM.Lo; % * wm
KF.Ad(2, 2) = 1-FOC.Ts/IM.tau_o;
KF.Ad(2, 3) = -FOC.Ts*IM.kr*IM.np/IM.Lo; % * wm
KF.Ad(2, 4) = FOC.Ts*IM.kr/(IM.tau_r*IM.Lo);
KF.Ad(3, 1) = FOC.Ts*IM.Lm/IM.tau_r;
KF.Ad(3, 3) = 1-FOC.Ts/IM.tau_r;
KF.Ad(3, 4) = -FOC.Ts; % * wm
KF.Ad(4, 2) = FOC.Ts*IM.Lm/IM.tau_r;
KF.Ad(4, 3) = FOC.Ts; % * wm
KF.Ad(4, 4) = 1-FOC.Ts/IM.tau_r;
KF.Ad(5, 1) = FOC.Ts*IM.np*IM.kT/IM.J; % * Frb
KF.Ad(5, 2) = -FOC.Ts*IM.np*IM.kT/IM.J; % * Fra
KF.Ad(5, 5) = 1;

KF.Adt       = KF.Ad; % Jacobian
KF.Adt(1, 5) = FOC.Ts*IM.kr/IM.Lo; % * Frb
KF.Adt(2, 5) = -FOC.Ts*IM.kr/IM.Lo; % * Fra
KF.Adt(3, 5) = -FOC.Ts; % * Frb
KF.Adt(4, 5) = FOC.Ts; % * Fra
KF.Adt(5, 3) = -FOC.Ts*IM.np*IM.kT/IM.J; % * isb
KF.Adt(5, 4) = FOC.Ts*IM.np*IM.kT/IM.J; % * isa

KF.Bd = zeros(KF.nx, KF.nu); % Input matrix
KF.Bd(1, 1) = FOC.Ts/IM.Lo;
KF.Bd(2, 2) = FOC.Ts/IM.Lo;

KF.C = eye(KF.ny, KF.nx); % Measurement matrix

%% Get simulation variables
vy_ab = evalin('base', 'out.vy_ab.Data')';
im_ab = evalin('base', 'out.im_ab.Data')';
Fr_ab = evalin('base', 'out.Fr_ab.Data')';
wm_ab = evalin('base', 'out.wm.Data')';

x_real = [im_ab;
          Fr_ab;
          wm_ab];
y = im_ab;

u = vy_ab;

%% Apply Kalman Filter

% Initialization
xt_est_apriori = KF.x1_mu;
SIGt_apriori   = KF.SIG1;
Q  = KF.Q;
R  = KF.R;
Bd = KF.Bd;
C  = KF.C;
kT = IM.kT;
np = IM.np;
Inx = eye(KF.nx);

%% Measurement update
Kt = SIGt_apriori * C' / (R + C * SIGt_apriori * C');
yt_est = C * xt_est_apriori;
xt_est = xt_est_apriori + Kt * (yt - yt_est);
SIGt = (Inx - Kt * C) * SIGt_apriori;

%% NIS (Normalized Innovation Squared)
v   = yt - yt_est;
S   = R + C * SIGt_apriori * C';
Lns = chol(S, 'lower');
t   = Lns'\v;
NIS = t' * t;

%% System matrices actualization
ima  = xt_est(1);
imb  = xt_est(2);
Fra  = xt_est(3);
Frb  = xt_est(4);
wm   = xt_est(5);

% State matrix
Ad = KF.Ad;
Ad(1, 4) = Ad(1, 4) * wm;
Ad(2, 3) = Ad(2, 3) * wm;
Ad(3, 4) = Ad(3, 4) * wm;
Ad(4, 3) = Ad(4, 3) * wm;
Ad(5, 1) = Ad(5, 1) * Frb;
Ad(5, 2) = Ad(5, 2) * Fra;

% Jacobian
Adt = KF.Adt;
Adt(1, 4) = Ad(1, 4);
Adt(2, 3) = Ad(2, 3);
Adt(3, 4) = Ad(3, 4);
Adt(4, 3) = Ad(4, 3);
Adt(5, 1) = Ad(5, 1);
Adt(5, 2) = Ad(5, 2);
Adt(1, 5) = Adt(1, 5) * Frb;
Adt(2, 5) = Adt(2, 5) * Fra;
Adt(3, 5) = Adt(3, 5) * Frb;
Adt(4, 5) = Adt(4, 5) * Fra;
Adt(5, 3) = Adt(5, 3) * imb;
Adt(5, 4) = Adt(5, 4) * ima;

%% Temporal update
xt1_est = Ad * xt_est + Bd * ut;
% yt1_est = C * xt1_est;
SIGt1 = Q + Adt * SIGt * Adt';
SIGt_apriori = SIGt1;
xt_est_apriori = xt1_est;

%% Output
im = xt1_est(1:2);
Fr = xt1_est(3:4);
wm = np * xt1_est(5);
Te = kT * (Fr(2) * im(1) - Fr(1) * im(2));
Tex = toc;
end


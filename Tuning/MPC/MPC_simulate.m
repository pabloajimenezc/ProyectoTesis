function cost = MPC_simulate(x)

% Initialize Simulink simulation parameters

% Simulation
Tf = 2;     % Total simulation time
fs = 6e3;   % Sampling frequency
Ts = 1/fs;  % Control step
Ti = Ts/40; % Integration step
Td = 0*Ti;  % IGBT dead-time

% Reference Frame Transforms (RFT)
T = reference_frame_transforms;
RFT        = struct();
RFT.abc2ab = T.abc2ab;
RFT.ab2abc = T.ab2abc;
RFT.rot    = T.rot;

% Induction Machine (IM)
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

% Induction Machine Stator Voltage Estimation (IM_vs)
IM_vs = struct(); %

IM_vs.M = [IM.Ro     , -IM.o*IM.Ls, -IM.kr/IM.tau_r;
           IM.o*IM.Ls,       IM.Ro,     IM.kr*IM.np];

% Modular Multilevel Converter (M2C)
M2C = struct(); % Modular Multilevel Converter parameters
% Structural parameters
M2C.ax       = [1, 1, 1, 0, 0, 0;       % Input incidence matrix
                0, 0, 0, 1, 1, 1];
M2C.ay       = [1, 0, 0, 1, 0, 0;       % Output incidence matrix
                0, 1, 0, 0, 1, 0;
                0, 0, 1, 0, 0, 1];
M2C.Mx       = M2C.ax' * M2C.ax;
M2C.My       = M2C.ay' * M2C.ay;
M2C.p        = size(M2C.ax, 1);         % # of input ports
M2C.q        = size(M2C.ay, 1);         % # of output ports
M2C.A        = [M2C.ax;                 % Incidence matrix
               -M2C.ay];
M2C.m        = size(M2C.A, 2);          % # of clusters
M2C.pinvA    = pinv(M2C.A);             % Incidence matrix inverse
M2C.N        = null(M2C.A, 'rational'); % Nullspace matrix
M2C.n        = size(M2C.N, 2);          % # of LICCs
M2C.pinvN    = pinv(M2C.N);             % Nullspace matrix inverse
M2C.Vdc      = 520;                     % DC-link voltage
M2C.Ax_max   = M2C.Vdc / 2;             % Max. input voltage
M2C.Ay_max   = IM.VLLN * sqrt(2/3) * 25/IM.fN; % Max. output voltage 
M2C.Nsm      = 4;                       % Number of submodules per cluster
M2C.ix_max   = 4.2;                     % Max. input current
M2C.iy_max   = 4.5;                     % Max. output current
M2C.is_max   = 8.5;                     % Max. branch current
M2C.Vc_m_ref = M2C.Vdc;                 % Mean cluster capacitor voltage reference
% Lumped parameters
M2C.Rb       = 0.2;                        % Branch resistance
M2C.Lb       = 5e-3;                       % Branch inductance
M2C.Csm      = 987e-6;                     % Submodule capacitance
M2C.C        = M2C.Csm / M2C.Nsm;          % Equivalent branch capacitance
M2C.As       = -eye(M2C.m)*M2C.Rb/M2C.Lb;  % Continuous state matrix
M2C.Bs       = -eye(M2C.m)/M2C.Lb;         % Continuous input matrix
M2C.invBs    = inv(M2C.Bs);                % Input matrix inverse
M2C.Ec_m_ref = M2C.C / 2 * M2C.Vc_m_ref^2; % Mean cluster energy reference

% Phase Locked Loop (PLL)
% ImperixPLL
PLL = struct(); % Phase Locked Loop for output voltage port parameters

PLL.Ts = Ts;              % Sampling time
% PLL.xi = 1/sqrt(2);       % Damping factor
PLL.xi = 1.6;
% PLL.wc = 100*2*pi;        % Cutoff frequency
PLL.wc = 9*2*pi;
PLL.kp = 2*PLL.xi*PLL.wc; % Proportional gain
PLL.ki = PLL.wc^2;        % Integrator gain

% TEB and LPF design
% Plant model
k_teb = M2C.Ax_max / (3 * M2C.Vc_m_ref) / M2C.C;
% Closed loop poles assignment (one first and one second order poles)
% Second order pole
xi_acl    = 1 / sqrt(2); % Damping factor
wn_acl    = 2 * pi * 15; % Natural frequency
% First order pole
alpha_acl = 2 * pi * 30; % Natural frequency

% PI
kp_teb   = wn_acl*(wn_acl+2*xi_acl*alpha_acl)/(k_teb*(2*wn_acl*xi_acl+alpha_acl));
ki_teb   = wn_acl^2*alpha_acl/(k_teb*(2*wn_acl*xi_acl+alpha_acl));
% Filter
wn_filt = 2*wn_acl*xi_acl+alpha_acl;

% Low Pass Filter (LPF)

LPF = struct(); % First order Low Pass Filter for mean cluster capacitor voltage parameters

LPF.Ts = Ts;                   % Sampling time
LPF.wn = wn_filt;              % Cutoff frequency
LPF.b0 = LPF.Ts * LPF.wn;      % Discrete transfer function coefficients, Tustin approximation
LPF.b1 = LPF.Ts * LPF.wn;
LPF.a0 = -2 + LPF.Ts * LPF.wn;
LPF.a1 =  2 + LPF.Ts * LPF.wn;    

% Total Energy Balance (TEB)
TEB = struct(); % Total Energy Balance PI parameters 

TEB.Ts    = Ts;          % Sampling time
TEB.kp    = kp_teb;      % Proportional gain
TEB.ki    = ki_teb;      % Integrator gain
TEB.u_min = -M2C.ix_max; % Control action lower bound
TEB.u_max = M2C.ix_max;  % Control action upper bound

% Field Oriented Control (FOC)
FOC = struct();
FOC.Ts    = Ts;
FOC.u_min = -M2C.iy_max;
FOC.u_max = M2C.iy_max;

% Flux
FOC.wn_F = 2 * pi * 10;
FOC.xi_F = 1 / sqrt(2);
% PI (Proportional Integrator)
FOC.kp_F = (2 * FOC.xi_F * FOC.wn_F * IM.tau_r - 1) / IM.Lm;
FOC.ki_F = FOC.wn_F^2 * IM.tau_r / IM.Lm;
FOC.comp_F = 1;
% % P (Only Proportional with gain compensation)
% FOC.kp_F = FOC.wn_F * IM.tau_r / IM.Lm - 1
% FOC.ki_F = 0
% FOC.comp_F = (FOC.kp_F + 1) / FOC.kp_F

% Speed PI
FOC.xi_w = 1 / sqrt(2);
FOC.wn_w = FOC.wn_F * 0.8;
FOC.cw   = IM.kT * IM.FrN * IM.np / IM.J / 10;
FOC.kp_w = 2 * FOC.xi_w * FOC.wn_w / FOC.cw;
FOC.ki_w = FOC.wn_w^2 / FOC.cw;

% Cluster Energy Model Predictive Controller (CEMPC)
CEMPC = struct(); % Cluster Energy MPC parameters

CEMPC.Ts        = Ts;                                      % Sampling time
CEMPC.Nl        = 20;                                      % # of BCD iterations
CEMPC.Np        = 3;                                       % Rolling horizon length
CEMPC.ONE       = repmat({ones(M2C.m, 1)}, CEMPC.Np, 1);
CEMPC.ONE       = blkdiag(CEMPC.ONE{:});                   % CMV incidence matrix, long horizon
CEMPC.NN        = repmat({M2C.N}, CEMPC.Np, 1);
CEMPC.NN        = blkdiag(CEMPC.NN{:});                    % LICCs incidence matrix, long horizon
CEMPC.MI        = repmat({eye(M2C.m)-ones(M2C.m)/M2C.m}, CEMPC.Np, 1);
CEMPC.MI        = blkdiag(CEMPC.MI{:});                    % Deviation from mean matrix, single step
CEMPC.K         = kron(tril(ones(CEMPC.Np)), eye(M2C.m));
CEMPC.Hu_z      = 2 * CEMPC.NN' * CEMPC.NN / M2C.is_max^2; % LICCs control effort hessian, normalized
CEMPC.Aineq_z   = [CEMPC.NN; -CEMPC.NN];                   % LICCs control action constraints matrix
CEMPC.Hu_o      = 2 * eye(CEMPC.Np) / M2C.Vc_m_ref^2;      % CMV control effort hessian, normalized
CEMPC.Aineq_o   = [eye(CEMPC.Np); -eye(CEMPC.Np)];         % CMV control action constraints matrix
% CEMPC.lambda_z  = 0.003;                                 % LICCs control effort weighting factor
% CEMPC.lambda_o  = 0.05;                                  % CMV control effort weighting factor
CEMPC.lambda_z  = x.lambda_z;
CEMPC.lambda_o  = x.lambda_o;

% Cluster Current Model Predictive Controller (CCMPC)
% CCMPC = struct(); % Cluster Current MPC parameters

CCMPC.Ts     = Ts;                                      % Sampling time

% Converter-Motor coupled continuous state variables model matrices
CCMPC.As     = -(M2C.Lb*eye(M2C.m)+IM.Lo*M2C.My)\(M2C.Rb*eye(M2C.m)+IM.Ro*M2C.My);
CCMPC.Bs     = -inv(M2C.Lb*eye(M2C.m)+IM.Lo*M2C.My);

% % Converter-only continuous state variables model matrices
% CCMPC.As     = M2C.As;
% CCMPC.Bs     = M2C.Bs;

CCMPC.Ad     = expm(CCMPC.Ts * CCMPC.As);               % Discrete state matrix, ZOH
CCMPC.Bd     = CCMPC.As\(CCMPC.Ad-eye(M2C.m))*CCMPC.Bs; % Discrete input matrix, ZOH
% CCMPC.Ad     = eye(M2C.m) + CCMPC.Ts * M2C.As;        % Discrete state matrix, Forward Euler
% CCMPC.Bd     = CCMPC.Ts * M2C.Bs;                     % Discrete input matrix, Forward Euler
CCMPC.Hx     = 2 * CCMPC.Bd' * CCMPC.Bd / M2C.is_max^2; % Reference tracking hessian (normalized)
CCMPC.Hu     = 2 * eye(M2C.m) / M2C.Vc_m_ref^2;         % Control effort hessian (normalized)
CCMPC.lambda = x.lambda;                                       % Control effort weighting factor
CCMPC.H      = CCMPC.Hx + CCMPC.lambda * CCMPC.Hu;      % Total hessian
CCMPC.H      = (CCMPC.H + CCMPC.H') / 2;                % Symmetrical hessian
CCMPC.Aineq  = [eye(M2C.m); -eye(M2C.m)];               % Control action constraints matrix

% Modulation
% PSPWM Comparison
% Phase shifted pulse width modulation (PSPWM)
% Modulation is done with 'Symmetrical PWM' block from Plecs
% Carrier shifts for upper and lower converter clusters are in [0, 1[, as fraction of the carrier period
pspwm = 0;

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
% Carrier specifications
Tc = CCMPC.Ts*2;  % Carrier step
fc = 1/Tc;  % Carrier frequency

out = sim('Simulate.slx');
cost = mean(out.MPCcost.Data);

end
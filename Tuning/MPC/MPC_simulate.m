function cost = MPC_simulate(x)

% Initialize Simulink simulation parameters
% Simulation
Tf = 3;        % Total simulation time

fi    = 100e3;   % Simulation frequency
fs_cc = 6e3;     % Current control frequency
fc    = fs_cc/2; % Carrier frequency
fs_ce = 600;     % Energy control frequency

Ti    = 1/fi;    % Integration timestep
Ts_cc = 1/fs_cc; % Current control timestep
Tc    = 1/fc;    % Carrier step
Ts_ce = 1/fs_ce; % Energy control timestep

% Reference Frame Transforms (RFT)
T = reference_frame_transforms;
RFT        = struct();
RFT.abc2ab = T.abc2ab; % Three-phase to alpha-beta
RFT.ab2abc = T.ab2abc; % Alpha-beta to three-phase
RFT.rot    = T.rot;    % 90° rotation

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
% Parameters
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
M2C.Rb       = 0.2;                        % Branch resistance
M2C.Lb       = 5e-3;                       % Branch inductance
M2C.Csm      = 987e-6;                     % Submodule capacitance
M2C.Nsm      = 4;                          % Number of submodules per cluster
M2C.C        = M2C.Csm / M2C.Nsm;          % Equivalent branch capacitance
M2C.As       = -eye(M2C.m)*M2C.Rb/M2C.Lb;  % Continuous state matrix
M2C.Bs       = -eye(M2C.m)/M2C.Lb;         % Continuous input matrix
M2C.invBs    = inv(M2C.Bs);                % Input matrix inverse
M2C.Vdc      = 520;                        % DC-link voltage
M2C.Ax_max   = M2C.Vdc / 2;                % Max. input voltage
M2C.Ay_max   = IM.VLLN * sqrt(2/3) * 25/IM.fN; % Max. output voltage (half manchine's nominal)
M2C.ix_max   = 4.2;                        % Max. input current
M2C.iy_max   = 4.5;                        % Max. output current
M2C.is_max   = 8.5;                        % Max. branch current
M2C.Vc_m_ref = 520;                        % Mean cluster capacitor voltage reference
M2C.Ec_m_ref = M2C.C / 2 * M2C.Vc_m_ref^2; % Mean cluster energy reference

% Total Energy Balance design (TEB)
% Total energy balance PI with input first-order low-pass filtering:
 % (filter equation, Tustin approximation)
% Parameters
TEB = struct();    % Total Energy Balance PI parameters

TEB.Ts    = Ts_ce; % Sampling time

% Plant model
TEB.k = M2C.Ax_max / (3 * M2C.C * M2C.Vc_m_ref);

% Second order pole
TEB.xi    = 1 / sqrt(2); % Damping factor
TEB.wn    = 2 * pi * 15; % Natural frequency
% First order pole
TEB.alpha = 2 * pi * 30; % Natural frequency

% PI
TEB.kp    = TEB.wn*(TEB.wn+2*TEB.xi*TEB.alpha)/(TEB.k*(2*TEB.wn*TEB.xi+TEB.alpha));      % Proportional gain
TEB.ki    = TEB.wn^2*TEB.alpha/(TEB.k*(2*TEB.wn*TEB.xi+TEB.alpha));      % Integrator gain
TEB.u_min = -M2C.ix_max; % Control action lower bound
TEB.u_max = M2C.ix_max;  % Control action upper bound
% Low-pass filter discrete transfer function coefficients, Tustin approximation
TEB.wf = 2*TEB.wn*TEB.xi+TEB.alpha;
TEB.b0 = TEB.Ts * TEB.wf;
TEB.b1 = TEB.Ts * TEB.wf;
TEB.a0 = -2 + TEB.Ts * TEB.wf;
TEB.a1 =  2 + TEB.Ts * TEB.wf;

% Field Oriented Control (FOC)
FOC = struct();
FOC.Ts    = Ts_ce;       % Sampling time
FOC.u_min = -M2C.iy_max; % Max. control output
FOC.u_max = M2C.iy_max;  % Min. control output

% Flux PI
FOC.wn_F = 2 * pi * 10;
FOC.xi_F = 1 / sqrt(2);
FOC.kp_F = (2 * FOC.xi_F * FOC.wn_F * IM.tau_r - 1) / IM.Lm;
FOC.ki_F = FOC.wn_F^2 * IM.tau_r / IM.Lm;

% Speed PI
FOC.xi_w = 1 / sqrt(2);
FOC.wn_w = FOC.wn_F * 0.8;
FOC.cw   = IM.kT * IM.FrN * IM.np / IM.J / 10;
FOC.kp_w = 2 * FOC.xi_w * FOC.wn_w / FOC.cw;
FOC.ki_w = FOC.wn_w^2 / FOC.cw;

% Cluster Energy Model Predictive Controller (CEMPC)
CEMPC = struct(); % Cluster Energy MPC parameters

CEMPC.Ts        = Ts_ce; % Sampling time
CEMPC.Nl        = 10;    % # of BCD iterations
CEMPC.Np        = 1;    % Rolling horizon length
CEMPC.ONE       = repmat({ones(M2C.m, 1)}, CEMPC.Np, 1);
CEMPC.ONE       = blkdiag(CEMPC.ONE{:});                     % CMV incidence matrix, long horizon
CEMPC.NN        = repmat({M2C.N}, CEMPC.Np, 1);
CEMPC.NN        = blkdiag(CEMPC.NN{:});                      % LICCs incidence matrix, long horizon
CEMPC.MI        = repmat({eye(M2C.m)-ones(M2C.m)/M2C.m}, CEMPC.Np, 1);
CEMPC.MI        = blkdiag(CEMPC.MI{:});                      % Deviation from mean matrix, single step
CEMPC.K         = kron(tril(ones(CEMPC.Np)), eye(M2C.m));
CEMPC.Hu_z      = 2 * CEMPC.NN' * CEMPC.NN / M2C.is_max^2;   % LICCs control effort hessian, normalized
CEMPC.Aineq_z   = [CEMPC.NN; -CEMPC.NN];                     % LICCs control action constraints matrix
CEMPC.Hu_o      = 2 * eye(CEMPC.Np) / M2C.Vc_m_ref^2;        % CMV control effort hessian, normalized
CEMPC.Aineq_o   = [eye(CEMPC.Np); -eye(CEMPC.Np)];           % CMV control action constraints matrix

CEMPC.lambda_z  = x.lambda_z; % LICCs control effort weighting factor
CEMPC.lambda_o  = x.lambda_o;  % CMV control effort weighting factor

% Positive DC-link Current Control (PCC)
% Proportional Integral controller, constant disturbance
PCC = struct();

PCC.Ts  = Ts_cc;
PCC.R   = M2C.Rb;
PCC.L   = M2C.Lb;
PCC.tau = PCC.L / PCC.R;
PCC.wn  = 10 / PCC.tau;
PCC.xi  = 1/sqrt(2);
PCC.kp  = 2 * PCC.L * PCC.wn * PCC.xi - PCC.R;
PCC.ki  = PCC.L * PCC.wn^2;

% Machine Current Control (MCC)
% Proportional Integral controller, back emf must be feedforwarded or tune the PI with reduced bandwith
MCC = struct();

MCC.Ts  = Ts_cc;
MCC.R   = M2C.Rb + 2 * IM.Ro;
MCC.L   = M2C.Lb + 2 * IM.Lo;
MCC.tau = MCC.L / MCC.R;
MCC.wn  = 5 / MCC.tau;
MCC.xi  = 1/sqrt(2);
MCC.kp  = 2 * MCC.L * MCC.wn * MCC.xi - MCC.R;
MCC.ki  = MCC.L * MCC.wn^2;

% Circulating Current MPC (CMPC)
CCMPC = struct();

% Cluster voltage mapping
CCMPC.T = -[[1, 1, 1, -1, -1, -1]/2;
                RFT.abc2ab * M2C.ay;
                          M2C.pinvN];
CCMPC.pinvT = pinv(CCMPC.T);

CCMPC.Ts = Ts_cc; % Sampling time
CCMPC.Np = 1;     % Rolling horizon length
CCMPC.nx = M2C.n; % # of state variables (LICCs)
CCMPC.nu = M2C.n; % # of control actions (decoupled voltage)
% Continuous time state space model
CCMPC.As = -eye(CCMPC.nx) * M2C.Rb / M2C.Lb; % State
CCMPC.Bs = eye(CCMPC.nu) / M2C.Lb;           % Input
% Discrete time model
CCMPC.Ad = expm(CCMPC.Ts * CCMPC.As);        
CCMPC.integrated = CCMPC.As\(CCMPC.Ad-eye(CCMPC.nx));
CCMPC.Bd = CCMPC.integrated*CCMPC.Bs;
% Np steps model
CCMPC.AA = arrayfun(@(t) CCMPC.Ad^t, 1:CCMPC.Np, 'UniformOutput', false);
CCMPC.AA = vertcat(CCMPC.AA{:});
CCMPC.AA_aux = [eye(CCMPC.nx); CCMPC.AA(1:end-CCMPC.nx, :)];
CCMPC.AAA = cell2mat(arrayfun(@(t) [zeros(CCMPC.nx*t, CCMPC.nx); CCMPC.AA_aux(1:end-CCMPC.nx*t, :)], 0:CCMPC.Np-1, 'UniformOutput', false));
CCMPC.IB = repmat({CCMPC.Bd}, 1, CCMPC.Np);
CCMPC.IB = blkdiag(CCMPC.IB{:});
CCMPC.BB = CCMPC.AAA * CCMPC.IB;
CCMPC.Ad = CCMPC.AA;
CCMPC.Bd = CCMPC.BB;
% Hessian
CCMPC.Hx     = 2 * CCMPC.Bd' * CCMPC.Bd / M2C.is_max^2; % Reference tracking (normalized)
CCMPC.Hu     = 2 * eye(CCMPC.nu * CCMPC.Np) / M2C.Vc_m_ref^2; % Control effort (normalized)
CCMPC.lambda = 10;                             % Control effort weighting factor
CCMPC.H      = CCMPC.Hx + CCMPC.lambda * CCMPC.Hu;      % Total hessian
CCMPC.H      = (CCMPC.H + CCMPC.H') / 2;                % Symmetrical hessian
% Control action constraints matrix
% CCMPC.Te    = repmat({CCMPC.pinvT(:, 4:5)}, CCMPC.Np, 1);
% CCMPC.Te    = blkdiag(CCMPC.Te{:});
% CCMPC.Aineq = [CCMPC.Te; -CCMPC.Te]; % [up; lb]
CCMPC.Aineq = zeros(1, CCMPC.nu*CCMPC.Np);

% Modulation
% PSPWM Comparison
% Phase shifted pulse width modulation (PSPWM)
% Modulation is done with 'Symmetrical PWM' block from Plecs
% Carrier shifts for upper and lower converter clusters are in [0, 1[, as fraction of the carrier period
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
% Local balancing is performed rotating the modulation signals of same branch submodules each carrier period

out  = sim("TestBenchSimulink\Simulate.slx");
cost = mean(out.MPCcost.Data);
end
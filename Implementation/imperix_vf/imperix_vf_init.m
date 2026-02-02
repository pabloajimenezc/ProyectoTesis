rng(0)

%% Initialize parameters

%% Simulation

fs_cc = 6e3;      % Current control frequency
fc    = fs_cc/2;  % Carrier frequency (double update)
fs_ce = 600;      % Energy control frequency

Ts_cc = 1/fs_cc; % Current control timestep
Tc    = 1/fc;    % Carrier step
Ts_ce = 1/fs_ce; % Energy control timestep

%% Induction Machine (IM)

IM = struct(); % Induction machine parameters

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

IM.J    = 0.1;    % [kg/m^2] Rotor inertia
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
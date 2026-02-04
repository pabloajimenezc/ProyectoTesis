rng(0)

%% Simulation parameters

fs_cc = 6e3;      % Current control frequency
fs_ce = 600;      % Energy control frequency

Ts_cc = 1/fs_cc; % Current control timestep
Ts_ce = 1/fs_ce; % Energy control timestep

%% Initialize objects

IM  = ClassIM();               % Induction Machine
M2C = ClassM2C(IM);            % Modular Multilevel Converter (M2C)
KF  = ClassKF(Ts_cc, IM, M2C); % Kalman Filter 
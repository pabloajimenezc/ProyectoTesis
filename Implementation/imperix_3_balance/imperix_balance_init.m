rng(0)

%% Simulation parameters

fs_cc = 6e3;     % Current control frequency
fs_ce = 600;     % Energy control frequency

Ts_cc = 1/fs_cc; % Current control timestep
Ts_ce = 1/fs_ce; % Energy control timestep

%% Initialize objects

RFT = ClassRFT();                     % Reference Frame Transforms
IM  = ClassIM();                      % Induction Machine
M2C = ClassM2C(IM, RFT);              % Modular Multilevel Converter
KF  = ClassKF(Ts_cc, IM, M2C);        % Kalman Filter
MCC = ClassMCC(Ts_cc, IM, M2C);       % Induction Machine Current Control
FOC = ClassFOC(Ts_cc, IM, MCC, M2C);  % Field Oriented Control
PCC = ClassPCC(Ts_cc, M2C);           % Positive DC-link Current Control
TEC = ClassTEC(Ts_cc, M2C, PCC);      % Total Energy Balance Control
IEC = ClassIEC(Ts_ce, M2C);           % Intercluster Energy Balance Control
CCC = ClassCCC(Ts_cc, M2C, IEC);      % Circulating Current Control

% Convert to struct for code generation
RFT = RFT.toStruct();
IM  = IM.toStruct();
M2C = M2C.toStruct();
KF  = KF.toStruct();
MCC = MCC.toStruct();
FOC = FOC.toStruct();
PCC = PCC.toStruct();
TEC = TEC.toStruct();
IEC = IEC.toStruct();
CCC = CCC.toStruct();

%% Neural network

Xmax = load("ImitationLearningSimulink\TrainingData\Data\Xmax.mat").Xmax; % Input scaling
Ymax = load("ImitationLearningSimulink\TrainingData\Data\Ymax.mat").Ymax; % Output scaling
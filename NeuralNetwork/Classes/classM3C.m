classdef classM3C < rl.env.MATLABEnvironment
% IMPORTANT:

% M3C -> Instance of the classM3C class, modifiable properties
% classM3C -> Class, constant properties

%% Properties: Simulation and control steps
properties (Constant)
    % Simulation
    Tf = 0.5;        % Time length
    Ts = 2e-5;	   % Sample time
    % TEB
    Ti = 2e-4;     % Sample time
    Ti_idx = round(classM3C.Ti/classM3C.Ts)
    % ICB + LFOM
    Tl = 1e-4;     % Sample time
    Tl_idx = round(classM3C.Tl/classM3C.Ts)
    % T_idx: Period in terms of multiple of the fundamental
end

%% Properties: External voltages
properties (Constant)
    % Input grid voltage
    Ax = 7000;
    fxi = 50;
    wx0 = 2*pi*classM3C.fxi;
    % Output grid voltage
    Ay = 5000;
    fyi = 30;
    wy0 = 2*pi*classM3C.fyi;
end

%% Properties: Converter model
properties (Constant)
    % M3C incidence matrix
    A = [1  1  1  0  0  0  0  0  0;
         0  0  0  1  1  1  0  0  0;
         0  0  0  0  0  0  1  1  1;
        -1  0  0 -1  0  0 -1  0  0;
         0 -1  0  0 -1  0  0 -1  0;
         0  0 -1  0  0 -1  0  0 -1];
    pinvA = pinv(classM3C.A);
    m = size(classM3C.A, 2);
    N = null(classM3C.A, 'rational');
    pinvN = pinv(classM3C.N);
    C = 20e-3;	% Average cluster capacitance
    L = 200e-4; % Branch inductance
    R = 0.001;	% Branch resistance
end

%% Properties: Reference frame transformations
properties (Constant)
    Tabc_ab = (2/3)*[1, -1/2, -1/2; 0, sqrt(3)/2, -sqrt(3)/2];
    Tab_abc = [1, 0; -1/2, sqrt(3)/2; -1/2, -sqrt(3)/2];
    Tabc_dq_function = @(g) (2/3)*[cos(g), cos(g-2*pi/3), cos(g+2*pi/3); -sin(g), -sin(g-2*pi/3), -sin(g+2*pi/3)];
end

%% Properties: Limit and normalization values
properties (Constant)
    % Limits
    Vxy_max = classM3C.Ax + classM3C.Ay; % Branch voltage
    Von_max = classM3C.Vxy_max / 2;  % Common mode voltage
    Is_max = 250; % Cluster current
    Ix_max = 200; % Input current

    % Cluster capacitor voltage reference
    vc_ref = 1.5 * classM3C.Vxy_max;
    % Capacitor Energy reference
    Ec_ref = (classM3C.C/2/4) * classM3C.vc_ref^2;

    Xmax = [classM3C.Ec_ref*ones(9, 1); classM3C.vc_ref*ones(9, 1); classM3C.Is_max*ones(9, 1)];
    % Ymax = [classM3C.Is_max*ones(4, 1); classM3C.Von_max; classM3C.Ec_ref*ones(9, 1)];
    Ymax = [classM3C.Is_max*ones(4, 1); classM3C.Von_max];
end

%% Properties: Initialization
properties (Constant)
    % PLL
    Kp_pll = 0.5;
    Ki_pll = 1.5;
    n_pll = 1 - classM3C.Ti * 0.5 * classM3C.Ki_pll / classM3C.Kp_pll;
    % TEB
    Kp_teb = 6.48156886919677*3;
    Ki_teb = 397.264633627808/20;
    n_teb = 1 - classM3C.Ti * 0.5 * classM3C.Ki_teb / classM3C.Kp_teb;
    % ICB + LFOM
    lambda_z = 2;
    lambda_o = 0.1;
    % Cluster current control
    pl = eye(classM3C.m);
    lambda = 0.00005;
    Ad = expm(-classM3C.R * classM3C.Tl * eye(classM3C.m) / classM3C.L);
    Bd = (-classM3C.R * eye(classM3C.m) / classM3C.L) \ (classM3C.Ad - eye(classM3C.m)) * (-eye(classM3C.m) / classM3C.L);
end

%% Properties: Initial values
properties
    vc0 = classM3C.vc_ref * ones(classM3C.m, 1); % Cluster capacitor voltage
    Ec0 = (classM3C.C/2/4) * classM3C.vc_ref^2 * ones(classM3C.m, 1); % Cluster energy
end

%% Properties: Maneuver
properties (Constant)
    Tini = 1;                    % Initial maneuver time
    Tfin = 2;                    % Final maneuver time
    wyf = 50*2*pi;               % Final maneuver speed
    acel = (classM3C.wyf - classM3C.wy0) / (classM3C.Tfin - classM3C.Tini); % Maneuver acceleration
end

%% Properties: Initialize subsystems and RL 
properties
    PlotLastN = floor(classM3C.Tf/classM3C.Tl)
    UpdatePlot = false
    ObservationHistory = []
    ActionHistory = []
    RewardHistory = []
    ObservationPlot
    ActionPlot
    RewardPlot
    Observation
    Action
    Reward
    S = struct() % System state
    PLL = struct() % Phase Locked Loop
    TEB = struct() % Total Energy Balance
    ICB = struct() % Inter Cluster Balance + Low Frequency Oscillation Mitigation
    CC = struct() % Cluster Current
end

%% Properties: Terminate episode
properties(Access = protected)
    % Initialize internal flag to indicate episode termination
    IsDone = false
end

%% Method: Constructor (environement instantiation)
methods
    function M3C = classM3C()
        rng(0)

        % Initialize Observation settings
        ObservationInfo = rlNumericSpec([27, 1]);
        ObservationInfo.Name = 'ICB+LFOM Inputs';
        ObservationInfo.Description = 'Ec (9), vB (9), iB (9)';
        
        % Initialize Action settings   
        ActionInfo = rlNumericSpec([5, 1], 'LowerLimit', -classM3C.Ymax, 'UpperLimit', classM3C.Ymax);
        ActionInfo.Name = 'ICB+LFOM Outputs';
        ActionInfo.Description = 'ie (4), von (1)';
        
        % The following line implements built-in functions of RL env
        M3C = M3C@rl.env.MATLABEnvironment(ObservationInfo, ActionInfo);
        
        % Initialize property values and pre-compute necessary values
        % updateActionInfo(M3C);
    end
end

%% Method: Step (system's transition function)
methods
    function [Observation, Reward, IsDone, Info] = step(M3C, Action)
        Info = [];
        
        %%% Maneuver
        if classM3C.Tini < M3C.S.t && M3C.S.t < classM3C.Tfin
        % if and(classM3C.Tini < M3C.S.t, M3C.S.t < classM3C.Tfin)
            M3C.S.wy = M3C.S.wy + classM3C.acel * classM3C.Ts;
        end
        
        %%% External and basic variables
        % Phase voltages
        M3C.S.vxa = classM3C.Ax * cos(M3C.S.gx);
        M3C.S.vxb = classM3C.Ax * cos(M3C.S.gx-2*pi/3);
        M3C.S.vxc = classM3C.Ax * cos(M3C.S.gx+2*pi/3);
        M3C.S.vyr = classM3C.Ay * cos(M3C.S.gy);
        M3C.S.vys = classM3C.Ay * cos(M3C.S.gy-2*pi/3);
        M3C.S.vyt = classM3C.Ay * cos(M3C.S.gy+2*pi/3);

        M3C.S.gx = M3C.S.gx + M3C.S.wx * classM3C.Ts;
        M3C.S.gy = M3C.S.gy + M3C.S.wy * classM3C.Ts;

        % I/O voltages and currents
        M3C.S.vxy = [M3C.S.vxa; M3C.S.vxb; M3C.S.vxc; M3C.S.vyr; M3C.S.vys; M3C.S.vyt];
        M3C.S.ixy = classM3C.A * M3C.S.is;
        
        % Basic voltages and currents
        M3C.S.vB = classM3C.A' * M3C.S.vxy;
        M3C.S.iB = classM3C.pinvA * M3C.S.ixy;
        
        % Circulating currents
        M3C.S.iz = M3C.S.is - M3C.S.iB;
        M3C.S.ie = classM3C.pinvN * M3C.S.iz;

%%%%%%% TEB, Tcur==Tsim
        if mod(M3C.S.t_idx, classM3C.Ti_idx) == 0
            % Input PLL
            vxdq = classM3C.Tabc_dq_function(M3C.PLL.gx) * M3C.S.vxy(1:3);
            vxd = vxdq(1);
            vxq = vxdq(2);
            M3C.PLL.ex = vxq;
            M3C.PLL.ax = (classM3C.n_pll - 1) * M3C.PLL.ux / classM3C.Kp_pll + M3C.PLL.ax * classM3C.n_pll;
            M3C.PLL.ux = (M3C.PLL.ex - M3C.PLL.ax) * classM3C.Kp_pll;
            M3C.PLL.wx = M3C.PLL.ux + M3C.S.wx;
            M3C.PLL.gx = M3C.PLL.gx + classM3C.Ti * M3C.PLL.wx;
            M3C.PLL.gx = mod(M3C.PLL.gx, 2*pi); % Mapped to [0, 2*pi]
    
            % Output PLL
            vydq = classM3C.Tabc_dq_function(M3C.PLL.gy) * M3C.S.vxy(4:6);
            vyd = vydq(1);
            vyq = vydq(2);
            M3C.PLL.ey = vyq;
            M3C.PLL.ay = (classM3C.n_pll - 1) * M3C.PLL.uy / classM3C.Kp_pll + M3C.PLL.ay * classM3C.n_pll;
            M3C.PLL.uy = (M3C.PLL.ey - M3C.PLL.ay) * classM3C.Kp_pll;
            M3C.PLL.wy = M3C.PLL.uy + M3C.S.wy;
            M3C.PLL.gy = M3C.PLL.gy + classM3C.Ti * M3C.PLL.wy;
            M3C.PLL.gy = mod(M3C.PLL.gy, 2*pi); % Mapped to [0, 2*pi]

            % TEB PI
            M3C.TEB.e = classM3C.vc_ref - sqrt(4*2*abs(mean(M3C.S.Ec))*sign(mean(M3C.S.Ec))/classM3C.C);
            M3C.TEB.a = (classM3C.n_teb - 1) * M3C.TEB.u / classM3C.Kp_teb + M3C.TEB.a * classM3C.n_teb;
            M3C.TEB.u = (M3C.TEB.e - M3C.TEB.a) * classM3C.Kp_teb;
            M3C.TEB.u = min(max(M3C.TEB.u, -classM3C.Ix_max), classM3C.Ix_max); % Saturation between Ix_max*[-1, 1]

            % Input currents references
            M3C.TEB.Ixd_ref = M3C.TEB.u;
            M3C.TEB.ixa_ref = M3C.TEB.Ixd_ref * cos(M3C.PLL.gx)        - M3C.TEB.Ixq_ref * sin(M3C.PLL.gx);
            M3C.TEB.ixb_ref = M3C.TEB.Ixd_ref * cos(M3C.PLL.gx-2*pi/3) - M3C.TEB.Ixq_ref * sin(M3C.PLL.gx-2*pi/3);
            M3C.TEB.ixc_ref = M3C.TEB.Ixd_ref * cos(M3C.PLL.gx+2*pi/3) - M3C.TEB.Ixq_ref * sin(M3C.PLL.gx+2*pi/3);

            % Output currents references (must come from the converter's application) 
            M3C.TEB.Iyd_ref = 100;
            M3C.TEB.Iyq_ref = 0;
            M3C.TEB.iyr_ref = M3C.TEB.Iyd_ref * cos(M3C.PLL.gy)        - M3C.TEB.Iyq_ref * sin(M3C.PLL.gy);
            M3C.TEB.iys_ref = M3C.TEB.Iyd_ref * cos(M3C.PLL.gy-2*pi/3) - M3C.TEB.Iyq_ref * sin(M3C.PLL.gy-2*pi/3);
            M3C.TEB.iyt_ref = M3C.TEB.Iyd_ref * cos(M3C.PLL.gy+2*pi/3) - M3C.TEB.Iyq_ref * sin(M3C.PLL.gy+2*pi/3);
            
            M3C.TEB.ixy_ref = [M3C.TEB.ixa_ref; M3C.TEB.ixb_ref; M3C.TEB.ixc_ref; M3C.TEB.iyr_ref; M3C.TEB.iys_ref; M3C.TEB.iyt_ref];
            M3C.TEB.iB_ref = classM3C.pinvA * M3C.TEB.ixy_ref;
        end

%%%%%%% ICB+LFOM, Ten==Tsim
        % if mod(M3C.S.t_idx, classM3C.Tl_idx) == 0
        %     % Observation
        %     Observation = [M3C.S.Ec; M3C.S.vB; M3C.S.iB];
        %     M3C.Observation = Observation;
        %     % Action
        %     M3C.Action = Action;
        %     M3C.ICB.ie_ref = Action(1:4);
        %     M3C.ICB.iz_ref = classM3C.N * Action(1:4);
        %     M3C.ICB.von = Action(5);
        % 
        %     M3C.ICB.is_ref = M3C.TEB.iB_ref + M3C.ICB.iz_ref;
        % else
        %     Observation = M3C.Observation;
        % end

        % Observation
        Observation = [M3C.S.Ec; M3C.S.vB; M3C.S.iB];
        M3C.Observation = Observation;
        % Action
        M3C.Action = Action;
        M3C.ICB.ie_ref = Action(1:4);
        M3C.ICB.iz_ref = classM3C.N * Action(1:4);
        M3C.ICB.von = Action(5);

        M3C.ICB.is_ref = M3C.TEB.iB_ref + M3C.ICB.iz_ref;

%%%%%%% CC, Ten==Tsim
        % if mod(M3C.S.t_idx, classM3C.Tl_idx) == 0
        %     g = classM3C.Ad * M3C.S.is - classM3C.Bd * M3C.S.vB - classM3C.Bd * M3C.ICB.von * ones(classM3C.m, 1) - M3C.ICB.is_ref;
        %     H = 2 * (classM3C.Bd' * classM3C.Bd + classM3C.lambda * classM3C.pl);
        %     f = 2 * (g' * classM3C.Bd - classM3C.lambda * M3C.S.vB')';
        %     options = mpcActiveSetOptions;
        %     options.MaxIterations = 100;
        %     options.ConstraintTolerance = 1.0e-4;
        %     lb = -M3C.vc0 + M3C.ICB.von;
        %     ub = M3C.vc0 + M3C.ICB.von;
        %     iA0 = false(size([ub; -lb]));
        %     [Z, exitflag] = mpcActiveSetSolver(H, f, [eye(classM3C.m); -eye(classM3C.m)], [ub; -lb], zeros(0, length(f)), zeros(0, 1), iA0, options);
        %     M3C.CC.vs = Z - M3C.ICB.von;
        % end

        g = classM3C.Ad * M3C.S.is - classM3C.Bd * M3C.S.vB - classM3C.Bd * M3C.ICB.von * ones(classM3C.m, 1) - M3C.ICB.is_ref;
        H = 2 * (classM3C.Bd' * classM3C.Bd + classM3C.lambda * classM3C.pl);
        f = 2 * (g' * classM3C.Bd - classM3C.lambda * M3C.S.vB')';
        options = mpcActiveSetOptions;
        options.MaxIterations = 100;
        options.ConstraintTolerance = 1.0e-4;
        lb = -M3C.vc0 + M3C.ICB.von;
        ub = M3C.vc0 + M3C.ICB.von;
        iA0 = false(size([ub; -lb]));
        [Z, exitflag] = mpcActiveSetSolver(H, f, [eye(classM3C.m); -eye(classM3C.m)], [ub; -lb], zeros(0, length(f)), zeros(0, 1), iA0, options);
        M3C.CC.vs = Z - M3C.ICB.von;

        % The control signals (vB, vs, von) remain constant until the 
        % fastest(s) control(s) is(are) updated (ICB+LFOM and CC with Tl sampling time),
        % equivalent to Tl_idx timesteps. That is, the environement update period.
        for t = 1:classM3C.Tl_idx
            % Update system states
            M3C.S.Ec = M3C.S.Ec + classM3C.Ts * M3C.CC.vs .* M3C.S.is;
            M3C.S.vc = sqrt(2*4*abs(M3C.S.Ec).*sign(M3C.S.Ec)/classM3C.C);
            M3C.S.is = M3C.S.is + classM3C.Ts/classM3C.L * (M3C.S.vB + M3C.ICB.von - M3C.CC.vs + classM3C.R * M3C.S.is);
            % Fundamental timestep update
            M3C.S.t = M3C.S.t + classM3C.Ts;
            M3C.S.t_idx = M3C.S.t_idx + 1;
        end

        % Check terminal condition
        stop_signals = [abs(M3C.S.Ec) > classM3C.Ec_ref*2; abs(M3C.S.is) > classM3C.Is_max*2; M3C.S.t >= classM3C.Tf];
        IsDone = any(stop_signals);
        M3C.IsDone = IsDone;
        
        % Get reward
        Reward = getReward(M3C);
        M3C.Reward = Reward;
        
        %%%
        notifyEnvUpdated(M3C);
    end
end

%% Method: Reset
methods
    function InitialObservation = reset(M3C)
        %%% Random initial values
        rand_init = randn(classM3C.m, 1)*0.005;
        rand_init = rand_init - mean(rand_init);
        rand_init = rand_init + 1;
        M3C.vc0 = classM3C.vc_ref * ones(classM3C.m, 1) .* rand_init; % Cluster capacitor voltage
        M3C.Ec0 = (classM3C.C/2/4) * M3C.vc0.^2; % Cluster energy        
        %%% System states
        M3C.S.t = 0;
        M3C.S.t_idx = 1;
        M3C.S.is = zeros(classM3C.m, 1);
        M3C.S.Ec = M3C.Ec0;
        M3C.S.vc = M3C.vc0;
        %%% External variables
        % Phase voltages
        M3C.S.wx = classM3C.wx0;
        M3C.S.wy = classM3C.wy0;
        M3C.S.gx = 0;
        M3C.S.gy = 0;
        M3C.S.vxa = classM3C.Ax * cos(0);
        M3C.S.vxb = classM3C.Ax * cos(-2*pi/3);
        M3C.S.vxc = classM3C.Ax * cos(2*pi/3);
        M3C.S.vyr = classM3C.Ay * cos(0);
        M3C.S.vys = classM3C.Ay * cos(-2*pi/3);
        M3C.S.vyt = classM3C.Ay * cos(2*pi/3);
        M3C.S.vxy = zeros(6, 1);
        % Phase currents
        M3C.S.ixa = 0;
        M3C.S.ixb = 0;
        M3C.S.ixc = 0;
        M3C.S.iyr = 0;
        M3C.S.iys = 0;
        M3C.S.iyt = 0;
        M3C.S.ixy = zeros(6, 1);
        %%% Basic variables
        M3C.S.vB = zeros(classM3C.m, 1);
        M3C.S.iB = zeros(classM3C.m, 1);
        %%% Circulating currents
        M3C.S.iz = zeros(classM3C.m, 1);
        M3C.S.ie = zeros(4, 1);
        %%% PLL
        M3C.PLL.ex = 0;
        M3C.PLL.ax = 0;
        M3C.PLL.ux = 0;
        M3C.PLL.ey = 0;
        M3C.PLL.ay = 0;
        M3C.PLL.uy = 0;
        M3C.PLL.wx = 0;
        M3C.PLL.wy = 0;
        M3C.PLL.vxd = 0;
        M3C.PLL.vxq = 0;
        M3C.PLL.vyd = 0;
        M3C.PLL.vyq = 0;
        M3C.PLL.gx = 0;
        M3C.PLL.gy = 0;
        %%% TEB
        M3C.TEB.e = 0;
        M3C.TEB.a = 0;
        M3C.TEB.u = 0;
        M3C.TEB.Ixd_ref = 0;
        M3C.TEB.Ixq_ref = 0;
        M3C.TEB.Iyd_ref = 0;
        M3C.TEB.Iyq_ref = 0;
        M3C.TEB.ixa_ref = 0;
        M3C.TEB.ixb_ref = 0;
        M3C.TEB.ixc_ref = 0;
        M3C.TEB.iyr_ref = 0;
        M3C.TEB.iys_ref = 0;
        M3C.TEB.iyt_ref = 0;
        M3C.TEB.ixy_ref = zeros(6, 1);
        M3C.TEB.iB_ref = zeros(classM3C.m, 1);
        %%% ICB + LFOM
        M3C.ICB.is_ref = zeros(classM3C.m, 1);
        M3C.ICB.ie_ref = zeros(4, 1);
        M3C.ICB.iz_ref = zeros(classM3C.m, 1);
        M3C.ICB.von = 0;
        %%% Cluster current control
        M3C.CC.vs = zeros(classM3C.m, 1);
        
        %%% Initial observation
        InitialObservation = [M3C.S.Ec; M3C.S.vB; M3C.S.iB];
        M3C.Observation = InitialObservation;

        %%% Initial action
        M3C.Action = zeros(5, 1);
        
        %%% Reward
        M3C.Reward = 0;

        %%%
        notifyEnvUpdated(M3C);
    end
end

%% Method: Reward calculation
methods
    function Reward = getReward(M3C)
        JE = norm(1 - M3C.S.Ec / classM3C.Ec_ref)^2;
        Jz = classM3C.lambda_z * norm(M3C.ICB.iz_ref / M3C.Is_max)^2 * (classM3C.Is_max/classM3C.Ec_ref)^2;
        Jo = classM3C.lambda_o * norm(M3C.ICB.von / M3C.Von_max)^2 * (classM3C.Von_max/classM3C.Ec_ref)^2;
        J = JE + Jz + Jo;
        Reward = -J;
    end
end

%% Method: ?
methods             
    % % Helper methods to create the environment
    % update the action info based on max force
    % function updateActionInfo(M3C)
    %     M3C.ActionInfo.Elements = M3C.MaxForce*[-1 1];
    % end
end

%% Method: Initialize plots
methods
    function plot(M3C)
        % Initialized plots flag variable
        M3C.UpdatePlot = true;

        % Observations plot
        figure;
        M3C.ObservationPlot = gobjects(1, M3C.getObservationInfo.Dimension(1));
        % Ec
        subplot(3, 1, 1);
        for idx = 1:9
            M3C.ObservationPlot(idx) = stairs(nan, nan);
            hold on
        end
        hold off
        ylabel('Ec (J)')
        % vB
        subplot(3, 1, 2);
        for idx = 10:18
            M3C.ObservationPlot(idx) = stairs(nan, nan);
            hold on
        end
        hold off
        ylabel('vB (v)')
        % iB
        subplot(3, 1, 3);
        for idx = 19:27
            M3C.ObservationPlot(idx) = stairs(nan, nan);
            hold on
        end
        hold off
        ylabel('iB (A)')
        sgtitle('Observations');
        xlabel('Timestep');
        
        % Actions plot
        figure
        M3C.ActionPlot = gobjects(1, M3C.ActionInfo.Dimension(1));
        % ie
        subplot(2, 1, 1);
        for i = 1:4
            M3C.ActionPlot(i) = stairs(nan, nan);
            hold on
        end
        hold off
        ylabel('ie (A)');
        % von
        subplot(2, 1, 2)
        M3C.ActionPlot(5) = stairs(nan, nan);
        ylabel('von (V)');
        sgtitle('Actions');
        xlabel('Timestep');

        % Reward plot
        figure
        M3C.RewardPlot = gobjects(1, 1);
        M3C.RewardPlot(1) = stairs(nan, nan);
        ylabel('Reward');
        title('Reward');
        xlabel('Timestep');

        %%%
        notifyEnvUpdated(M3C)
    end
end

%% Method: Properties validation through set methods (?)
% methods
%     function set.S(M3C,state)
%         validateattributes(state,{'numeric'},{'finite','real','vector','numel',4},'','State');
%         M3C.S = double(state(:));
%         notifyEnvUpdated(M3C);
%     end
% end

%% Method: Update callbacks
methods (Access = protected)
    function envUpdatedCallback(M3C)
        % Save current observation and action
        M3C.ObservationHistory = [M3C.ObservationHistory, M3C.Observation];
        M3C.ActionHistory = [M3C.ActionHistory, M3C.Action];
        M3C.RewardHistory = [M3C.RewardHistory, M3C.Reward];

        ObservationHistory = M3C.ObservationHistory;
        ActionHistory = M3C.ActionHistory;
        RewardHistory = M3C.RewardHistory;

        if size(ObservationHistory, 2) > M3C.PlotLastN
            ObservationHistory = ObservationHistory(:, end-M3C.PlotLastN:end);
            ActionHistory = ActionHistory(:, end-M3C.PlotLastN:end);
            RewardHistory = RewardHistory(:, end-M3C.PlotLastN:end);
        end
    
        % Update plots (if initialized)
        if M3C.UpdatePlot
            % Observation
            for i = 1:M3C.getObservationInfo.Dimension(1)
                set(M3C.ObservationPlot(i), 'XData', 0:size(ObservationHistory, 2)-1, 'YData', ObservationHistory(i, :));
            end
            % Action
            for i = 1:M3C.getActionInfo.Dimension(1)
                set(M3C.ActionPlot(i), 'XData', 0:size(ActionHistory, 2)-1, 'YData', ActionHistory(i, :));
            end
            % Reward
            set(M3C.RewardPlot(1), 'XData', 0:size(RewardHistory, 2)-1, 'YData', RewardHistory(1, :));
        end
        drawnow;
    end
end

%% Method: Notify environement update
methods (Access = protected)
    function notifyEnvUpdated(M3C)
        M3C.envUpdatedCallback()
    end
end
end
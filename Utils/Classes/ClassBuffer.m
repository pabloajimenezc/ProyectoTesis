classdef ClassBuffer
    % ClassBuffer: Save simulation variables
    
    properties % Constants
        Ts   % Control sample time
        Ns   % Number of simulation steps
        m    % Number of clusters
        n    % Number of linear independet circulating currents
        A    % Incidence matrix
        p    % Number of input ports
        q    % Number of output ports
        Tsim % Vector of simulated timesteps
        Topology
        Np   % Inter cluster energy balance prediction horizon
    end

    properties % Variables
        is              % Cluster current
        ixy             % External current
        iB              % Basic current
        iz              % Circulating current
        ie              % L.I. circulating current
        vs              % Cluster voltage
        vxy             % External voltage
        vB              % Basic voltage
        vo              % Common mode voltage
        Ec              % Cluster capacitor energy (one-step lookahead)
        vc              % Cluster capacitor voltage
        Ec_mean         % Predicted mean cluster capacitor energy
        Ec_mean_filt    % Predicted filtered mean cluster capacitor energy
        vc_mean         % Predicted mean cluster capacitor energy
        vc_mean_filt    % Predicted filtered mean cluster capacitor voltage
        
        u_TEB           % TEB PI control action
        
        gx              % Input voltage angle
        wx              % Input voltage frequency
        gy              % Output voltage angle
        wy              % Output voltage frequency
        
        gx_pll          % PLL estimation of input voltage angle
        wx_pll          % PLL estimation of input voltage frequency
        gy_pll          % PLL estimation of output voltage angle
        wy_pll          % PLL estimation of output voltage frequency
        
        ex_pll          % Input PLL error
        ux_pll          % Input PLL control action
        ey_pll          % Output PLL error
        uy_pll          % Output PLL control action
        
        is_ref          % Cluster current reference
        ixy_ref         % External current reference
        iB_ref          % Basic current reference
        iz_ref          % Circulating current reference
        ie_ref          % Linearly independent circulating current reference

        exitflag_CEMPCi % Verbose, intercluster energy balance BCD, last iteration of LICCs subproblem
        exitflag_CEMPCv % Verbose, intercluster energy balance BCD, last iteration of CMV subproblem
        exitflag_CCMPC  % Verbose, current control

        iA_CEMPCi       % Active constraints, intercluster energy balance BCD, last iteration of LICCs subproblem
        iA_CEMPCv       % Active constraints, intercluster energy balance BCD, last iteration of CMV subproblem
        iA_CCMPC        % Active constraints, current control

        ixdq            % dq input current
        iydq            % dq output current
        ixdq_ref        % dq input current reference
        iydq_ref        % dq output current reference

        vxdq            % dq input voltage
        vydq            % dq output voltage

        Tex_CEMPC       % Controller execution time, ICB+LFOM
        Tex_CCMPC       % Controller execution time, CC

        vs_ref          % Steady state cluster voltage reference

        w               % Machine speed
        Te              % Machine electrical torque
        ir              % Machine rotor currents
        Fr_dq           % Machine rotor flux

        J_CEMPC         % First step cost function, ICB+LFOM
        J_CCMPC         % First step cost function, CC
    end
    
    methods
        function obj = ClassBuffer(specs)
            % ClassBuffer: Construct an instance of this class

            % Constants
            obj.Ts = specs.Ts;
            obj.Ns = specs.Ns;
            obj.Tsim = specs.Tsim;
            obj.m = specs.MMCC.m;
            obj.n = specs.MMCC.n;
            obj.A = specs.MMCC.A;
            obj.p = specs.MMCC.p;
            obj.q = specs.MMCC.q;
            obj.Topology = specs.MMCC.Topology;
            obj.Np = specs.Np;

            % Variables
            obj = obj.reset();
        end
        
        function obj = reset(obj)
            % reset: Reset buffer variables history

            obj.is              = zeros(obj.m, obj.Ns);
            obj.ixy             = zeros(size(obj.A, 1), obj.Ns);
            obj.iB              = zeros(obj.m, obj.Ns);
            obj.iz              = zeros(obj.m, obj.Ns);
            obj.ie              = zeros(obj.n, obj.Ns);
            obj.vs              = zeros(obj.m, obj.Ns);
            obj.vxy             = zeros(size(obj.A, 1), obj.Ns);
            obj.vB              = zeros(obj.m, obj.Ns);
            obj.vo              = zeros(1, obj.Ns);
            obj.Ec              = zeros(obj.m, obj.Ns);
            obj.vc              = zeros(obj.m, obj.Ns);
            obj.Ec_mean         = zeros(1, obj.Ns);
            obj.Ec_mean_filt    = zeros(1, obj.Ns);
            obj.vc_mean         = zeros(1, obj.Ns);
            obj.vc_mean_filt    = zeros(1, obj.Ns);
            
            obj.u_TEB           = zeros(1, obj.Ns);
            
            obj.gx              = zeros(1, obj.Ns);
            obj.wx              = zeros(1, obj.Ns);
            obj.gy              = zeros(1, obj.Ns);
            obj.wy              = zeros(1, obj.Ns);
            
            obj.gx_pll          = zeros(1, obj.Ns);
            obj.wx_pll          = zeros(1, obj.Ns);
            obj.gy_pll          = zeros(1, obj.Ns);
            obj.wy_pll          = zeros(1, obj.Ns);
            
            obj.ex_pll          = zeros(1, obj.Ns);
            obj.ux_pll          = zeros(1, obj.Ns);
            obj.ey_pll          = zeros(1, obj.Ns);
            obj.uy_pll          = zeros(1, obj.Ns);
            
            obj.is_ref          = zeros(obj.m, obj.Ns);
            obj.ixy_ref         = zeros(size(obj.A, 1), obj.Ns);
            obj.iB_ref          = zeros(obj.m, obj.Ns);
            obj.iz_ref          = zeros(obj.m, obj.Ns);
            obj.ie_ref          = zeros(obj.n, obj.Ns);

            obj.exitflag_CEMPCi = zeros(1, obj.Ns);
            obj.exitflag_CEMPCv = zeros(1, obj.Ns);
            obj.exitflag_CCMPC  = zeros(1, obj.Ns);

            obj.iA_CEMPCi       = zeros(1, obj.Ns);
            obj.iA_CEMPCv       = zeros(1, obj.Ns);
            obj.iA_CCMPC        = zeros(1, obj.Ns);

            obj.ixdq            = zeros(2, obj.Ns);
            obj.iydq            = zeros(2, obj.Ns);
            obj.ixdq_ref        = zeros(2, obj.Ns);
            obj.iydq_ref        = zeros(2, obj.Ns);

            obj.vxdq            = zeros(2, obj.Ns);
            obj.vydq            = zeros(2, obj.Ns);

            obj.Tex_CEMPC       = zeros(1, obj.Ns);
            obj.Tex_CCMPC       = zeros(1, obj.Ns);

            obj.vs_ref          = zeros(obj.m, obj.Ns);

            obj.w               = zeros(1, obj.Ns);
            obj.Te              = zeros(1, obj.Ns);
            obj.ir              = zeros(3, obj.Ns);
            obj.Fr_dq           = zeros(2, obj.Ns);

            obj.J_CEMPC         = zeros(1, obj.Ns);
            obj.J_CCMPC         = zeros(1, obj.Ns);
        end
    end
end
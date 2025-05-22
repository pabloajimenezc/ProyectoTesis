classdef ClassBuffer
    % ClassBuffer: Save simulation variables
    
    properties % Constants
        Ts  % Control sample time
        Ns  % Number of steps
        m   % Number of clusters
        n   % Number of linear independet circulating currents
        A   % Incidence matrix
        Tsim % Vector of simulated timesteps
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
        
        is_ref
        ixy_ref
        iB_ref
        iz_ref
        ie_ref

        exitflag_CEMPCi
        exitflag_CEMPCv
        exitflag_CCMPC

        iA_CEMPCi
        iA_CEMPCv
        iA_CCMPC

        ixdq            % dq input current
        iydq            % dq output current
        ixdq_ref        % dq input current reference
        iydq_ref        % dq output current reference

        vxdq            % dq input voltage
        vydq            % dq output voltage

        Tex_CEMPC       % ICB+LFOM controller execution time
        Tex_CCMPC       % CC controller execution time

        vs_ref          % Steady state cluster voltage reference
    end
    
    methods
        function obj = ClassBuffer(specs)
            % ClassBuffer: Construct an instance of this class

            % Constants
            obj.Ts = specs.Ts;
            obj.Ns = specs.Ns;
            obj.m = specs.m;
            obj.n = specs.n;
            obj.A = specs.A;
            obj.Tsim = specs.Tsim;

            % Variables
            obj = obj.reset();
        end
        
        function obj = reset(obj)
            % reset: Reset buffer variables history

            obj.is           = zeros(obj.m, obj.Ns);            % Cluster current
            obj.ixy          = zeros(size(obj.A, 1), obj.Ns);   % External current
            obj.iB           = zeros(obj.m, obj.Ns);            % Basic current
            obj.iz           = zeros(obj.m, obj.Ns);            % Circulating current
            obj.ie           = zeros(obj.n, obj.Ns);            % L.I. circulating current
            obj.vs           = zeros(obj.m, obj.Ns);            % Cluster voltage
            obj.vxy          = zeros(size(obj.A, 1), obj.Ns);   % External voltage
            obj.vB           = zeros(obj.m, obj.Ns);            % Basic voltage
            obj.vo           = zeros(1, obj.Ns);                % Common mode voltage
            obj.Ec           = zeros(obj.m, obj.Ns);            % Cluster capacitor energy (one-step lookahead)
            obj.vc           = zeros(obj.m, obj.Ns);            % Cluster capacitor voltage
            obj.Ec_mean      = zeros(1, obj.Ns);                % Predicted mean cluster capacitor energy
            obj.Ec_mean_filt = zeros(1, obj.Ns);                % Predicted filtered mean cluster capacitor energy
            obj.vc_mean      = zeros(1, obj.Ns);                % Predicted mean cluster capacitor energy
            obj.vc_mean_filt = zeros(1, obj.Ns);                % Predicted filtered mean cluster capacitor voltage
            
            obj.u_TEB        = zeros(1, obj.Ns);                % TEB PI control action
            
            obj.gx           = zeros(1, obj.Ns);                % Input voltage angle
            obj.wx           = zeros(1, obj.Ns);                % Input voltage frequency
            obj.gy           = zeros(1, obj.Ns);                % Output voltage angle
            obj.wy           = zeros(1, obj.Ns);                % Output voltage frequency
            
            obj.gx_pll       = zeros(1, obj.Ns);                % PLL estimation of input voltage angle
            obj.wx_pll       = zeros(1, obj.Ns);                % PLL estimation of input voltage frequency
            obj.gy_pll       = zeros(1, obj.Ns);                % PLL estimation of output voltage angle
            obj.wy_pll       = zeros(1, obj.Ns);                % PLL estimation of output voltage frequency
            
            obj.ex_pll       = zeros(1, obj.Ns);                % Input PLL error
            obj.ux_pll       = zeros(1, obj.Ns);                % Input PLL control action
            obj.ey_pll       = zeros(1, obj.Ns);                % Output PLL error
            obj.uy_pll       = zeros(1, obj.Ns);                % Output PLL control action
            
            obj.is_ref       = zeros(obj.m, obj.Ns);
            obj.ixy_ref      = zeros(size(obj.A, 1), obj.Ns);
            obj.iB_ref       = zeros(obj.m, obj.Ns);
            obj.iz_ref       = zeros(obj.m, obj.Ns);
            obj.ie_ref       = zeros(obj.n, obj.Ns);

            obj.exitflag_CEMPCi = zeros(1, obj.Ns);
            obj.exitflag_CEMPCv = zeros(1, obj.Ns);
            obj.exitflag_CCMPC  = zeros(1, obj.Ns);

            obj.iA_CEMPCi = zeros(1, obj.Ns);
            obj.iA_CEMPCv = zeros(1, obj.Ns);
            obj.iA_CCMPC  = zeros(1, obj.Ns);

            obj.ixdq     = zeros(2, obj.Ns);
            obj.iydq     = zeros(2, obj.Ns);
            obj.ixdq_ref = zeros(2, obj.Ns);
            obj.iydq_ref = zeros(2, obj.Ns);

            obj.vxdq = zeros(2, obj.Ns);
            obj.vydq = zeros(2, obj.Ns);

            obj.Tex_CEMPC = zeros(1, obj.Ns);
            obj.Tex_CCMPC = zeros(1, obj.Ns);

            obj.vs_ref = zeros(obj.m, obj.Ns);
        end
    end
end
classdef ClassCCMPC
% ClassCCMPC: Cluster current model predictive controller

properties % Constants
    Ts      % Sampling period
    m       % Number of clusters
    p       % Number o input ports of the MMCC
    q       % Number o output ports of the MMCC
    A       % Incidence matrix of MMCC
    Ad      % Discrete time transition matrix
    Bd      % Discrete time control matrix
    As      % Continous time transition matrix
    Bs      % Continous time control matrix
    is_max  % Maximum cluster current
    ix_max  % Maximum input current
    iy_max  % Maximum output current
    ixy_max
    zB_ratio % Importance between external control and energy balancing
    lambda   % Control action weighting factor
    options  % Solver options
end

properties % Variables
    vs          % Action
    iA          % Active constraints
    exitflag    % Solver verbose
    Tex         % Controller execution time
    J           % Optimal cost function value
end

methods
    function obj = ClassCCMPC(specs)
        % ClassCCMPC: Construct an instance of this class.

        % Constants
        obj.m  = specs.MMCC.m;
        obj.p  = specs.MMCC.p;
        obj.q  = specs.MMCC.q;
        obj.A  = specs.MMCC.A;
        obj.Ad = specs.MMCC.Ad;
        obj.Bd = specs.MMCC.Bd;
        obj.As = specs.MMCC.As;
        obj.Bs = specs.MMCC.Bs;
        obj.is_max   = specs.is_max;
        obj.ix_max   = specs.ix_max;
        obj.iy_max   = specs.iy_max;
        obj.ixy_max  = [obj.ix_max * ones(obj.p, 1); obj.iy_max * ones(obj.q, 1)];
        obj.zB_ratio = specs.zB_ratio;
        obj.lambda   = specs.lambda;
        obj.options  = mpcActiveSetOptions;
        obj.options.MaxIterations       = 100;
        obj.options.ConstraintTolerance = 1.0e-5;

        % Variables
        obj = obj.reset();
    end

    function obj = control(obj, is_ref, vc, is, vB, vo, vs_ref)
        % control: Calculate optimal cluster voltages.
        tic

        % Current error tracking
        Hi = 2 * (obj.Bd') * obj.Bd;
        fi = 2 * (obj.Bd') * (-is_ref + obj.Ad * is - obj.Bd * vB);

        % % Basic current error tracking
        % Maux = pinv(obj.A)*obj.A;
        % Hi_B = 2 * (obj.Bd') * (Maux') * Maux * obj.Bd;
        % fi_B = 2 * (obj.Bd') * Maux * (obj.Ad * is - obj.Bd * vB - is_ref);
        % 
        % % Circulating current error tracking
        % Maux = eye(obj.m) - Maux;
        % Hi_z = 2 * (obj.Bd') * (Maux') * Maux * obj.Bd;
        % fi_z = 2 * (obj.Bd') * Maux * (obj.Ad * is - obj.Bd * vB - is_ref);
        % 
        % % Cluster current error tracking
        % Hi = (1 - obj.zB_ratio) * Hi_B + obj.zB_ratio * Hi_z;
        % fi = (1 - obj.zB_ratio) * fi_B + obj.zB_ratio * fi_z;

        % Control action penalization
        Hv = 2 * eye(obj.m);
        fv = -2 * vs_ref;

        % Complete weighted objective function
        H = Hi + obj.lambda * Hv;
        f = fi + obj.lambda * fv;
        H = (H + H') / 2;
        
        % State constraints
        aux = - obj.Ad * is + obj.Bd * vB;
        ABd = obj.A * obj.Bd;
        Aaux = obj.A * aux;
            % Cluster current
        Aineq_is = [obj.Bd; -obj.Bd];
        ub_is    =  obj.is_max + aux;
        lb_is    = -obj.is_max + aux;
        bineq_is = [ub_is; -lb_is];
            % External currents
        Aineq_ixy = [ABd; -ABd];
        ub_ixy    =  obj.ixy_max + Aaux;
        lb_ixy    = -obj.ixy_max + obj.A * aux;
        bineq_ixy = [ub_ixy; -lb_ixy];

        Aineq_i = [Aineq_is; Aineq_ixy];
        bineq_i = [bineq_is; bineq_ixy];

        % Control action constraints
        % The modulation must synthetize vs and vo from vc
        % Thus, -vc <= vs - vo <= vc
        %  -vc + vo <= vs      <= vc + vo
        Aineq_v = [eye(obj.m); -eye(obj.m)];
        ub_v    =  vc + vo;
        lb_v    = -vc + vo;
        bineq_v = [ub_v; -lb_v];

        % Complete constraints
        Aineq = [Aineq_v; Aineq_i];
        bineq = [bineq_v; bineq_i];

        % Solve
        [vsp, obj.exitflag, obj.iA, ~] = mpcActiveSetSolver(H, f, Aineq, bineq, zeros(0, obj.m), zeros(0, 1), obj.iA, obj.options);
        obj.vs = vsp + vo;

        obj.Tex = toc;

        is_pred = is + obj.Ad * is + obj.Bd * (obj.vs - vB - vo);
        obj.J   = norm(is_pred - is_ref)^2 + obj.lambda * norm(obj.vs - vs_ref)^2;
    end

    function obj = reset(obj)
        % reset: Reset controller's variables to 0.

        obj.vs       = zeros(obj.m, 1);
        obj.iA       = false(size(zeros(4 * obj.m + 2 * (obj.p + obj.q), 1)));
        obj.exitflag = -3;
        obj.Tex      = 0;
        obj.J        = 0;
    end
end

end
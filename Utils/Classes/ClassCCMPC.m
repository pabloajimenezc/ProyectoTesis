classdef ClassCCMPC
% ClassCCMPC: Cluster current model predictive controller

properties % Constants
    Ts      % Sampling period
    m       % Number of clusters
    A       % Incidence matrix of M3C
    pinvA
    Ad      % Discrete time transition matrix
    Bd      % Discrete time control matrix
    As      % Continous time transition matrix
    Bs      % Continous time control matrix
    invBs
    is_max  % Maximum cluster current
    RFT     % Reference frame transformations
    lambda  % Control action weighting factor
    options % Solver options
    rot     % pi/2 counter clockwise rotation matrix
end

properties % Variables
    iA          % Active restrictions
    vs          % Action
    exitflag    % Solver verbose
    Tex         % Controller execution time
end

methods
    function obj = ClassCCMPC(specs)
        % ClassCCMPC: Construct an instance of this class.

        % Constants
        obj.m = specs.m;
        obj.A = [1  1  1  0  0  0  0  0  0;
                 0  0  0  1  1  1  0  0  0;
                 0  0  0  0  0  0  1  1  1;
                -1  0  0 -1  0  0 -1  0  0;
                 0 -1  0  0 -1  0  0 -1  0;
                 0  0 -1  0  0 -1  0  0 -1];
        obj.pinvA = pinv(obj.A);
        obj.Ad = specs.Ad;
        obj.Bd = specs.Bd;
        obj.As = specs.As;
        obj.Bs = specs.Bs;
        obj.invBs = inv(obj.Bs);
        obj.is_max = specs.is_max;
        obj.RFT = specs.RFT;
        obj.lambda = specs.lambda;
        obj.options = mpcActiveSetOptions;
        obj.options.MaxIterations = 100;
        obj.options.ConstraintTolerance = 1.0e-4;
        obj.rot = [0, -1;
                   1, 0];

        % Variables
        obj = obj.reset();
    end

    function obj = control(obj, is_ref, vc, is, vB, vo, wx, wy)
        % control: Calculate optimal cluster voltages.
        tic

        % Current error tracking
        Hi = 2 * (obj.Bd') * obj.Bd;
        fi = 2 * (obj.Bd') * (obj.Ad * is - obj.Bd * (vB + vo) - is_ref);

        % Control action penalization
        ixy_ref = obj.A * is_ref;
        iB_ref = obj.pinvA * ixy_ref;
        ix_ref = ixy_ref(1:3);
        iy_ref = ixy_ref(4:6);
        ixab_ref = obj.RFT.abc2ab * ix_ref;
        iyab_ref = obj.RFT.abc2ab * iy_ref;
        dixab_ref = wx * obj.rot * ixab_ref;
        diyab_ref = wy * obj.rot * iyab_ref;
        dix_ref = obj.RFT.ab2abc * dixab_ref;
        diy_ref = obj.RFT.ab2abc * diyab_ref;
        dixy_ref = [dix_ref; diy_ref];
        diB_ref = obj.pinvA * dixy_ref;

        vs_ref = vB + obj.invBs * (diB_ref - obj.As * iB_ref);
        % vs_ref = vB + vo + obj.invBs * (diB_ref - obj.As * iB_ref);
        % vs_ref = vB + obj.invBs * (diB_ref - obj.As * is_ref);
        % vs_ref = vB + vo + obj.invBs * (diB_ref - obj.As * is_ref);

        Hv = 2 * eye(obj.m);
        fv = -2 * vs_ref;

        % Complete weighted objective function
        H = Hi + obj.lambda * Hv;
        f = fi + obj.lambda * fv;
        H = (H + H') / 2;
        
        % Current inequalities
        Aineq_i = [obj.Bd; -obj.Bd];
        ub_i =  obj.is_max - obj.Ad * is + obj.Bd * vB;
        lb_i = -obj.is_max - obj.Ad * is + obj.Bd * vB;
        bineq_i = [ub_i; -lb_i];

        % Control action inequalities
        Aineq_v = [eye(obj.m); -eye(obj.m)];
        ub_v =  (vc - vo);
        lb_v = (-vc - vo);
        bineq_v = [ub_v; -lb_v];

        % Complete inequalities
        Aineq = [Aineq_v; Aineq_i];
        bineq = [bineq_v; bineq_i];

        % Solve
        [vsp, obj.exitflag, obj.iA, ~] = mpcActiveSetSolver(H, f, Aineq, bineq, zeros(0, obj.m), zeros(0, 1), obj.iA, obj.options);
        obj.vs = vsp + vo;

        obj.Tex = toc;
    end

    function obj = reset(obj)
        % reset: Reset controller's variables to 0.

        obj.vs = zeros(obj.m, 1);
        obj.iA = false(size(zeros(4 * obj.m, 1)));
        obj.exitflag = -3;
        obj.Tex = 0;
    end
end

end
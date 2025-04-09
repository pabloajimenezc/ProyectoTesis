classdef ClassCCMPC
% ClassCCMPC: Cluster current model predictive controller

properties % Constants
    Ts      % Sampling period
    m       % Number of clusters
    Ad      % Discrete time transition matrix
    Bd      % Discrete time control matrix
    lambda  % Control action weighting factor
    options % Solver options
end

properties % Variables
    iA          % Active restrictions
    vs          % Action
    exitflag    % Solver verbose
end

methods
    function obj = ClassCCMPC(specs)
        % ClassCCMPC: Construct an instance of this class.

        % Constants
        obj.m = specs.m;
        obj.Ad = specs.Ad;
        obj.Bd = specs.Bd;
        obj.lambda = specs.lambda;
        obj.options = mpcActiveSetOptions;
        obj.options.MaxIterations = 100;
        obj.options.ConstraintTolerance = 1.0e-4;

        % Variables
        obj = obj.reset();
    end

    function obj = control(obj, is_ref, vc_mean_ref, is, vB, vo)
        % control: Calculate optimal cluster voltages.

        % Current error tracking
        Hi =  2 * (obj.Bd') * obj.Bd;
        fi = 2 * (obj.Bd') * (obj.Ad * is - is_ref);

        % Control action penalization
        Hv = eye(obj.m);
        fv = zeros(obj.m, 1);

        % Complete weighted objective function
        H = Hi + obj.lambda * Hv;
        f = fi + obj.lambda * fv;
        H = (H + H') / 2;
        
        p = -(vB + vo);
        ub = vc_mean_ref * ones(obj.m, 1) + p;
        lb = -vc_mean_ref * ones(obj.m, 1) + p;
        [Z, obj.exitflag, obj.iA, ~] = mpcActiveSetSolver(H, f, [eye(obj.m); -eye(obj.m)], [ub; -lb], zeros(0, obj.m), zeros(0, 1), obj.iA, obj.options);
        obj.vs = Z - p;
    end

    function obj = reset(obj)
        % reset: Reset controller's variables to 0.

        obj.vs = zeros(obj.m, 1);
        obj.iA = false(size(zeros(2 * obj.m, 1)));
        obj.exitflag = -9999;
    end
end

end
classdef ClassCCMPC
% ClassCCMPC: Cluster current model predictive controller

properties % Constants
    M3C     % M3C model
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
        obj.M3C = specs.M3C;
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
        Hi =  2 * (obj.M3C.Bd') * obj.M3C.Bd;
        fi = 2 * (obj.M3C.Bd') * (obj.M3C.Ad * is - is_ref);

        % Control action penalization
        Hv = eye(obj.M3C.m);
        fv = zeros(obj.M3C.m, 1);

        % Complete weighted objective function
        H = Hi + obj.lambda * Hv;
        f = fi + obj.lambda * fv;
        H = (H + H') / 2;
        
        p = -(vB + vo);
        ub = vc_mean_ref * ones(obj.M3C.m, 1) + p;
        lb = -vc_mean_ref * ones(obj.M3C.m, 1) + p;
        [Z, obj.exitflag, obj.iA, ~] = mpcActiveSetSolver(H, f, [eye(obj.M3C.m); -eye(obj.M3C.m)], [ub; -lb], zeros(0, obj.M3C.m), zeros(0, 1), obj.iA, obj.options);
        obj.vs = Z - p;
    end

    function obj = reset(obj)
        % reset: Reset controller's variables to 0.

        obj.vs = zeros(obj.M3C.m, 1);
        obj.iA = false(size(zeros(2 * obj.M3C.m, 1)));
        obj.exitflag = -9999;
    end
end

end
classdef ClassCEMPC

properties % Constants
    Ts          % Sampling period
    m           % Number of clusters
    n           % Number of linear independent circulating currents
    NN          % Null matrix for full planning horizon
    one         % Ones vector for full planning horizon
    Np          % Horizon length, # of predicted steps for external variables
    is_max      % Absolute maximum cluster current
    vo_max      % Absolute maximum common mode voltage
    lambda_z    % Circulating current weighting factor
    lambda_o    % Common mode voltage weighting factor
    lmax        % Maximum iterations for Block Coordinate Descent
    options_i   % Configuration for current solver
    options_v   % Configuration for voltage solver
end

properties % Variables
    ie_ref      % Generated L.I. circulating current reference
    iz_ref      % Generated circulating current reference
    vo_ref      % Generated common mode voltage reference
    iAi         % Active constraints for current subproblem
    iAv         % Active constraints for voltage subproblem
    exitflag_i  % Verbose for current solver
    exitflag_v  % Verbose for voltage solver
    exitflag    % Verbose for the last iteration of coupled complete problem
    Tex         % Controller execution time
end

methods
    function obj = ClassCEMPC(specs)
        % ClassCMPC: Construct an instance of this class.

        % Constants
        obj.m        = specs.M3C.m;
        obj.n        = specs.M3C.n;
        obj.is_max   = specs.is_max;
        obj.vo_max   = specs.vo_max;
        obj.Ts       = specs.Ts;
        obj.lambda_z = specs.lambda_z;
        obj.lambda_o = specs.lambda_o;
        obj.lmax     = specs.lmax;
        obj.Np       = specs.Np;
        obj.NN       = repmat({specs.M3C.N}, obj.Np, 1);
        obj.NN       = blkdiag(obj.NN{:});
        obj.one      = repmat({ones(obj.m, 1)}, obj.Np, 1);
        obj.one      = blkdiag(obj.one{:});

        obj.options_i                     = mpcActiveSetOptions;
        obj.options_i.MaxIterations       = 20;
        obj.options_i.ConstraintTolerance = 1e-3;

        obj.options_v                     = mpcActiveSetOptions;
        obj.options_v.MaxIterations       = 10;
        obj.options_v.ConstraintTolerance = 1e-3;

        % Variables
        obj = obj.reset();
    end

    function obj = control(obj, Ec, vB_pred, iB_pred, vc)
        % control: Calculate optimal circulating currents and common mode voltage references.
        tic

        iB_pred = reshape(iB_pred, obj.m * obj.Np, 1);
        vB_pred = reshape(vB_pred, obj.m * obj.Np, 1);

        e_Ec_pred = repmat(Ec - mean(Ec), obj.Np, 1);

        % Initialize common mode voltage vector of horizon Np
        von_temp = zeros(obj.Np, 1);

        for l = 1:obj.lmax
            %%% Circulating currents subproblem Jz = Jz_E + Jz_z

            % Initialization
            vs_temp = vB_pred + obj.one * von_temp;

            % Formulation

            % Energy tracking error Jz_E
            Hz_E = 2 * obj.Ts^2 * obj.NN' * diag(vs_temp.^2) * obj.NN;
            fz_E = 2 * obj.Ts * obj.NN' * diag(vs_temp) * (e_Ec_pred + obj.Ts * diag(vs_temp) * iB_pred);

            % LICCs penalization Jz_z
            Hz_z = 2 * obj.NN' * obj.NN;
            fz_z = 2 * obj.NN' * iB_pred;

            % Complete weighted objective function Jz
            Hz = Hz_E + obj.lambda_z * Hz_z;
            fz = fz_E + obj.lambda_z * fz_z;
            Hz = (Hz + Hz')/2;

            % Constraints
            Aineq_z = [obj.NN; -obj.NN];
            ub =  obj.is_max * ones(obj.m * obj.Np, 1) - iB_pred;
            lb = -obj.is_max * ones(obj.m * obj.Np, 1) - iB_pred;
            bineq_z = [ub; -lb];

            % Solve
            [ie_ref_temp, obj.exitflag_i, obj.iAi, ~] = mpcActiveSetSolver(Hz, fz, Aineq_z, bineq_z, zeros(0, obj.n * obj.Np), zeros(0, 1), obj.iAi, obj.options_i);
            iz_ref_temp = obj.NN * ie_ref_temp;

            % If unfeasible
            if obj.exitflag_i < 0
                ie_ref_temp = zeros(size(ie_ref_temp));
                iz_ref_temp = zeros(size(iz_ref_temp));
            end
            
            %%% Common mode voltage subproblem Jo = Jo_E + Jo_z

            % Initialization
            is_temp = iB_pred + iz_ref_temp;

            % Formulation

            % Energy tracking error Jo_E
            Ho_E = 2 * obj.Ts^2 * obj.one' * diag(is_temp.^2) * obj.one;
            fo_E = 2 * obj.Ts * obj.one' * diag(is_temp) * (e_Ec_pred + obj.Ts * diag(is_temp) * vB_pred);            

            % CMV penalization Jo_z
            Ho_o = 2 * eye(obj.Np);
            fo_o = zeros(obj.Np, 1);

            % Complete weighted objective function Jo
            Ho = Ho_E + obj.lambda_o * Ho_o;
            fo = fo_E + obj.lambda_o * fo_o;
            Ho = (Ho + Ho')/2;

            % Inequalities matrix and vector
            Aineq_o = [eye(obj.Np); -eye(obj.Np)];
            ub = min( vc - reshape(vB_pred, obj.m, obj.Np), [], 1)';
            lb = max(-vc - reshape(vB_pred, obj.m, obj.Np), [], 1)';
            bineq_o = [ub; -lb];

            % Solve
            [von_temp, obj.exitflag_v, obj.iAv, ~] = mpcActiveSetSolver(Ho, fo, Aineq_o, bineq_o, zeros(0, obj.Np), zeros(0, 1), obj.iAv, obj.options_v);

            % If unfeasible
            if obj.exitflag_v < 0
                von_temp = zeros(size(von_temp));
            end
        end

        obj.ie_ref = ie_ref_temp(1:obj.n);
        obj.iz_ref = iz_ref_temp(1:obj.m);
        obj.vo_ref = von_temp(1);
        
        if and(0 < obj.exitflag_i, 0 < obj.exitflag_v)
            obj.exitflag = -3;
        else
            obj.exitflag = 1;
        end

        obj.Tex = toc;
    end

    function obj = reset(obj)
        % reset: Reset controller's variables to 0.

        obj.ie_ref = zeros(obj.n, 1);
        obj.iz_ref = zeros(obj.m, 1);
        obj.vo_ref = 0;
        obj.iAi = false(size(zeros(2 * obj.m * obj.Np, 1)));
        obj.iAv = false(size(zeros(2 * obj.Np, 1)));
        obj.exitflag_i = -3;
        obj.exitflag_v = -3;
        obj.exitflag = -3;
        obj.Tex = 0;
    end
end

end
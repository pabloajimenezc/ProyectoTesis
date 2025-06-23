classdef ClassCEMPC

properties % Constants
    Ts          % Sampling period
    m           % Number of clusters
    n           % Number of linear independent circulating currents
    N           % Null matrix
    NN          % Null matrix for full planning horizon
    one         % Ones vector for full planning horizon
    IM          % identity - mean matrix for full planning horizon
    IM2         % IM squared
    K           % Auxiliar matrix for long horizon model B matrix
    Np          % Horizon length, # of predicted steps for external variables
    is_max      % Absolute maximum cluster current
    vo_max      % Absolute maximum common mode voltage
    lambda_z    % Circulating current weighting factor
    lambda_o    % Common mode voltage weighting factor
    Nl          % Number of iterations for Block Coordinate Descent
    options_i   % Configuration for current solver
    options_v   % Configuration for voltage solver
end

properties % Variables
    ie_ref      % Generated LICCs reference
    iz_ref      % Generated CCs reference
    vo_ref      % Generated CMV reference
    iAi         % Active constraints for current subproblem
    iAv         % Active constraints for voltage subproblem
    exitflag_i  % Verbose for current solver
    exitflag_v  % Verbose for voltage solver
    exitflag    % Verbose for the last iteration of coupled complete problem
    Tex         % Controller execution time
    J           % MPC cost function value
end

methods
    function obj = ClassCEMPC(specs)
        % ClassCMPC: Construct an instance of this class.

        % Constants
        obj.m         = specs.MMCC.m;
        obj.n         = specs.MMCC.n;
        obj.is_max    = specs.is_max;
        obj.vo_max    = specs.vo_max;
        obj.Ts        = specs.Ts;
        obj.lambda_z  = specs.lambda_z;
        obj.lambda_o  = specs.lambda_o;
        obj.Nl        = specs.Nl;
        obj.Np        = specs.Np;
        obj.N         = specs.MMCC.N;
        obj.NN        = repmat({obj.N}, obj.Np, 1);
        obj.NN        = blkdiag(obj.NN{:});
        obj.one       = repmat({ones(obj.m, 1)}, obj.Np, 1);
        obj.one       = blkdiag(obj.one{:});
        obj.IM        = eye(obj.m * obj.Np) - obj.one * (obj.one') / obj.m;
        obj.IM2       = (obj.IM') * obj.IM;
        obj.K         = kron(tril(ones(obj.Np)), eye(obj.m));

        obj.options_i                     = mpcActiveSetOptions;
        obj.options_i.MaxIterations       = 20;
        obj.options_i.ConstraintTolerance = 1e-4;

        obj.options_v                     = mpcActiveSetOptions;
        obj.options_v.MaxIterations       = 10;
        obj.options_v.ConstraintTolerance = 1e-4;

        % Variables
        obj = obj.reset();
    end

    function obj = control(obj, Ec, vB_pred, iB_pred, iB_ref_pred, vc)
        % control: Calculate optimal circulating currents and common mode voltage references.
        % tic

        vB_pred_orig = vB_pred;
        vB_pred = reshape(vB_pred, obj.m * obj.Np, 1);
        iB_pred = reshape(iB_pred, obj.m * obj.Np, 1);
        iB_ref_pred = reshape(iB_ref_pred, obj.m * obj.Np, 1);

        % Initialize common mode voltage vector of horizon Np
        vo_ref_temp = zeros(obj.Np, 1);

        for l = 1:obj.Nl
            %%% Circulating currents subproblem Jz = Jz_x + Jz_u

            % Initialization
            vs_temp = vB_pred + obj.one * vo_ref_temp;

            % Formulation

            % Control action penalization Jz_u
            Hu_z = 2 * (obj.NN') * obj.NN;
            fu_z = 2 * (obj.NN') * iB_pred;

            % Constraints
            Aineq_z = [obj.NN; -obj.NN];
            % ub      =  obj.is_max - iB_pred;
            % lb      = -obj.is_max - iB_pred;
            ub      =  obj.is_max - iB_ref_pred;
            lb      = -obj.is_max - iB_ref_pred;
            bineq_z = [ub; -lb];

            % Solve
            [ie_ref_temp, obj.exitflag_i, obj.iAi, ~] = solve_subproblem(obj, Ec, vs_temp, iB_pred, obj.NN, Hu_z, fu_z, Aineq_z, bineq_z, obj.lambda_z, obj.iAi, obj.options_i);
            iz_ref_temp = obj.NN * ie_ref_temp;

            %%% Common mode voltage subproblem Jo = Jo_x + Jo_u

            % Initialization
            is_temp = iB_pred + iz_ref_temp;

            % Formulation

            % Control action penalization Jo_u
            Hu_o = 2 * eye(obj.Np);
            fu_o = zeros(obj.Np, 1);

            % Constraints
            Aineq_o = [eye(obj.Np); -eye(obj.Np)];
            % ub = obj.vo_max * ones(obj.Np, 1);
            % lb = -ub;
            ub = min(vc - vB_pred_orig, [], 1)';
            lb = max(-vc - vB_pred_orig, [], 1)';
            bineq_o = [ub; -lb];
            % Solve

            [vo_ref_temp, obj.exitflag_v, obj.iAv, ~] = solve_subproblem(obj, Ec, is_temp, vB_pred, obj.one, Hu_o, fu_o, Aineq_o, bineq_o, obj.lambda_o, obj.iAv, obj.options_v);
        end

        obj.ie_ref = ie_ref_temp(1:obj.n);
        obj.iz_ref = iz_ref_temp(1:obj.m);
        obj.vo_ref = vo_ref_temp(1);
        
        if and(0 < obj.exitflag_i, 0 < obj.exitflag_v)
            obj.exitflag = 1;
        else
            obj.exitflag = -3;
        end

        Ec_pred = Ec + obj.Ts * (vB_pred(1:obj.m) + vo_ref_temp(1)) .* (iB_pred(1:obj.m) + iz_ref_temp(1:obj.m));
        obj.J = norm(Ec_pred - mean(Ec_pred))^2 + obj.lambda_z * norm(iB_pred(1:obj.m) + iz_ref_temp(1:obj.m))^2 + obj.lambda_o * vo_ref_temp(1)^2;
        % obj.Tex = toc;
    end

    function [Uopt, exitflag, iA, mu] = solve_subproblem(obj, x, var_s, P, Maux, Hu, fu, Aineq, bineq, lambda, iA, options)
        % solve_subproblem: Find Uopt which brings state variables close to its mean
        
        % Suitable for any input affine system. (The model for each block
        % in BCD is input affine).
        % Model: X[t+1:t+Np-1] = A * x[t] + B * U[t:t+Np-1] + E * P[t:t+Np-1]

        % Cost function: J = ||X[t+1:t+Np-1] - mean(X)[t+1:t+Np-1]||^2
        %                J = ||(I-1*1'/m)*X[t+1:t+Np-1]||^2 = ||IM*X[t+1:t+Np-1]||^2
        %                J = X' * IM' * IM * X = X' * IM2 * X

        E = obj.Ts * obj.K * diag(var_s);
        B = E * Maux;
        Hx = 2 * (B') * obj.IM2 * B;
        fx = 2 * (B') * obj.IM2 * (repmat(x, obj.Np, 1) + E * P);
        H = Hx + lambda * Hu;
        f = fx + lambda * fu;
        H = (H + H') / 2;
        [Uopt, exitflag, iA, mu] = mpcActiveSetSolver(H, f, Aineq, bineq, zeros(0, size(Maux, 2)), zeros(0, 1), iA, options);
    end

    function obj = reset(obj)
        % reset: Reset controller's variables to 0.

        obj.ie_ref      = zeros(obj.n, 1);
        obj.iz_ref      = zeros(obj.m, 1);
        obj.vo_ref      = 0;
        obj.iAi         = false(size(zeros(2 * obj.m * obj.Np, 1)));
        obj.iAv         = false(size(zeros(2 * obj.Np, 1)));
        obj.exitflag_i  = -3;
        obj.exitflag_v  = -3;
        obj.exitflag    = -3;
        obj.Tex         = 0;
        obj.J           = 0;
    end
end

end
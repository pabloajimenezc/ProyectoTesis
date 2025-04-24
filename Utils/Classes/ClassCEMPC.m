classdef ClassCEMPC

properties % Constants
    Ts          % Sampling period
    m           % Number of clusters
    n           % Number of linear independent circulating currents
    N           % Null matrix
    NN          % Null matrix for full planning horizon
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
    exitflag
end

methods
    function obj = ClassCEMPC(specs)
        % ClassCMPC: Construct an instance of this class.

        % Constants
        obj.m = specs.m;
        obj.n = specs.n;
        obj.N = specs.N;
        obj.is_max = specs.is_max;
        obj.vo_max = specs.vo_max;
        obj.Ts = specs.Ts;
        obj.lambda_z = specs.lambda_z;
        obj.lambda_o = specs.lambda_o;
        obj.lmax = specs.lmax;
        obj.Np = specs.Np;
        obj.NN = repmat({obj.N}, obj.Np, 1);
        obj.NN = blkdiag(obj.NN{:});

        obj.options_i = mpcActiveSetOptions;
        obj.options_i.MaxIterations = 20;
        obj.options_i.ConstraintTolerance = 1e-3;

        obj.options_v = mpcActiveSetOptions;
        obj.options_v.MaxIterations = 10;
        obj.options_v.ConstraintTolerance = 1e-3;

        % Variables
        obj = obj.reset();
    end

    function obj = control(obj, Ec, vB_pred, iB_pred)
        % control: Calculate optimal circulating currents and common mode voltage references.
        
        iB_pred = reshape(iB_pred, obj.m * obj.Np, 1);

        e_Ec_pred = repmat(Ec - mean(Ec), obj.Np, 1);

        % Initialize common mode voltage vector of horizon Np
        von_temp = zeros(obj.Np, 1);

        for l = 1:obj.lmax
            %%% Circulating currents subproblem

            % Initialization
            vs_temp = reshape(vB_pred + von_temp', obj.m * obj.Np, 1);

            % Formulation

            % Energy tracking error
            HE_ie = 2 * obj.Ts^2 * diag(vs_temp)^2;
            fE_ie = 2 * obj.Ts * diag(vs_temp)*(e_Ec_pred + obj.Ts * diag(vs_temp) * iB_pred);

            % L.I. Circulating current penalization
            Hi_ie = eye(obj.m * obj.Np);
            fi_ie = zeros(obj.m * obj.Np, 1);

            % Complete weighted objective function
            H_ie = HE_ie + obj.lambda_z * Hi_ie;
            f_ie = fE_ie + obj.lambda_z * fi_ie;
            H_ie = obj.NN' * H_ie * obj.NN ;
            f_ie = obj.NN' * f_ie;
            H_ie = (H_ie + H_ie')/2;

            % Solve
            ub = obj.is_max * ones(obj.m * obj.Np, 1) - iB_pred;
            lb = -obj.is_max * ones(obj.m * obj.Np, 1) - iB_pred;
            [ie_ref_temp, obj.exitflag_i, obj.iAi, ~] = mpcActiveSetSolver(H_ie, f_ie, [obj.NN; -obj.NN], [ub; -lb], zeros(0, obj.n * obj.Np), zeros(0, 1), obj.iAi, obj.options_i);
            iz_ref_temp = obj.NN * ie_ref_temp;

            % If unfeasible
            if obj.exitflag_i < 0
                ie_ref_temp = zeros(size(ie_ref_temp));
                iz_ref_temp = zeros(size(iz_ref_temp));
            end
            
            %%% Common mode voltage subproblem

            % Initialization
            is_temp = iB_pred + iz_ref_temp;

            % Formulation

            % Energy tracking error
            HE_von = 2 * obj.Ts^2 * diag(is_temp)^2;
            fE_von = 2 * obj.Ts * diag(is_temp)*(e_Ec_pred + obj.Ts * diag(is_temp)*reshape(vB_pred, obj.m * obj.Np, 1));            

            % Common mode voltage penalization
            Hv_von = eye(obj.m * obj.Np);
            fv_von = zeros(obj.m * obj.Np, 1);

            % Complete weighted objective function
            H_von = HE_von + obj.lambda_o * Hv_von;
            f_von = fE_von + obj.lambda_o * fv_von;
            %
            H_von_temp = mat2cell(H_von, repmat(obj.m, 1, obj.Np), repmat(obj.m, 1, obj.Np));
            H_von_temp = arrayfun(@(i) H_von_temp{i, i}, 1:obj.Np, 'UniformOutput', false);
            H_von_temp  = cellfun(@(M) ones(1, obj.m) * M * ones(obj.m, 1), H_von_temp, 'UniformOutput', false);
            H_von = blkdiag(H_von_temp{:});
            %
            f_von_temp = mat2cell(f_von, repmat(obj.m, obj.Np, 1), 1);
            f_von_temp = cellfun(@(M) ones(1, obj.m)*M, f_von_temp, 'UniformOutput', false);
            f_von = cell2mat(f_von_temp);
            %
            H_von = (H_von + H_von')/2;

            % Solve
            ub = repmat(obj.vo_max, obj.Np, 1);
            lb = -ub;
            [von_temp, obj.exitflag_v, obj.iAv, ~] = mpcActiveSetSolver(H_von, f_von, [eye(obj.Np); -eye(obj.Np)], [ub; -lb], zeros(0, obj.Np), zeros(0, 1), obj.iAv, obj.options_v);
        end

        obj.ie_ref = ie_ref_temp(1:obj.n);
        obj.iz_ref = iz_ref_temp(1:obj.m);
        obj.vo_ref = von_temp(1);
        
        if and(0 < obj.exitflag_i, 0 < obj.exitflag_v)
            obj.exitflag = 1;
        else
            obj.exitflag = -3;
        end
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
    end
end

end
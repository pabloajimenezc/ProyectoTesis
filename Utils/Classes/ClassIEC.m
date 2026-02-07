classdef ClassIEC
    % ClassIEC: Intercluster Energy Balancing Control
    % Nonlinear Model Predictive Control, Block Coordinate Descent

    properties
        Ts       % Sampling time
        Nl       % # of BCD iterations
        Np       % Rolling horizon length
        ONE      % CMV incidence matrix
        NN       % LICCs incidence matrix
        MI       % Deviation from mean matrix
        K        % Auxiliar matrix
        Hu_z     % LICCs control effort hessian
        Aineq_z  % LICCs control action constraints matrix
        Hu_o     % CMV control effort hessian
        Aineq_o  % CMV control action constraints matrix
        lambda_z % LICCs control effort weighting factor
        lambda_o % CMV control effort weighting factor
    end

    methods
        function IEC = ClassIEC(Ts, M2C)
            % ClassIEC: Construct an instance of this class
            
            IEC.Ts        = Ts;
            IEC.Nl        = 50;
            IEC.Np        = 5;
            ONE           = repmat({ones(M2C.m, 1)}, IEC.Np, 1);
            IEC.ONE       = blkdiag(ONE{:});
            NN            = repmat({M2C.N}, IEC.Np, 1);
            IEC.NN        = blkdiag(NN{:});
            MI            = repmat({eye(M2C.m)-ones(M2C.m)/M2C.m}, IEC.Np, 1);
            IEC.MI        = blkdiag(MI{:});
            IEC.K         = kron(tril(ones(IEC.Np)), eye(M2C.m));
            IEC.Hu_z      = 2 * IEC.NN' * IEC.NN / M2C.is_max^2;
            IEC.Aineq_z   = [IEC.NN; -IEC.NN];
            IEC.Hu_o      = 2 * eye(IEC.Np) / M2C.vo_max^2;
            IEC.Aineq_o   = [eye(IEC.Np); -eye(IEC.Np)];
 
            % Single-step
            IEC.lambda_z  = 0.2;
            IEC.lambda_o  = 0.8;

            % Long-horizon
            if IEC.Np > 1
                IEC.lambda_z  = 0.2 * IEC.Np;
                IEC.lambda_o  = 0.4 * IEC.Np;
            end
        end

        function s = toStruct(obj)
            % s: Convert to struct for code generation
            props = properties(obj);
            for i = 1:length(props)
                s.(props{i}) = obj.(props{i});
            end
        end
    end
end
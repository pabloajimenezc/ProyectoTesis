classdef BasicVariablesPredictor
    % BasicVariablesPredictor: Predict external variables
    
    % Predict the basic current or voltage assuming
    % steady state and symmetrical three-phase systems.
    % THIS COULD BE REPLACED BY THE KALMAN FILTER


    properties
        Np   % Number of steps to predict
        Ts   % Sampling period
        RFT  % Struct with reference frame transformations
        A    % Converter incidence matrix
    end

    methods
        function obj = BasicVariablesPredictor(specs)
            % BasicVariablesPredictor: Construct an instance of this class

            obj.Np  = specs.Np;
            obj.Ts  = specs.Ts;
            obj.RFT = specs.RFT;
            obj.A   = specs.A;
        end

        function var_B_pred = predict(obj, var_xy, wx, wy)

            if obj.Np > 1

            angles = (1:obj.Np-1) * (wx * obj.Ts);
            cos_vals = cos(angles);
            sin_vals = sin(angles);
            ROTx = reshape([cos_vals; -sin_vals; sin_vals; cos_vals], 2, 2*(obj.Np-1))';
            
            angles = (1:obj.Np-1) * (wy * obj.Ts);
            cos_vals = cos(angles);
            sin_vals = sin(angles);
            ROTy = reshape([cos_vals; -sin_vals; sin_vals; cos_vals], 2, 2*(obj.Np-1))';
            
            % DISCLAIMER: This rotation matrices produce a vector of Np steps starting
            % from now, so it actually only predicts Np-1 steps. This has to be taken in
            % account in case of control delay compensation.
            
            % Transform from abc to alpha-beta and predict (rotate vectors assuming steady state)
            var_x_ab_pred = reshape(ROTx * obj.RFT.abc2ab * var_xy(1:3), 2, obj.Np-1);
            var_y_ab_pred = reshape(ROTy * obj.RFT.abc2ab * var_xy(4:6), 2, obj.Np-1);
            
            % Transform back to abc
            var_x_pred = obj.RFT.ab2abc * var_x_ab_pred;
            var_y_pred = obj.RFT.ab2abc * var_y_ab_pred;
            var_xy_pred = [var_x_pred; var_y_pred];

            % Concatenate first measurement
            var_xy_pred = [var_xy, var_xy_pred];
            
            % Transform to basic component of cluster currents/voltages
            var_B_pred = obj.A' * var_xy_pred;
            % Shape: (m, Np)
            
            else
                var_B_pred = obj.A' * var_xy;
            end
        end
    end
end
classdef BasicVariablesPredictor
    % BasicVariablesPredictor: Predict external variables
    
    % Predict the basic currents or voltages assuming steady state:
    % For M3C: symmetrical three-phase input/output systems
    % For M2C: Constant input and symmetrical three-phase output system

    % THIS COULD BE REPLACED BY THE KALMAN FILTER

    properties
        Np  % Number of steps to predict
        Ts  % Sampling period
        RFT % Struct with reference frame transformations
        A   % Converter incidence matrix
        p   % Number of input ports
        q   % Number of output ports
    end

    methods
        function obj = BasicVariablesPredictor(specs)
            % BasicVariablesPredictor: Construct an instance of this class

            obj.Np  = specs.CEMPC.Np;
            obj.Ts  = specs.CEMPC.Ts;
            obj.RFT = specs.RFT;
            obj.A   = specs.MMCC.A;
            obj.p   = specs.MMCC.p;
            obj.q   = specs.MMCC.q;
        end

        function var_B_pred = predict(obj, var_xy, wx, wy)

            if obj.Np > 1

                % Input port

                if and(obj.p == 3, obj.q == 3) % M3C

                    % Construct rotation matrix
                    angles = (1:obj.Np-1) * (wx * obj.Ts);
                    cos_vals = cos(angles);
                    sin_vals = sin(angles);
                    ROTx = reshape([cos_vals; -sin_vals; sin_vals; cos_vals], 2, 2*(obj.Np-1))';

                    % Transform from abc to alpha-beta and predict (rotate vectors assuming steady state)
                    var_x_ab_pred = reshape(ROTx * obj.RFT.abc2ab * var_xy(1:3), 2, obj.Np-1);

                    % Transform back to abc
                    var_x_pred = obj.RFT.ab2abc * var_x_ab_pred;
                
                elseif and(obj.p == 2, obj.q == 3) % M2C

                    var_x_pred = repmat(var_xy(1:2), 1, obj.Np-1);

                end
                
                % Output port

                % Construct rotation matrix
                angles = (1:obj.Np-1) * (wy * obj.Ts);
                cos_vals = cos(angles);
                sin_vals = sin(angles);
                ROTy = reshape([cos_vals; -sin_vals; sin_vals; cos_vals], 2, 2*(obj.Np-1))';
                
                % Transform from abc to alpha-beta and predict (rotate vectors assuming steady state)
                var_y_ab_pred = reshape(ROTy * obj.RFT.abc2ab * var_xy(obj.p+1:end), 2, obj.Np-1);
                
                % Transform back to abc
                var_y_pred = obj.RFT.ab2abc * var_y_ab_pred;

                % Concatenate input/output predictions
                var_xy_pred = [var_x_pred; var_y_pred];
    
                % Add actual measurement as first predicted step
                var_xy_pred = [var_xy, var_xy_pred];
                
                % Transform to basic component of cluster currents/voltages
                var_B_pred = obj.A' * var_xy_pred;
                % Shape: (m, Np)
            
            else

                var_B_pred = obj.A' * var_xy;
                % Shape: (m, 1)
            end
        end
    end
end
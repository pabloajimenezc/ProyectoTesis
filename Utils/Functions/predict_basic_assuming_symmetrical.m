function var_B_pred = predict_basic_assuming_symmetrical(var_xy, Np, IOGrid, Ts, RFT, A)
% predict_basic_assuming_symmetrical: Predict the basic current or voltage assuming steady state and symmetrical three-phase systems.

% THIS COULD BE REPLACED BY THE KALMAN FILTER

% var_xy: Input and output three-phase voltages/currents vector.
% Np: Number of steps to predict
% IOGrid: Input/output system
% Ts: Sampling period
% T: Struct with reference frame transformations
% A: Converter incidence matrix

angles = (0:Np-1) * (IOGrid.wx * Ts);
cos_vals = cos(angles);
sin_vals = sin(angles);
ROTx = reshape([cos_vals; -sin_vals; sin_vals; cos_vals], 2, 2*Np)';

angles = (0:Np-1) * (IOGrid.wy * Ts);
cos_vals = cos(angles);
sin_vals = sin(angles);
ROTy = reshape([cos_vals; -sin_vals; sin_vals; cos_vals], 2, 2*Np)';

% DISCLAIMER: This rotation matrices produce a vector of Np steps starting
% from now, so it actually only predicts Np-1 steps. This has to be taken in
% account in case of control delay compensation.

% Transform from abc to alpha-beta and predict (rotate vectors assuming steady state)
var_x_ab_pred = reshape(ROTx * RFT.abc2ab * var_xy(1:3), 2, Np);
var_y_ab_pred = reshape(ROTy * RFT.abc2ab * var_xy(4:6), 2, Np);

% Transform back to abc
var_x_pred = RFT.ab2abc * var_x_ab_pred;
var_y_pred = RFT.ab2abc * var_y_ab_pred;
var_xy_pred = [var_x_pred; var_y_pred];

% Transform to basic component of cluster currents/voltages
var_B_pred = A' * var_xy_pred;
end
function var_B_pred = predict_basic_assuming_symmetrical(var_xy, Np, ROTx, ROTy, Tabc2ab, Tab2abc, pinvA)
% predict_basic_assuming_symmetrical: Predict the basic current or voltage assuming steady state and symmetrical three-phase systems.

% THIS COULD BE REPLACED BY THE KALMAN FILTER

% var_xy: Input and output three-phase voltages/currents vector.
% Np: Number of steps to predict
% ROTx: Rotation matrix for input system frequency
% ROTy: Rotation matrix for output system frequency
% Tab2abc: Alpha-beta to abc transform
% pinvA: Inverse of M3C incidence matrix

% Transform from abc to alpha-beta and predict (rotate vectors assuming steady state)
var_x_ab_pred = reshape(ROTx * Tabc2ab * var_xy(1:3), 2, Np);
var_y_ab_pred = reshape(ROTy * Tabc2ab * var_xy(4:6), 2, Np);

% Transform back to abc
var_x_pred = Tab2abc * var_x_ab_pred;
var_y_pred = Tab2abc * var_y_ab_pred;
var_xy_pred = [var_x_pred; var_y_pred];

% Transform to basic component of cluster currents/voltages
var_B_pred = pinvA*var_xy_pred;
end
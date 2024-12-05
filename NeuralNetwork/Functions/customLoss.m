function [reg_loss, phy_loss, total_loss, gradients, state] = customLoss(x_batch, y_batch, net, Xmax, Ymax, Ec_max, Tl, N, lambda)
    % Forward pass
    [pred_batch, state] = forward(net, x_batch);

    % Regression loss
    reg_loss = mse(y_batch, pred_batch);

    % Physics units for physic loss (unscaled data)
    X = x_batch .* Xmax;
    PRED = pred_batch .* Ymax;
    
    % Input
    Ec_t = X(1:9, :);
    V_t = X(10:18, :);
    IB_t = X(19:27, :);
    
    % Output
    Ie_t = PRED(1:4, :);
    Vo_t = PRED(5, :);
    Ec_t1 = PRED(6:14, :);
    
    % Differential equation
    Ie_t = reshape(Ie_t, [4, 1, size(Ie_t, 2)]);
    N = repmat(N, [1, 1, size(Ie_t, 2)]);
    NIe_t = squeeze(pagemtimes(N, Ie_t));
    Ec_t1_diff = Ec_t + Tl * (V_t + Vo_t) .* (IB_t + NIe_t);

    % Physics loss
    phy_loss  = mse(Ec_t1_diff, Ec_t1) / Ec_max^2;

    % Total loss
    total_loss = (1 - lambda) * reg_loss + lambda * phy_loss;

    % Gradients
    gradients = dlgradient(total_loss, net.Learnables);
end
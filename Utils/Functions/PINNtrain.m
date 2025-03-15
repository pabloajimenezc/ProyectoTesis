function trained_net = PINNtrain(net, dlX_tr, dlY_tr, dlX_val, dlY_val, lr_i, lr_f, plots, Xmax, Ymax, Ec_max, Tl, N, lambda)
%% Randomize training samples order
rand_idx = randperm(size(dlX_tr, 2));
dlX_tr = dlX_tr(:, rand_idx);
dlY_tr = dlY_tr(:, rand_idx);

%% Training options
max_epochs = 500;
minibatch_size = 256;

%% Learning rate scheduler
% Exponential: df = (rf/ri)^(T/i)
drop_factor = (lr_f/lr_i)^(1/max_epochs);
learning_rate = lr_i;

%% Initialize adam optimizer
averageGrad = [];
averageSqGrad = [];

%% Initialize loss history
hist_reg_loss_tr = zeros(1, max_epochs);
hist_phy_loss_tr = zeros(1, max_epochs);
hist_total_loss_tr = zeros(1, max_epochs);
hist_reg_loss_val = zeros(1, max_epochs);
hist_phy_loss_val = zeros(1, max_epochs);
hist_total_loss_val = zeros(1, max_epochs);

%% Initialize loss plot
if plots
    figure;
    blue_color = [0, 0.4470, 0.7410];
    orange_color = [0.8500, 0.3250, 0.0980];
    plot_reg_loss_tr = plot(1:max_epochs, hist_reg_loss_tr, '--+', 'Color', blue_color, 'MarkerSize', 10);
    hold on;
    plot_phy_loss_tr = plot(1:max_epochs, hist_phy_loss_tr, '--x', 'Color', blue_color, 'MarkerSize', 10);
    plot_total_loss_tr = plot(1:max_epochs, hist_total_loss_tr, '-o', 'Color', blue_color, 'MarkerSize', 10);
    plot_reg_loss_val = plot(1:max_epochs, hist_reg_loss_val, '--+', 'Color', orange_color, 'MarkerSize', 10);
    plot_phy_loss_val = plot(1:max_epochs, hist_phy_loss_val, '--x', 'Color', orange_color, 'MarkerSize', 10);
    plot_total_loss_val = plot(1:max_epochs, hist_total_loss_val, '-o', 'Color', orange_color, 'MarkerSize', 10);
    title('Training')
    xlabel('Epoch');
    ylabel('Loss');
    grid on;
    xlim([1, max_epochs]);
    legend({'reg tr', 'phy tr', 'total tr', 'reg val', 'phy val', 'total val'}, 'Location', 'best');
end

%% Traning loop
Niter = floor(size(dlX_tr, 2) / minibatch_size);
for epoch = 1:max_epochs
    % Display epoch info
    if ~plots
    disp('**********')
    disp(['Epoch ' num2str(epoch) '/' num2str(max_epochs) ', Learning rate: ' num2str(learning_rate)])
    end

    % Minibatch iteration
    for i = randperm(Niter)        
        % Minibatch extract
        idx = (i-1)*minibatch_size+1:min(i*minibatch_size, size(dlX_tr, 2));
        dlX_batch = dlX_tr(:, idx);
        dlY_batch = dlY_tr(:, idx);

        % Batch loss
        [~, ~, ~, gradients, state] = dlfeval(@customLoss, dlX_batch, dlY_batch, net, Xmax, Ymax, Ec_max, Tl, N, lambda);
        net.State = state; % Necessary to update Batch Normalization layers

        % Adam update
        [net, averageGrad, averageSqGrad] = adamupdate(net, gradients, averageGrad, averageSqGrad, epoch, learning_rate);
    end
    % Update learning rate
    learning_rate = lr_i * drop_factor^epoch;

    % Regression, physics and total loss
    [reg_loss_tr, phy_loss_tr, total_loss_tr, ~, ~] = dlfeval(@customLoss, dlX_tr, dlY_tr, net, Xmax, Ymax, Ec_max, Tl, N, lambda);
    [reg_loss_val, phy_loss_val, total_loss_val, ~, ~] = dlfeval(@customLoss, dlX_val, dlY_val, net, Xmax, Ymax, Ec_max, Tl, N, lambda);

    % Plot/display epoch loss info
    if plots
        hist_reg_loss_tr(epoch) = extractdata(reg_loss_tr);
        hist_phy_loss_tr(epoch) = extractdata(phy_loss_tr);
        hist_total_loss_tr(epoch) = extractdata(total_loss_tr);
        hist_reg_loss_val(epoch) = extractdata(reg_loss_val);
        hist_phy_loss_val(epoch) = extractdata(phy_loss_val);
        hist_total_loss_val(epoch) = extractdata(total_loss_val);
    
        set(plot_reg_loss_tr, 'YData', hist_reg_loss_tr);
        set(plot_phy_loss_tr, 'YData', hist_phy_loss_tr);
        set(plot_total_loss_tr, 'YData', hist_total_loss_tr);
        set(plot_reg_loss_val, 'YData', hist_reg_loss_val);
        set(plot_phy_loss_val, 'YData', hist_phy_loss_val);
        set(plot_total_loss_val, 'YData', hist_total_loss_val);
        drawnow;
        xlim([0, epoch])
    else
        disp('Train loss');
        disp(['Regression: ' num2str(extractdata(reg_loss_tr)) ', Physics: ' num2str(extractdata(phy_loss_tr)) ', Total: ' num2str(extractdata(total_loss_tr))]);
        disp('Validation loss');
        disp(['Regression: ' num2str(extractdata(reg_loss_val)) ', Physics: ' num2str(extractdata(phy_loss_val)) ', Total: ' num2str(extractdata(total_loss_val))]);
    end
end

trained_net = net;
end
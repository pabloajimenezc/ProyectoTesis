function reg = L2Regularizer(net)
    reg = 0;
    for i = 1:size(net.Learnables, 1)
        if contains(net.Learnables.Parameter(i), 'Weight')
            W = net.Learnables.Value{i};
            reg = reg + sum(W.^2, 'all');
        end
    end
end
% function plotWeightDistributions(net)
% % PLOTWEIGHTDISTRIBUTIONS Grafica histogramas y ajustes gaussianos de
% % todos los pesos y sesgos de un dlnetwork ya entrenado.
% %
% % USO:
% %   plotWeightDistributions(net)
% %
% % ENTRADAS:
% %   net - dlnetwork entrenada
% 
%     Learnables = net.Learnables;
%     numLayers = size(Learnables,1);
% 
%     figure('Name','Weight and Bias Distributions','NumberTitle','off');
% 
%     % Graficar por capa
%     for i = 1:numLayers
%         values = double(extractdata(Learnables.Value{i}(:)));  % convertir a double
%         subplot(numLayers,2,2*i-1);
%         histogram(values, 30, 'Normalization','pdf'); hold on;
% 
%         % Ajuste gaussiano
%         pd = fitdist(values,'Normal');
%         x = linspace(min(values), max(values), 100);
%         y = pdf(pd, x);
%         plot(x,y,'r','LineWidth',1.5);
% 
%         title(sprintf('%s', Learnables.Parameter(i)));
%         xlabel('Value'); ylabel('PDF');
%     end
% 
%     % Graficar todos los pesos y sesgos juntos
%     allValues = [];
%     for i = 1:numLayers
%         allValues = [allValues; double(extractdata(Learnables.Value{i}(:)))];
%     end
% 
%     subplot(numLayers,2,2*numLayers);
%     histogram(allValues,50,'Normalization','pdf'); hold on;
%     pd_all = fitdist(allValues,'Normal');
%     x_all = linspace(min(allValues), max(allValues), 100);
%     y_all = pdf(pd_all, x_all);
%     plot(x_all, y_all, 'r', 'LineWidth', 2);
%     title('All Layers');
%     xlabel('Value'); ylabel('PDF');
% 
% end


function plotWeightDistributions(net, nbins)
% PLOTLAYERHISTOGRAMS
% For each layer in a dlnetwork that has learnables (weights and/or biases),
% plot the normalized histogram (counts divided by number of parameters in
% that layer) as a line connecting bin centers. Two figures are produced:
%   - Weight distributions (only layers that have weight parameters)
%   - Bias distributions   (only layers that have bias parameters)
%
% USAGE:
%   plotLayerHistograms(net)          % uses default nbins = 50
%   plotLayerHistograms(net, 40)      % custom number of bins
%
% INPUT:
%   net   - trained dlnetwork
%   nbins - (optional) number of histogram bins (default 50)
%
% Behavior:
%   - Uses the same global bin edges for all layers within weights and
%     within biases (so curves are comparable).
%   - Normalization: counts / (number of parameters in that layer).
%     Thus the values represent probability mass per bin and each layer's
%     curve sums to 1 across bins.

    if nargin < 2 || isempty(nbins)
        nbins = 50;
    end

    Learnables = net.Learnables; % table with fields Layer, Parameter, Value
    if isempty(Learnables)
        warning('net.Learnables is empty.');
        return;
    end

    % Identify unique layers in the Learnables table (preserve order)
    layerNames = unique(Learnables.Layer, 'stable');

    % Gather weight and bias vectors per layer (if present)
    weightLayers = {};
    weightValues = {};
    biasLayers = {};
    biasValues = {};

    for li = 1:numel(layerNames)
        lname = layerNames{li};
        rows = strcmp(Learnables.Layer, lname);

        % find params in this layer that contain 'Weight' / 'Bias'
        params = Learnables.Parameter(rows);
        vals = Learnables.Value(rows);

        % collect all weight entries for this layer
        weightMask = contains(params, "Weight", "IgnoreCase", true);
        if any(weightMask)
            wvals = [];
            for k = find(weightMask)'
                v = double(extractdata(vals{k}(:)));
                wvals = [wvals; v]; %#ok<AGROW>
            end
            if ~isempty(wvals)
                weightLayers{end+1} = lname; %#ok<AGROW>
                weightValues{end+1} = wvals; %#ok<AGROW>
            end
        end

        % collect all bias entries for this layer
        biasMask = contains(params, "Bias", "IgnoreCase", true);
        if any(biasMask)
            bvals = [];
            for k = find(biasMask)'
                v = double(extractdata(vals{k}(:)));
                bvals = [bvals; v]; %#ok<AGROW>
            end
            if ~isempty(bvals)
                biasLayers{end+1} = lname; %#ok<AGROW>
                biasValues{end+1} = bvals; %#ok<AGROW>
            end
        end
    end

    % Helper to compute global edges and plot
    function plotGroup(valuesCell, layersCell, figTitle)
        if isempty(valuesCell)
            return;
        end

        % global min/max across this group
        allVals = vertcat(valuesCell{:});
        xmin = min(allVals);
        xmax = max(allVals);
        if xmin == xmax
            xmin = xmin - 1e-6;
            xmax = xmax + 1e-6;
        end
        edges = linspace(xmin, xmax, nbins+1);
        centers = edges(1:end-1) + diff(edges)/2;

        colors = lines(numel(valuesCell));
        figure('Name', figTitle, 'NumberTitle', 'off'); hold on;
        legendEntries = cell(1, numel(valuesCell));
        plotIdx = 0;

        for k = 1:numel(valuesCell)
            v = valuesCell{k};
            if isempty(v)
                continue;
            end
            plotIdx = plotIdx + 1;
            counts = histcounts(v, edges);             % absolute counts per bin
            probPerBin = counts / numel(v);           % normalized by #params in layer

            % connect centers with a straight line
            plot(centers, probPerBin, '-', 'LineWidth', 1.6, 'Color', colors(plotIdx,:));
            legendEntries{plotIdx} = sprintf('Layer %d', plotIdx);
        end

        xlim([edges(1), edges(end)]);
        xlabel('Value');
        ylabel('Probability per bin');
        title(figTitle);
        legend(legendEntries(1:plotIdx), 'Location', 'best', 'Interpreter', 'none');
        box on; hold off;
    end

    % Plot weights and biases
    plotGroup(weightValues, weightLayers, 'Weight Parameters — Probability per bin');
    plotGroup(biasValues,   biasLayers,   'Bias Parameters — Probability per bin');
end

function plotGP(gp, results, varX, varY)
% plotGP(gp, results, varX, varY)
% Visualiza la media del GP en 3D: Z = mu(X,Y | Zslider).
% - EXACTAMENTE 3 variables totales.
% - (varX, varY) en el plano; la tercera (varZ) con slider.
% - Ejes X,Y en LOG; SIN colorbar (conserva colormap).
% - Punto rojo = mínimo observado (o mejor visible si el global no entra en log).
% - Ahora se superpone una malla (wireframe) sobre la superficie.
%
% Ejemplo:
%   plotGP(gp, results, 'qF', 'qw')

    %% --- Validaciones y nombres ---
    if nargin < 4
        error('plotGP:args', 'Uso: plotGP(gp, results, varX, varY)');
    end

    varsDesc = results.VariableDescriptions;
    if istable(varsDesc)
        varNames = cellstr(varsDesc.Name);
    else
        varNames = {varsDesc.Name};
    end
    D = numel(varNames);
    assert(D == 3, 'Esta función asume exactamente 3 variables. D=%d', D);

    % Índices de X, Y y Z
    idxX = find(strcmp(varNames, varX), 1);
    idxY = find(strcmp(varNames, varY), 1);
    assert(~isempty(idxX) && ~isempty(idxY), 'varX="%s" o varY="%s" no existen.', varX, varY);
    assert(idxX ~= idxY, 'varX y varY deben ser distintas.');
    idxZ = setdiff(1:D, [idxX, idxY]);
    varZ = varNames{idxZ};

    % --- Rango helper (tabla/struct)
    function rg = getRange(iVar)
        if istable(varsDesc)
            rg = varsDesc.Range{iVar};
        else
            rg = varsDesc(iVar).Range;
        end
        rg = rg(:).'; % 1x2
    end

    % Rangos (LOG; > 0)
    rgX = getRange(idxX);  rgY = getRange(idxY);  rgZ = getRange(idxZ);
    assert(all(rgX > 0) && all(rgY > 0) && all(rgZ > 0), ...
        'Con la suposición LOG, los rangos deben ser > 0 para %s, %s y %s.', varX, varY, varZ);

    %% --- Observaciones y mínimo observado ---
    XobsAll = results.XTrace;                % tabla
    YobsAll = results.ObjectiveTrace(:);     % vector
    Xmat    = table2array(XobsAll);
    idxFin  = isfinite(YobsAll) & all(isfinite(Xmat), 2);
    if ~any(idxFin)
        error('plotGP:noData', 'No hay observaciones finitas.');
    end
    Xobs = XobsAll(idxFin, :);
    Yobs = YobsAll(idxFin);

    % Índice del mínimo observado (global, robusto)
    Yaux = Yobs; Yaux(~isfinite(Yaux)) = inf;
    [~, idx_best_obs_global] = min(Yaux);

    %% --- Slider para varZ (log) ---
    sliderVals = logspace(log10(rgZ(1)), log10(rgZ(2)), 50);

    %% --- Figura y layout ---
    f = figure('Name', sprintf('GP 3D: %s vs %s  |  %s slider', varX, varY, varZ), ...
               'NumberTitle','off', 'Color','w', 'Position', [100, 100, 760, 640]);
    mainPos   = [0.10, 0.20, 0.80, 0.75];
    sliderPos = [0.10, 0.09, 0.80, 0.045];
    txtPos    = [0.10, 0.035, 0.80, 0.04];

    ax = axes('Position', mainPos, 'Parent', f);

    slider = uicontrol('Style', 'slider', ...
        'Min', 1, 'Max', numel(sliderVals), 'Value', 1, ...
        'SliderStep', [1/(numel(sliderVals)-1) 5/(numel(sliderVals)-1)], ...
        'Units', 'normalized', 'Position', sliderPos, 'Parent', f);
    txt = uicontrol('Style','text', 'Units','normalized', ...
        'Position', txtPos, 'String','', ...
        'FontSize', 12, 'HorizontalAlignment', 'center', 'BackgroundColor', 'w', 'Parent', f);

    % Parámetros de malla y tolerancia para mostrar obs cercanas al slice
    Ngrid = 70;
    tolLog = log(1.2); % ±20% en escala log

    %% --- Helper de actualización ---
    function updatePlot(idx)
        zVal = sliderVals(idx);
        set(txt, 'String', sprintf('%s = %.3g', varZ, zVal));

        % Malla en (varX, varY) - log
        xi = logspace(log10(rgX(1)), log10(rgX(2)), Ngrid).';
        xj = logspace(log10(rgY(1)), log10(rgY(2)), Ngrid).';
        [Xi, Xj] = meshgrid(xi, xj);

        % Tabla de predicción: varZ fijo al slider
        Tbase = repmat(Xobs(1,:), numel(Xi), 1);
        Tbase.(varX) = Xi(:);
        Tbase.(varY) = Xj(:);
        Tbase.(varZ) = repmat(zVal, numel(Xi), 1);

        Mu = predict(gp, Tbase);
        Mu = reshape(Mu, size(Xi));

        % --- Dibujo 3D ---
        cla(ax);
        % Superficie coloreada por Mu (sin colorbar)
        s = surf(ax, Xi, Xj, Mu, Mu, 'EdgeColor','none'); %#ok<NASGU>
        hold(ax, 'on');
        shading(ax, 'interp');

        % Wireframe (malla) superpuesta para resaltar relieve
        mh = mesh(ax, Xi, Xj, Mu, 'FaceColor','none', 'EdgeColor',[0 0 0], 'LineStyle','-','LineWidth',0.5);
        try, mh.EdgeAlpha = 0.25; end % si la versión soporta EdgeAlpha

        view(ax, 45, 30);
        axis(ax, 'tight');

        % Observaciones cercanas al slice (|log(z/zVal)| <= tol)
        obsX = Xobs{:, idxX};
        obsY = Xobs{:, idxY};
        obsZvar = Xobs{:, idxZ}; % tercera variable en las observaciones
        obsCost = Yobs;

        maskXY = (obsX > 0) & (obsY > 0);
        maskZ  = abs(log(obsZvar) - log(zVal)) <= tolLog;
        maskAll = maskXY & maskZ & isfinite(obsCost);

        if any(maskAll)
            scatter3(ax, obsX(maskAll), obsY(maskAll), obsCost(maskAll), ...
                     18, obsCost(maskAll), 'filled', 'MarkerEdgeColor','k');
        end

        % Punto rojo: mínimo observado global (o mejor visible si no entra en log)
        if obsX(idx_best_obs_global) > 0 && obsY(idx_best_obs_global) > 0 ...
                && isfinite(obsCost(idx_best_obs_global))
            plot3(ax, obsX(idx_best_obs_global), obsY(idx_best_obs_global), ...
                  obsCost(idx_best_obs_global), ...
                  'ro', 'MarkerSize', 12, 'MarkerFaceColor','r', 'LineWidth', 1.6);
        else
            maskVis = maskXY & isfinite(obsCost);
            if any(maskVis)
                [~, ord] = sort(obsCost(maskVis), 'ascend');
                idxList = find(maskVis);
                kbest = idxList(ord(1));
                plot3(ax, obsX(kbest), obsY(kbest), obsCost(kbest), ...
                      'ro', 'MarkerSize', 12, 'MarkerFaceColor','r', 'LineWidth', 1.6);
            end
        end

        % Ejes y estética
        set(ax, 'XScale','log', 'YScale','log');
        xlabel(ax, varX, 'Interpreter','none');
        ylabel(ax, varY, 'Interpreter','none');
        zlabel(ax, 'Cost');
        grid(ax, 'on'); box(ax, 'on');

        title(ax, sprintf('GP mean (3D) — %s vs %s  |  %s = %.3g', ...
              varX, varY, varZ, zVal), 'Interpreter','none', 'FontWeight','bold');

        % Sin colorbar; colormap por defecto (parula). Si quieres fijar caxis:
        % caxis(ax, [prctile(obsCost,5) prctile(obsCost,95)]);
    end

    %% --- Inicialización y callback ---
    updatePlot(1);
    slider.Callback = @(src,~) updatePlot(round(src.Value));
end

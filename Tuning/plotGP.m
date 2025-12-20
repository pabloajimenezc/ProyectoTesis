function plotGP(gp, results, varX, varY)
% plotGP(gp, results, varX, varY)
% Visualiza la media del GP.
% - Soporta 2 VARIABLES (Superficie fija) o 3 VARIABLES (Superficie con Slider).
% - Ejes X,Y en LOG.
% - Muestra puntos observados (filtrados por slice si D=3).
%
% Ejemplo 2D: plotGP(gp, results, 'qi', 'qF')
% Ejemplo 3D: plotGP(gp, results, 'qi', 'qF') % Busca la 3ra var auto

    %% --- 1. Validaciones y nombres ---
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
    assert(D == 2 || D == 3, 'Esta función soporta 2 o 3 variables. Tu modelo tiene D=%d', D);

    % Índices de X, Y
    idxX = find(strcmp(varNames, varX), 1);
    idxY = find(strcmp(varNames, varY), 1);
    assert(~isempty(idxX) && ~isempty(idxY), 'varX="%s" o varY="%s" no existen.', varX, varY);
    assert(idxX ~= idxY, 'varX y varY deben ser distintas.');

    % Manejo de la variable Z (si existe)
    if D == 3
        idxZ = setdiff(1:D, [idxX, idxY]);
        varZ = varNames{idxZ};
    else
        idxZ = [];
        varZ = ''; % No hay tercera variable
    end

    %% --- 2. Rangos helper ---
    function rg = getRange(iVar)
        if istable(varsDesc)
            rg = varsDesc.Range{iVar};
        else
            rg = varsDesc(iVar).Range;
        end
        rg = rg(:).'; % 1x2
    end

    rgX = getRange(idxX); 
    rgY = getRange(idxY);
    
    % Validación de rangos positivos para Log
    assert(all(rgX > 0) && all(rgY > 0), 'Los rangos X e Y deben ser > 0 para escala LOG.');
    
    rgZ = [];
    if D == 3
        rgZ = getRange(idxZ);
        assert(all(rgZ > 0), 'El rango Z debe ser > 0 para escala LOG.');
    end

    %% --- 3. Datos de Observaciones ---
    XobsAll = results.XTrace;     
    YobsAll = results.ObjectiveTrace(:);
    Xmat    = table2array(XobsAll);
    
    % Filtrar infinitos
    idxFin  = isfinite(YobsAll) & all(isfinite(Xmat), 2);
    if ~any(idxFin), error('plotGP:noData', 'No hay observaciones finitas.'); end
    
    Xobs = XobsAll(idxFin, :);
    Yobs = YobsAll(idxFin);
    
    % Mínimo global observado
    [~, idx_best_global] = min(Yobs);

    %% --- 4. Configuración del Slider (Solo si D=3) ---
    if D == 3
        sliderVals = logspace(log10(rgZ(1)), log10(rgZ(2)), 50);
        nSlider = numel(sliderVals);
        figTitle = sprintf('GP 3D: %s vs %s | %s slider', varX, varY, varZ);
        posFig = [100, 100, 760, 640];
    else
        sliderVals = 1; % Dummy value
        nSlider = 0;
        figTitle = sprintf('GP Surface: %s vs %s', varX, varY);
        posFig = [100, 100, 700, 550];
    end

    %% --- 5. Figura y Layout ---
    f = figure('Name', figTitle, 'NumberTitle','off', 'Color','w', 'Position', posFig);
    
    if D == 3
        mainPos   = [0.10, 0.20, 0.80, 0.75];
        sliderPos = [0.10, 0.09, 0.80, 0.045];
        txtPos    = [0.10, 0.035, 0.80, 0.04];
        
        ax = axes('Position', mainPos, 'Parent', f);
        slider = uicontrol('Style', 'slider', 'Min', 1, 'Max', nSlider, 'Value', 1, ...
            'SliderStep', [1/(nSlider-1) 5/(nSlider-1)], ...
            'Units', 'normalized', 'Position', sliderPos, 'Parent', f);
        txt = uicontrol('Style','text', 'Units','normalized', ...
            'Position', txtPos, 'String','', ...
            'FontSize', 12, 'HorizontalAlignment', 'center', ...
            'BackgroundColor', 'w', 'Parent', f);
    else
        % Si es 2D, usamos todo el espacio
        ax = axes('Parent', f); 
        slider = []; txt = [];
    end

    Ngrid = 70;
    tolLog = log(1.2); % Tolerancia para mostrar puntos cercanos al corte (solo D=3)

    %% --- 6. Función de Actualización ---
    function updatePlot(idxSl)
        % Malla X-Y Logarítmica
        xi = logspace(log10(rgX(1)), log10(rgX(2)), Ngrid).';
        xj = logspace(log10(rgY(1)), log10(rgY(2)), Ngrid).';
        [Xi, Xj] = meshgrid(xi, xj);
        
        % Preparar tabla para predict
        Tbase = repmat(Xobs(1,:), numel(Xi), 1); % Copia estructura
        Tbase.(varX) = Xi(:);
        Tbase.(varY) = Xj(:);
        
        zVal = NaN; 
        if D == 3
            zVal = sliderVals(idxSl);
            Tbase.(varZ) = repmat(zVal, numel(Xi), 1);
            set(txt, 'String', sprintf('%s = %.3g', varZ, zVal));
        end

        % Predicción del GP
        Mu = predict(gp, Tbase);
        Mu = reshape(Mu, size(Xi));

        % --- Plotting ---
        cla(ax);
        s = surf(ax, Xi, Xj, Mu, 'EdgeColor','none'); %#ok<NASGU>
        hold(ax, 'on');
        shading(ax, 'interp');
        
        % Wireframe estético
        mesh(ax, Xi, Xj, Mu, 'FaceColor','none', 'EdgeColor',[0 0 0], ...
            'LineStyle','-','LineWidth',0.5, 'EdgeAlpha', 0.25);

        view(ax, 45, 30);
        axis(ax, 'tight');

        % Filtrado de puntos observados
        obsX = Xobs{:, idxX};
        obsY = Xobs{:, idxY};
        obsCost = Yobs;
        
        if D == 3
            % Solo mostramos puntos cercanos al corte de Z
            obsZ = Xobs{:, idxZ};
            maskZ = abs(log(obsZ) - log(zVal)) <= tolLog;
        else
            % En 2D mostramos TODO
            maskZ = true(size(obsX));
        end
        
        maskVis = (obsX > 0) & (obsY > 0) & maskZ;

        if any(maskVis)
            scatter3(ax, obsX(maskVis), obsY(maskVis), obsCost(maskVis), ...
                     18, obsCost(maskVis), 'filled', 'MarkerEdgeColor','k');
        end

        % Resaltar el Mínimo Global
        % (Solo se muestra si cae en el slice actual en 3D, o siempre en 2D)
        if maskVis(idx_best_global)
            plot3(ax, obsX(idx_best_global), obsY(idx_best_global), obsCost(idx_best_global), ...
                  'p', 'MarkerSize', 15, 'MarkerFaceColor','r', 'MarkerEdgeColor','k');
        end

        % Ejes
        set(ax, 'XScale','log', 'YScale','log');
        xlabel(ax, varX, 'Interpreter','none');
        ylabel(ax, varY, 'Interpreter','none');
        zlabel(ax, 'Cost (RMSE)');
        grid(ax, 'on'); box(ax, 'on');
        
        if D == 3
            title(ax, sprintf('GP Mean | %s=%.3g', varZ, zVal), 'Interpreter','none');
        else
            title(ax, sprintf('GP Cost Surface (BayesOpt Model)'), 'Interpreter','none');
        end
    end

    %% --- 7. Inicialización ---
    updatePlot(1);
    
    if D == 3
        slider.Callback = @(src,~) updatePlot(round(src.Value));
    end
end
% function stop = plotSurrogate(results, state)
%     stop = false;
%     if ~strcmp(state, 'iteration')
%         return;
%     end
% 
%     % === Descripción de variables y datos ===
%     varsDesc = results.VariableDescriptions;
%     varNames = {varsDesc.Name};
%     D        = numel(varNames);
%     if D ~= 3
%         warning('plotSurrogate: este helper está pensado para 3 variables (D=3). D=%d', D);
%         return;
%     end
%     Xobs     = results.XTrace;
%     Yobs     = results.ObjectiveTrace;
%     bestEst  = table2struct(results.XAtMinEstimatedObjective);
% 
%     % === GP (idéntico a tu flujo) ===
%     gp = fitrgp(Xobs, Yobs, ...
%         'Standardize', true, ...
%         'KernelFunction', 'ardsquaredexponential');
% 
%     % Helper: decidir si una variable va en escala log y cómo muestrear
%     function tf = useLog(iVar)
%         tf = false;
%         % Si el objeto trae Transform y es 'log', usa log
%         if isfield(varsDesc, 'Transform')
%             tr = varsDesc(iVar).Transform;
%             if ischar(tr) || isstring(tr)
%                 tf = strcmpi(string(tr), "log");
%             end
%         end
%         % Si no hay Transform, usa log solo si el rango es positivo
%         if ~tf
%             rg = varsDesc(iVar).Range;
%             tf = all(rg > 0);
%         end
%     end
%     function [grid,scaleStr] = makeGrid(iVar, N)
%         rg = varsDesc(iVar).Range;
%         if useLog(iVar)
%             grid = logspace(log10(rg(1)), log10(rg(2)), N).';
%             scaleStr = 'log';
%         else
%             grid = linspace(rg(1), rg(2), N).';
%             scaleStr = 'linear';
%         end
%     end
% 
%     % =========================
%     % 1) Slices univariados 1D
%     % =========================
%     figure(5); clf;
%     for iVar = 1:D
%         [xgrid, xscale] = makeGrid(iVar, 120);
%         Tpred = repmat(struct2table(bestEst), numel(xgrid), 1);
%         Tpred.(varNames{iVar}) = xgrid;
%         [mu, sigma] = predict(gp, Tpred);
% 
%         subplot(D, 1, iVar);
%         hold on; grid on;
%         % banda de confianza
%         fill([xgrid; flipud(xgrid)], [mu+2*sigma; flipud(mu-2*sigma)], 0.9*[1 1 1], 'EdgeColor','none');
%         % media
%         plot(xgrid, mu, '-k', 'LineWidth', 1.5);
%         % observaciones
%         scatter(Xobs{:,iVar}, Yobs, 30, 'r', 'filled');
%         set(gca, 'XScale', xscale);
%         xlabel(varNames{iVar}, 'Interpreter','none');
%         ylabel('Cost');
%     end
%     sgtitle('1D GP slices, conditioned at best point', 'FontWeight', 'bold');
% 
%     % ===============================================
%     % 2) Slice 2D central + slices arriba/derecha  (fig.6)
%     %    => tomamos las 2 primeras variables como ejes (genérico)
%     %       y la 3ra queda condicionada en el mejor punto
%     % ===============================================
%     figure(6); clf;
% 
%     idx1 = 1;                % eje X (variable 1)
%     idx2 = 2;                % eje Y (variable 2)
%     idxC = 3;                % variable condicionada
% 
%     % Grids para var1 y var2
%     [xi, xscale1] = makeGrid(idx1, 70);
%     [xj, xscale2] = makeGrid(idx2, 70);
%     [Xi, Xj] = meshgrid(xi, xj);
% 
%     % --- Layout replicando tu diseño ---
%     mainPos   = [0.13, 0.13, 0.60, 0.62];
%     topPos    = [0.13, 0.76, 0.60, 0.17];
%     rightPos  = [0.74, 0.13, 0.13, 0.62];
%     cbPos     = [0.88, 0.13, 0.025, 0.62];
% 
%     % --- Central: mapa de contorno (var1 vs var2) condicionado en var3=best ---
%     Tcont = repmat(struct2table(bestEst), numel(Xi), 1);
%     Tcont.(varNames{idx1}) = Xi(:);
%     Tcont.(varNames{idx2}) = Xj(:);
%     MuC = predict(gp, Tcont);
%     MuC = reshape(MuC, size(Xi));
% 
%     axMain = axes('Position', mainPos);
%     contourf(axMain, Xi, Xj, MuC, 20, 'LineColor','none'); hold(axMain, 'on');
%     scatter(axMain, Xobs{:,idx1}, Xobs{:,idx2}, 25, Yobs, 'filled', 'MarkerEdgeColor','k');
% 
%     % Punto óptimo en rojo (mínimo Yobs)
%     [~, idx_best] = min(Yobs);
%     x1_opt = Xobs{idx_best, idx1};
%     x2_opt = Xobs{idx_best, idx2};
%     plot(axMain, x1_opt, x2_opt, 'ro', 'MarkerSize', 12, 'MarkerFaceColor', 'r', 'LineWidth', 2);
% 
%     set(axMain, 'XScale', xscale1, 'YScale', xscale2);
%     xlabel(axMain, varNames{idx1}, 'Interpreter','none');
%     ylabel(axMain, varNames{idx2}, 'Interpreter','none');
%     grid(axMain, 'on'); box(axMain, 'on');
% 
%     % --- Top: slice en var1, condicionado en var2/var3 = best ---
%     [xgrid1, xscaleTop] = makeGrid(idx1, 100);
%     Tz = repmat(struct2table(bestEst), numel(xgrid1), 1);
%     Tz.(varNames{idx1}) = xgrid1;
%     [mu1, sigma1] = predict(gp, Tz);
% 
%     axTop = axes('Position', topPos);
%     fill(axTop, [xgrid1; flipud(xgrid1)], [mu1+2*sigma1; flipud(mu1-2*sigma1)], 0.9*[1 1 1], 'EdgeColor', 'none');
%     hold(axTop, 'on');
%     plot(axTop, xgrid1, mu1, '-k', 'LineWidth', 1.5);
%     scatter(axTop, Xobs{:,idx1}, Yobs, 25, 'r', 'filled');
%     set(axTop, 'XScale', xscaleTop);
%     axTop.XAxisLocation = 'bottom';
%     axTop.YAxisLocation = 'left';
%     axTop.XTickLabel = {};
%     axTop.YTickLabel = {};
%     axTop.Box = 'on';
%     grid(axTop, 'on');
% 
%     % --- Right: slice en var2, condicionado en var1/var3 = best ---
%     [xgrid2, yscaleRight] = makeGrid(idx2, 100);
%     To = repmat(struct2table(bestEst), numel(xgrid2), 1);
%     To.(varNames{idx2}) = xgrid2;
%     [mu2, sigma2] = predict(gp, To);
% 
%     axRight = axes('Position', rightPos);
%     fill(axRight, [mu2+2*sigma2; flipud(mu2-2*sigma2)], [xgrid2; flipud(xgrid2)], 0.9*[1 1 1], 'EdgeColor', 'none');
%     hold(axRight, 'on');
%     plot(axRight, mu2, xgrid2, '-k', 'LineWidth', 1.5);
%     scatter(axRight, Yobs, Xobs{:,idx2}, 25, 'r', 'filled');
%     set(axRight, 'YScale', yscaleRight);
%     axRight.XAxisLocation = 'top';
%     axRight.YAxisLocation = 'right';
%     axRight.XTickLabel = {};
%     axRight.YTickLabel = {};
%     axRight.Box = 'on';
%     grid(axRight, 'on');
% 
%     % --- Colorbar ---
%     axes(axMain);
%     c = colorbar('Position', cbPos);
%     c.Label.String = 'Cost';
% 
%     sgtitle(sprintf('2D GP slice (cond. en %s=best)', varNames{idxC}), 'FontWeight', 'bold');
%     drawnow;
% end

function stop = plotSurrogate(results, state)
    % plotSurrogate - Helper de bayesopt:
    % (1) Slices 1D condicionados en el mejor punto (fig. 5)
    % (2) Slices 2D para CADA PAR de variables, condicionado en la restante (fig. 6)
    %
    % Requiere exactamente D = 3 variables.
    %
    % Pablo + ChatGPT, 2025-08

    stop = false;
    if ~strcmp(state, 'iteration')
        return;
    end

    % === Variables y datos ===
    varsDesc = results.VariableDescriptions;
    varNames = {varsDesc.Name};
    D        = numel(varNames);
    if D ~= 3
        warning('plotSurrogate: este helper está pensado para 3 variables (D=3). D=%d', D);
        return;
    end

    Xobs    = results.XTrace;
    Yobs    = results.ObjectiveTrace;

    % Índice del mínimo observado (robusto a NaN/Inf)
    Yaux = Yobs(:);
    Yaux(~isfinite(Yaux)) = inf;
    [~, idx_best_obs] = min(Yaux);

    bestEst = table2struct(results.XAtMinEstimatedObjective);  % struct con campos = varNames

    % === Ajuste GP como en tu flujo ===
    gp = fitrgp(Xobs, Yobs, ...
        'Standardize', true, ...
        'KernelFunction', 'ardsquaredexponential');

    % ===== Helpers: escala log/linear y grillas =====
    function tf = useLog(iVar)
        tf = false;
        if isfield(varsDesc, 'Transform')
            tr = varsDesc(iVar).Transform;
            if ischar(tr) || isstring(tr)
                tf = strcmpi(string(tr), "log");
            end
        end
        % (Opcional) fallback: log si el rango es positivo
        if ~tf
            rg = varsDesc(iVar).Range;
            tf = all(rg > 0);
        end
    end

    function [grid, scaleStr] = makeGrid(iVar, N)
        rg = varsDesc(iVar).Range;
        if useLog(iVar)
            grid = logspace(log10(rg(1)), log10(rg(2)), N).';
            scaleStr = 'log';
        else
            grid = linspace(rg(1), rg(2), N).';
            scaleStr = 'linear';
        end
    end

    % =========================
    % (1) Slices univariados 1D
    % =========================
    figure(5); clf;
    for iVar = 1:D
        [xgrid, xscale] = makeGrid(iVar, 120);

        Tpred = repmat(struct2table(bestEst), numel(xgrid), 1);
        Tpred.(varNames{iVar}) = xgrid;

        [mu, sigma] = predict(gp, Tpred);

        subplot(D, 1, iVar);
        hold on; grid on; box on;

        % Banda de confianza 95%
        fill([xgrid; flipud(xgrid)], [mu+2*sigma; flipud(mu-2*sigma)], ...
             0.9*[1 1 1], 'EdgeColor','none');
        % Media
        plot(xgrid, mu, '-k', 'LineWidth', 1.5);
        % Observaciones
        scatter(Xobs{:,iVar}, Yobs, 30, 'r', 'filled');

        set(gca, 'XScale', xscale);
        xlabel(varNames{iVar}, 'Interpreter','none');
        ylabel('Cost');
    end
    sgtitle('1D GP slices (conditioned at best point)', 'FontWeight', 'bold');

    % ==========================================================
    % (2) Slices 2D para CADA PAR, condicionando en la restante
    %     Pares: (1,2 | cond 3), (1,3 | cond 2), (2,3 | cond 1)
    % ==========================================================
    figure(6); clf;
    tl = tiledlayout(1, 3, 'TileSpacing','compact', 'Padding','compact');

    pairs = [1 2 3;   % idx1 idx2 idxC
             1 3 2;
             2 3 1];

    % Misma escala de colores en todos los paneles
    allMuMin = +inf;
    allMuMax = -inf;

    % Pre-cálculo para homogeneizar colorbar
    Ngrid = 70;
    preMu = cell(3,1);
    preXi = cell(3,1);
    preXj = cell(3,1);
    for k = 1:3
        idx1 = pairs(k,1);
        idx2 = pairs(k,2);
        idxC = pairs(k,3);

        [xi, ~] = makeGrid(idx1, Ngrid);
        [xj, ~] = makeGrid(idx2, Ngrid);
        [Xi, Xj] = meshgrid(xi, xj);

        Tcont = repmat(struct2table(bestEst), numel(Xi), 1);
        Tcont.(varNames{idx1}) = Xi(:);
        Tcont.(varNames{idx2}) = Xj(:);

        Mu = predict(gp, Tcont);
        Mu = reshape(Mu, size(Xi));

        preMu{k} = Mu;
        preXi{k} = Xi;
        preXj{k} = Xj;

        allMuMin = min(allMuMin, min(Mu(:)));
        allMuMax = max(allMuMax, max(Mu(:)));
    end

    % Graficado de los tres paneles
    for k = 1:3
        idx1 = pairs(k,1);
        idx2 = pairs(k,2);
        idxC = pairs(k,3);

        Xi = preXi{k};
        Xj = preXj{k};
        Mu = preMu{k};

        ax = nexttile(tl); %#ok<LUNTI>
        hold(ax, 'on'); grid(ax, 'on'); box(ax, 'on');

        % Contour del costo medio
        contourf(ax, Xi, Xj, Mu, 20, 'LineColor','none');
        caxis(ax, [allMuMin, allMuMax]);  % misma escala

        % Observaciones coloreadas por costo (contexto)
        scatter(ax, Xobs{:,idx1}, Xobs{:,idx2}, 25, Yobs, ...
                'filled', 'MarkerEdgeColor','k');

        % ÚNICO punto de interés: mínimo observado (robusto a NaN/Inf)
        x1_best = Xobs{idx_best_obs, idx1};
        x2_best = Xobs{idx_best_obs, idx2};
        plot(ax, x1_best, x2_best, 'ro', 'MarkerSize', 12, ...
             'MarkerFaceColor', 'r', 'LineWidth', 1.6);

        % Escalas de ejes (lineal/log según variable)
        if useLog(idx1), set(ax, 'XScale','log'); end
        if useLog(idx2), set(ax, 'YScale','log'); end

        xlabel(ax, varNames{idx1}, 'Interpreter','none');
        ylabel(ax, varNames{idx2}, 'Interpreter','none');

        % Título con el valor numérico de la variable condicionada
        condVal = bestEst.(varNames{idxC});
        title(ax, sprintf('%s vs %s   |   %s = %.3g', ...
              varNames{idx1}, varNames{idx2}, varNames{idxC}, condVal), ...
              'Interpreter','none');
    end

    % Colorbar común
    cb = colorbar;
    cb.Layout.Tile = 'east';
    cb.Label.String = 'Cost';
    sgtitle(tl, '2D GP slices (conditioned at best point)', ...
        'FontWeight','bold');

    drawnow;
end

% function stop = plotSurrogate(results, state)
%     % plotSurrogate - Helper de bayesopt:
%     % (1) Slices 1D condicionados en el mejor punto (fig. 5)
%     % (2) Slices 2D para CADA PAR de variables, condicionado en la restante (fig. 6)
%     %
%     % Requiere exactamente D = 3 variables.
%     %
%     % Pablo + ChatGPT, 2025-08
% 
%     stop = false;
%     if ~strcmp(state, 'iteration')
%         return;
%     end
% 
%     % === Variables y datos ===
%     varsDesc = results.VariableDescriptions;
%     varNames = {varsDesc.Name};
%     D        = numel(varNames);
%     if D ~= 3
%         warning('plotSurrogate: este helper está pensado para 3 variables (D=3). D=%d', D);
%         return;
%     end
% 
%     Xobs    = results.XTrace;
%     Yobs    = results.ObjectiveTrace;
% 
%     % Índice del mínimo observado (robusto a NaN/Inf)
%     Yaux = Yobs(:);
%     Yaux(~isfinite(Yaux)) = inf;
%     [~, idx_best_obs] = min(Yaux);
% 
%     bestEst = table2struct(results.XAtMinEstimatedObjective);  % struct con campos = varNames
% 
%     % === Ajuste GP como en tu flujo ===
%     gp = fitrgp(Xobs, Yobs, ...
%         'Standardize', true, ...
%         'KernelFunction', 'ardsquaredexponential');
% 
%     % ===== Helpers: escala log/linear y grillas =====
%     function tf = useLog(iVar)
%         tf = false;
%         if isfield(varsDesc, 'Transform')
%             tr = varsDesc(iVar).Transform;
%             if ischar(tr) || isstring(tr)
%                 tf = strcmpi(string(tr), "log");
%             end
%         end
%         % (Opcional) fallback: log si el rango es positivo
%         if ~tf
%             rg = varsDesc(iVar).Range;
%             tf = all(rg > 0);
%         end
%     end
% 
%     function [grid, scaleStr] = makeGrid(iVar, N)
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
%     % (1) Slices univariados 1D
%     % =========================
%     figure(5); clf;
%     for iVar = 1:D
%         [xgrid, xscale] = makeGrid(iVar, 120);
% 
%         Tpred = repmat(struct2table(bestEst), numel(xgrid), 1);
%         Tpred.(varNames{iVar}) = xgrid;
% 
%         [mu, sigma] = predict(gp, Tpred);
% 
%         subplot(D, 1, iVar);
%         hold on; grid on; box on;
% 
%         % Banda de confianza 95%
%         fill([xgrid; flipud(xgrid)], [mu+2*sigma; flipud(mu-2*sigma)], ...
%              0.9*[1 1 1], 'EdgeColor','none');
%         % Media
%         plot(xgrid, mu, '-k', 'LineWidth', 1.5);
%         % Observaciones
%         scatter(Xobs{:,iVar}, Yobs, 30, 'r', 'filled');
% 
%         set(gca, 'XScale', xscale);
%         xlabel(varNames{iVar}, 'Interpreter','none');
%         ylabel('Cost');
%     end
%     sgtitle('1D GP slices (conditioned at best point)', 'FontWeight', 'bold');
% 
%     % ==========================================================
%     % (2) Slices 2D para CADA PAR, condicionando en la restante
%     %     Pares: (1,2 | cond 3), (1,3 | cond 2), (2,3 | cond 1)
%     % ==========================================================
%     figure(6); clf;
%     tl = tiledlayout(1, 3, 'TileSpacing','compact', 'Padding','compact');
% 
%     pairs = [1 2 3;   % idx1 idx2 idxC
%              1 3 2;
%              2 3 1];
% 
%     % Misma escala de colores en todos los paneles
%     allMuMin = +inf;
%     allMuMax = -inf;
% 
%     % Pre-cálculo para homogeneizar colorbar
%     Ngrid = 70;
%     preMu = cell(3,1);
%     preXi = cell(3,1);
%     preXj = cell(3,1);
%     for k = 1:3
%         idx1 = pairs(k,1);
%         idx2 = pairs(k,2);
%         idxC = pairs(k,3);
% 
%         [xi, ~] = makeGrid(idx1, Ngrid);
%         [xj, ~] = makeGrid(idx2, Ngrid);
%         [Xi, Xj] = meshgrid(xi, xj);
% 
%         Tcont = repmat(struct2table(bestEst), numel(Xi), 1);
%         Tcont.(varNames{idx1}) = Xi(:);
%         Tcont.(varNames{idx2}) = Xj(:);
% 
%         Mu = predict(gp, Tcont);
%         Mu = reshape(Mu, size(Xi));
% 
%         preMu{k} = Mu;
%         preXi{k} = Xi;
%         preXj{k} = Xj;
% 
%         allMuMin = min(allMuMin, min(Mu(:)));
%         allMuMax = max(allMuMax, max(Mu(:)));
%     end
% 
%     % Graficado de los tres paneles
%     for k = 1:3
%         idx1 = pairs(k,1);
%         idx2 = pairs(k,2);
%         idxC = pairs(k,3);
% 
%         Xi = preXi{k};
%         Xj = preXj{k};
%         Mu = preMu{k};
% 
%         ax = nexttile(tl); %#ok<LUNTI>
%         hold(ax, 'on'); grid(ax, 'on'); box(ax, 'on');
% 
%         % Contour del costo medio
%         contourf(ax, Xi, Xj, Mu, 20, 'LineColor','none');
%         caxis(ax, [allMuMin, allMuMax]);  % misma escala
% 
%         % Observaciones coloreadas por costo (contexto)
%         scatter(ax, Xobs{:,idx1}, Xobs{:,idx2}, 25, Yobs, ...
%                 'filled', 'MarkerEdgeColor','k');
% 
%         % ÚNICO punto de interés: mínimo observado (robusto a NaN/Inf)
%         x1_best = Xobs{idx_best_obs, idx1};
%         x2_best = Xobs{idx_best_obs, idx2};
%         plot(ax, x1_best, x2_best, 'ro', 'MarkerSize', 12, ...
%              'MarkerFaceColor', 'r', 'LineWidth', 1.6);
% 
%         % Escalas de ejes (lineal/log según variable)
%         if useLog(idx1), set(ax, 'XScale','log'); end
%         if useLog(idx2), set(ax, 'YScale','log'); end
% 
%         xlabel(ax, varNames{idx1}, 'Interpreter','none');
%         ylabel(ax, varNames{idx2}, 'Interpreter','none');
% 
%         % Título con el valor numérico de la variable condicionada
%         condVal = bestEst.(varNames{idxC});
%         title(ax, sprintf('%s vs %s   |   %s = %.3g', ...
%               varNames{idx1}, varNames{idx2}, varNames{idxC}, condVal), ...
%               'Interpreter','none');
%     end
% 
%     % Colorbar común
%     cb = colorbar;
%     cb.Layout.Tile = 'east';
%     cb.Label.String = 'Cost';
%     sgtitle(tl, '2D GP slices (conditioned at best point)', ...
%         'FontWeight','bold');
% 
%     drawnow;
% end

function stop = plotSurrogate(results, state)
    % plotSurrogate - Helper de bayesopt:
    % (D=3) (1) Slices 1D condicionados en el mejor punto (fig. 5)
    %       (2) Slices 2D para CADA PAR, condicionado en la restante (fig. 6)
    % (D=2) (A) Un solo 2D contour del surrogate para las 2 variables (fig. 6)
    %
    % Pablo + ChatGPT, 2025-08 (mod 2D/3D)

    stop = false;
    if ~strcmp(state, 'iteration'); return; end

    % === Variables y datos ===
    varsDesc = results.VariableDescriptions;
    varNames = {varsDesc.Name};
    D        = numel(varNames);

    Xobs = results.XTrace;
    Yobs = results.ObjectiveTrace;

    % Índice del mínimo observado (robusto a NaN/Inf)
    Yaux = Yobs(:);
    Yaux(~isfinite(Yaux)) = inf;
    [~, idx_best_obs] = min(Yaux);

    % Mejor punto (estimado por el GP de bayesopt)
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
        % Fallback: si el rango es positivo, permitir log
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
    %   CASO D = 3 (original)
    % =========================
    if D == 3
        % ---------- (1) Slices 1D ----------
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

        % ---------- (2) 2D para cada par ----------
        figure(6); clf;
        tl = tiledlayout(1, 3, 'TileSpacing','compact', 'Padding','compact');

        pairs = [1 2 3;   % idx1 idx2 idxC
                 1 3 2;
                 2 3 1];

        % Misma escala de colores en todos los paneles
        allMuMin = +inf; allMuMax = -inf;

        % Pre-cálculo para homogeneizar colorbar
        Ngrid = 70;
        preMu = cell(3,1); preXi = cell(3,1); preXj = cell(3,1);
        for k = 1:3
            idx1 = pairs(k,1); idx2 = pairs(k,2); idxC = pairs(k,3);

            [xi, ~] = makeGrid(idx1, Ngrid);
            [xj, ~] = makeGrid(idx2, Ngrid);
            [Xi, Xj] = meshgrid(xi, xj);

            Tcont = repmat(struct2table(bestEst), numel(Xi), 1);
            Tcont.(varNames{idx1}) = Xi(:);
            Tcont.(varNames{idx2}) = Xj(:);

            Mu = predict(gp, Tcont);
            Mu = reshape(Mu, size(Xi));

            preMu{k} = Mu; preXi{k} = Xi; preXj{k} = Xj;
            allMuMin = min(allMuMin, min(Mu(:)));
            allMuMax = max(allMuMax, max(Mu(:)));
        end

        % Graficado de los tres paneles
        for k = 1:3
            idx1 = pairs(k,1); idx2 = pairs(k,2); idxC = pairs(k,3);

            Xi = preXi{k}; Xj = preXj{k}; Mu = preMu{k};

            ax = nexttile(tl);
            hold(ax, 'on'); grid(ax, 'on'); box(ax, 'on');

            contourf(ax, Xi, Xj, Mu, 20, 'LineColor','none');
            caxis(ax, [allMuMin, allMuMax]);  % misma escala

            % Observaciones coloreadas por costo
            scatter(ax, Xobs{:,idx1}, Xobs{:,idx2}, 25, Yobs, ...
                    'filled', 'MarkerEdgeColor','k');

            % Punto de mejor observado
            x1_best = Xobs{idx_best_obs, idx1};
            x2_best = Xobs{idx_best_obs, idx2};
            plot(ax, x1_best, x2_best, 'ro', 'MarkerSize', 12, ...
                'MarkerFaceColor','r', 'LineWidth', 1.6);

            if useLog(idx1), set(ax, 'XScale','log'); end
            if useLog(idx2), set(ax, 'YScale','log'); end

            xlabel(ax, varNames{idx1}, 'Interpreter','none');
            ylabel(ax, varNames{idx2}, 'Interpreter','none');

            condVal = bestEst.(varNames{idxC});
            title(ax, sprintf('%s vs %s   |   %s = %.3g', ...
                varNames{idx1}, varNames{idx2}, varNames{idxC}, condVal), ...
                'Interpreter','none');
        end

        cb = colorbar; cb.Layout.Tile = 'east'; cb.Label.String = 'Cost';
        sgtitle(tl, '2D GP slices (conditioned at best point)', 'FontWeight','bold');
        drawnow;
        return
    end

    % =========================
    %   CASO D = 2 (nuevo)
    % =========================
    if D == 2
        % Grillas para ambas variables
        Ngrid = 100;
        [xi, xscale] = makeGrid(1, Ngrid);
        [xj, yscale] = makeGrid(2, Ngrid);
        [Xi, Xj] = meshgrid(xi, xj);

        % Tabla para predicción en la malla completa
        Tpred = repmat(struct2table(bestEst), numel(Xi), 1);
        Tpred.(varNames{1}) = Xi(:);
        Tpred.(varNames{2}) = Xj(:);

        Mu = predict(gp, Tpred);
        Mu = reshape(Mu, size(Xi));

        % Gráfico único 2D del surrogate
        figure(6); clf;
        ax = axes; %#ok<LAXES>
        hold(ax, 'on'); grid(ax, 'on'); box(ax, 'on');

        contourf(ax, Xi, Xj, Mu, 24, 'LineColor','none');
        cb = colorbar(ax); cb.Label.String = 'Cost';

        % Observaciones coloreadas por costo
        scatter(ax, Xobs{:,1}, Xobs{:,2}, 28, Yobs, ...
                'filled', 'MarkerEdgeColor','k');

        % Punto del mejor observado
        x1_best = Xobs{idx_best_obs, 1};
        x2_best = Xobs{idx_best_obs, 2};
        plot(ax, x1_best, x2_best, 'ro', 'MarkerSize', 12, ...
            'MarkerFaceColor','r', 'LineWidth', 1.6);

        % Escalas según transform
        if strcmpi(xscale, 'log'), set(ax, 'XScale','log'); end
        if strcmpi(yscale, 'log'), set(ax, 'YScale','log'); end

        xlabel(ax, varNames{1}, 'Interpreter','none');
        ylabel(ax, varNames{2}, 'Interpreter','none');
        title(ax, '2D GP surrogate', 'FontWeight','bold');
        drawnow;
        return
    end

    % =========================
    %   Otros D
    % =========================
    warning('plotSurrogate: pensado para D=2 o D=3. D=%d', D);
end

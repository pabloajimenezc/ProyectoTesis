% clear all
% File: generate_summary_pdf_selected.m

%% 1) Load data
tblBCD = readtable('summaryBCD.csv');
tblNN  = readtable('summaryNN.csv');

%% 2) Variable groups y etiquetas
varGroups = { ...
  {{'vc_ua','vc_ub','vc_uc','vc_la','vc_lb','vc_lc'}}, ...
  {{'ie1','ie2','ie1_ref','ie2_ref'}}, ...
  {{'vo'}} ...
};
yLabels = { ...
  'Cluster Capacitor Voltages (V)', ...
  'L.I. Circulating Currents (A)', ...
  'Common-Mode Voltage (V)' ...
};

%% 3) Parámetros de tamaño
% aspectX = 16;
aspectX = 20;
aspectY = 9;
nCols   = 2;
nRows   = 3;
figWidth  = aspectX * nCols;
figHeight = aspectY * nRows;
fontSizeAxes   = 35;
fontSizeLabels = 40;

%% 4) Crear figura
fig = figure('Units','inches', ...
             'Position',[1 1 figWidth figHeight], ...
             'Color','w');
set(fig, 'PaperUnits', 'inches');
set(fig, 'PaperSize', [figWidth figHeight]);
set(fig, 'PaperPosition', [0 0 figWidth figHeight]);
set(fig, 'PaperPositionMode', 'manual');

t = tiledlayout(nRows,nCols, 'TileSpacing','compact', 'Padding','compact');
axesHandles = gobjects(nRows,nCols);

%% 5) Cálculo de límites Y con redondeo y margen especial
minMaxVals = zeros(nRows, 2);
yTicksVec  = cell(nRows, 1);
roundGridTick = @(x) ...
    (abs(x) >= 1 && abs(x) <= 10) .* (0.5*round(x/0.5)) + ...
    (abs(x) < 1     ) .* x + ...
    (abs(x) > 10    ) .* (10*round(x/10));

for i = 1:nRows
    vars = varGroups{i}{1};
    dataAll = [];
    for v = vars
        name = v{1};
        dataAll = [dataAll; tblBCD.(name); tblNN.(name)];
    end
    ymin = min(dataAll);
    ymax = max(dataAll);
    yrange = ymax - ymin;
    if yrange == 0
        yrange = abs(ymax + 1);
    end
    margin = 0.05 * yrange;
    ylow = ymin - margin;
    yhigh = ymax + margin;

    % Redondeo de límites inferior/superior según regla
    if abs(ylow) >= 1 && abs(ylow) <= 10
        ylow = 0.5*floor(ylow/0.5);
    elseif abs(ylow) > 10
        ylow = 10*floor(ylow/10);
    end
    if abs(yhigh) >= 1 && abs(yhigh) <= 10
        yhigh = 0.5*ceil(yhigh/0.5);
    elseif abs(yhigh) > 10
        yhigh = 10*ceil(yhigh/10);
    end

    % Generar ticks intermedios
    nTicks = 5;
    yTicks = linspace(ylow, yhigh, nTicks);

    % Redondear todos los ticks
    for k = 1:nTicks
        if abs(yTicks(k)) >= 1 && abs(yTicks(k)) <= 10
            yTicks(k) = 0.5*round(yTicks(k)/0.5);
        elseif abs(yTicks(k)) > 10
            yTicks(k) = 10*round(yTicks(k)/10);
        end
    end

    minMaxVals(i,:) = [ylow yhigh];
    yTicksVec{i} = yTicks;
end



%% 6) Graficar
for col = 1:nCols
    if col == 1
        tbl = tblBCD;
    else
        tbl = tblNN;
    end
    % Calcular min y max para esta columna y cada fila
    signalMin = zeros(nRows,1);
    signalMax = zeros(nRows,1);
    for row = 1:nRows
        vars = varGroups{row}{1};
        dataAll = [];
        for v = vars
            name = v{1};
            dataAll = [dataAll; tbl.(name)];
        end
        signalMin(row) = min(dataAll);
        signalMax(row) = max(dataAll);
    end

    for row = 1:nRows
        idx = (row-1)*nCols + col;
        ax = nexttile(idx);
        axesHandles(row,col) = ax;
        hold(ax, 'on');

        for v = varGroups{row}{1}
            nm = v{1};
            ls = '-';
            if endsWith(nm, '_ref')
                ls = '--';
            end
            plot(ax, tbl.Time, tbl.(nm), ...
                'LineStyle', ls, ...
                'LineWidth', 5);
        end

        % Líneas mín y máx de la señal real SOLO para esta columna y grupo
        plot(ax, [0 1], [signalMin(row) signalMin(row)], 'r--', 'LineWidth', 2.5);
        plot(ax, [0 1], [signalMax(row) signalMax(row)], 'r--', 'LineWidth', 2.5);

        % Tick/valor rojo para mínimo
        x_tick_pos = 0; % en el extremo izquierdo del eje X
        y_tick_val = signalMin(row);
        text(ax, x_tick_pos, y_tick_val, sprintf('  %.2f', y_tick_val), ...
            'Color', 'r', 'FontWeight', 'bold', ...
            'FontSize', fontSizeAxes*0.75, ...
            'HorizontalAlignment','left', ...
            'VerticalAlignment','bottom', ...
            'Clipping','on');
        % Tick/valor rojo para máximo
        y_tick_val = signalMax(row);
        text(ax, x_tick_pos, y_tick_val, sprintf('  %.2f', y_tick_val), ...
            'Color', 'r', 'FontWeight', 'bold', ...
            'FontSize', fontSizeAxes*0.75, ...
            'HorizontalAlignment','left', ...
            'VerticalAlignment','top', ...
            'Clipping','on');

        hold(ax, 'off');

        % Estética
        grid(ax, 'on');
        ax.GridAlpha = 0.25;
        ax.GridColor = [0 0 0];
        ax.GridLineStyle = '-';
        ax.LineWidth = 1.5;
        ax.FontSize = fontSizeAxes;
        ax.Color = [1 1 1];
        ax.XColor = [0 0 0];
        ax.YColor = [0 0 0];
        ax.Layer = 'top';
        ax.Box = 'on';
        ax.PlotBoxAspectRatio = [aspectX aspectY 1];

        % Límites y ticks
        ax.YLim = minMaxVals(row,:);
        ax.YTick = yTicksVec{row};
        ax.YTickLabel = compose('%.0f', ax.YTick);
        ax.XLim = [0 1];
        ax.XTick = 0:0.2:1;
        ax.XTickLabel = compose('%.1f', ax.XTick);
        if col == 2
            ax.YTickLabel = [];
        end
        if col == 1
            ylabel(ax, yLabels{row}, 'FontSize', fontSizeLabels, 'Color', 'k');
        end
        if row < nRows
            ax.XTickLabel = [];
        end
    end
end

%% 7) Etiquetas Y
offset = -0.08;
ypos_vec = [0.95, 0.9, 0.98];
for row = 1:nRows
    ax = axesHandles(row,1);
    ax.YLabel.Units = 'normalized';
    ax.YLabel.HorizontalAlignment = 'right';
    ax.YLabel.Position = [offset, ypos_vec(row), 0];
    ax.Clipping = 'off';
end

%% 8) Etiquetas globales y subfiguras
xlabel(t, 'Time (s)', 'FontSize', 15, 'Color', 'k', 'FontWeight', 'bold');
annotation('textbox',[0.18 0.01 0.1 0.03], ...
           'String','(a)', ...
           'FontSize', fontSizeLabels, ...
           'Color','k', ...
           'HorizontalAlignment','center', ...
           'EdgeColor','none');
annotation('textbox',[0.68 0.01 0.1 0.03], ...
           'String','(b)', ...
           'FontSize', fontSizeLabels, ...
           'Color','k', ...
           'HorizontalAlignment','center', ...
           'EdgeColor','none');

%% 9) Exportar
print(fig, 'TestBench/Data/DigestSpec2025/summary_comparison.pdf', '-dpdf', '-r300');
fprintf('✅ PDF saved with adaptive Y limits and tidy grid.\n');

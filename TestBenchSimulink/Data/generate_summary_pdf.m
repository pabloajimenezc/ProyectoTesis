clear all
% File: generate_summary_pdf.m
% Reads summaryBCD.csv and summaryNN.csv, plots 6×2 panels with
% MATLAB default line colors, dashed lines for *_ref series,
% black axes/ticks, white background, data curves with thickness 5,
% aligns all Y-axis labels, adds a single centered X-label "Time (s)"
% and subfigure tags "(a)" and "(b)" below the panels,
% then exports as summary_comparison.pdf.

%% 1) Load data
tblBCD = readtable('summaryBCD.csv');
tblNN  = readtable('summaryNN.csv');

%% 2) Define variable groups and labels
varGroups = { ...
  {{'wy'}}, ...
  {{'iu','iu_ref'}}, ...
  {{'ia','ib','ic','ia_ref','ib_ref','ic_ref'}}, ...
  {{'vc_ua','vc_ub','vc_uc','vc_la','vc_lb','vc_lc'}}, ...
  {{'ie1','ie2','ie1_ref','ie2_ref'}}, ...
  {{'vo'}} ...
};

yLabels = { ...
  'Output Frequency (rad/s)', ...
  'Input Current (A)', ...
  'Output Currents (A)', ...
  'Cluster Voltages (V)', ...
  'Circulating Currents (A)', ...
  'Common-Mode Voltage (V)' ...
};

%% 3) Create figure and tiled layout
fig = figure('Units','normalized','Position',[0.1 0.1 0.8 0.9], ...
             'Color',[1 1 1]);

% ————————————————
% Aumentar la altura de la figura en un 10 %
fig.Units = 'normalized';
posFig    = fig.Position;
posFig(4) = posFig(4)*1.20;    % multiplica la altura por 1.10
fig.Position = posFig;
% ————————————————

t = tiledlayout(6,2, ...
    'TileSpacing','compact', ...
    'Padding','loose');

% Preallocate handles for later alignment
axesHandles = gobjects(6,2);

%% 4) Plot each subplot
for col = 1:2
    tbl = tblBCD;
    if col==2, tbl = tblNN; end
    
    for row = 1:6
        idx = (row-1)*2 + col;
        ax = nexttile(idx);
        axesHandles(row,col) = ax;
        hold(ax,'on');
        
      % Plot each series
        for v = varGroups{row}{1}
            nm = v{1};
            % elige el estilo de línea según si es _ref
            if endsWith(nm, '_ref')
                ls = '--';
            else
                ls = '-';
            end
            plot(ax, tbl.Time, tbl.(nm), ...
                 'LineStyle', ls, ...
                 'LineWidth', 5);
        end
        
        hold(ax,'off');
        grid(ax,'on');
        ax.FontSize = 20;
        
        % White background, black axes/ticks
        ax.Color     = [1 1 1];
        ax.XColor    = [0 0 0];
        ax.YColor    = [0 0 0];
        ax.LineWidth = 0.5;
        
        % Left column: y-label; right column: none
        if col==1
            ylabel(ax, yLabels{row}, 'FontSize',25, 'Color','k');
        else
            ax.YLabel.String = '';
        end
        
        % Hide X tick labels on all but bottom row
        if row<6
            ax.XTickLabel = [];
        end
    end
end

%% 5) Alinear y subir un poco las Y‐labels de la columna izquierda
offset = -0.06;    % deja igual u ajusta horizontalmente
ypos_vec = [0.95, 0.8, 0.9, 0.9, 0.95, 1];
for row = 1:6
    ax = axesHandles(row,1);
    ax.YLabel.Units               = 'normalized';
    ax.YLabel.HorizontalAlignment = 'right';
    ax.YLabel.Position = [offset, ypos_vec(row), 0];
    ax.Clipping = 'off';
end

%% 6) Add central X-label and subfigure tags
xlabel(t, 'Time (s)', 'FontSize',25, 'Color','k', 'FontWeight','bold');

% "(a)" under left column
annotation('textbox',[0.18 0.00 0.1 0.03], ...
           'String','(a)', ...
           'FontSize',25, ...
           'Color','k', ...
           'HorizontalAlignment','center', ...
           'EdgeColor','none');
% "(b)" under right column
annotation('textbox',[0.68 0.00 0.1 0.03], ...
           'String','(b)', ...
           'FontSize',25, ...
           'Color','k', ...
           'HorizontalAlignment','center', ...
           'EdgeColor','none');

%% 7) Export to PDF
set(fig,'PaperPositionMode','auto');
print(fig, 'TestBench/Data/summary_comparison.pdf', '-dpdf', '-r300');
fprintf('PDF saved as summary_comparison.pdf\n');

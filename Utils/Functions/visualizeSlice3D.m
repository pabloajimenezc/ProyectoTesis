function visualizeSlice3D(A, b, dimFree)
% VISUALIZESLICE3D  Interactivo: slice 3D de {x: A*x <= b} fijando x(dimFree)=c
%
%   visualizeSlice3D(A, b, dimFree) crea una interfaz con slider para
%   explorar el slice
%     { x ∈ R^n : A*x ≤ b, x(dimFree) = c }
%   proyectado en las otras tres coordenadas.
%
%   Inputs:
%     A        m×n matriz de desigualdades
%     b        m×1 vector de términos independientes
%     dimFree  índice de la dimensión a fijar (1 ≤ dimFree ≤ n)
%
%   Ejemplo:
%     Ac = [N; -N];
%     bc = [is_max-iB; is_max+iB];
%     visualizeSlice3D(Ac, bc, 4);

    tol = 1e-8;
    [m, n] = size(A);
    assert(n >= 4, 'La función espera dimensión n ≥ 4 para hacer slice 3D.');
    assert(dimFree>=1 && dimFree<=n, 'dimFree fuera de rango.');

    % Pre-cálculo de rango de c según vértices completos
    Vall = enumerateVertices(A, b);
    cmin = min(Vall(dimFree,:));
    cmax = max(Vall(dimFree,:));

    % Crear figura y ejes
    hFig = figure('Name','Slice 3D Interactivo','NumberTitle','off');
    hAx  = axes('Parent',hFig, 'Position',[0.1 0.3 0.85 0.65]);
    view(3); grid on; axis(hAx,'equal','tight');
    dims = setdiff(1:n, dimFree);
    xlabel(hAx, sprintf('x_{%d}', dims(1)));
    ylabel(hAx, sprintf('x_{%d}', dims(2)));
    zlabel(hAx, sprintf('x_{%d}', dims(3)));

    % Slider
    hSld = uicontrol( ...
        'Parent',hFig, ...
        'Style','slider', ...
        'Units','normalized', ...
        'Position',[0.1 0.1 0.75 0.05], ...
        'Min',cmin, 'Max',cmax, 'Value',(cmin+cmax)/2, ...
        'Callback',@updatePlot );
    % Label del slider
    hTxt = uicontrol( ...
        'Parent',hFig, ...
        'Style','text', ...
        'Units','normalized', ...
        'Position',[0.1 0.16 0.75 0.03], ...
        'HorizontalAlignment','center', ...
        'String',sprintf('Slice: x_{%d} = %.3f', dimFree, (cmin+cmax)/2) );

    % Dibujo inicial
    updatePlot();

    function updatePlot(~,~)
        c = get(hSld,'Value');
        set(hTxt,'String',sprintf('Slice: x_{%d} = %.3f', dimFree, c));

        % Construir H-rep del slice
        A_sl = [ A; zeros(2,n) ];
        b_sl = [ b; c; -c ];
        A_sl(m+1,dimFree) =  1;
        A_sl(m+2,dimFree) = -1;

        % Enumerar vértices y proyectar
        Vfull = enumerateVertices(A_sl, b_sl);  % n×Nv
        V3    = Vfull(dims, :)';                % Nv×3

        % Envolvente convexa y dibujo
        if isempty(V3)
            cla(hAx);
            title(hAx,'No hay vértices factibles');
            return;
        end
        K = convhulln(V3);
        cla(hAx);
        trisurf(K, V3(:,1), V3(:,2), V3(:,3), ...
                'Parent',hAx, 'FaceColor','cyan', ...
                'FaceAlpha',0.4, 'EdgeColor','k');
        title(hAx,sprintf('Slice x_{%d}=%.3f', dimFree, c));
        drawnow;
    end
end

%% ------------------------------------------------------------------------
function V = enumerateVertices(A, b)
% ENUMERATEVERTICES  Enumerate all extreme points of {x: A*x <= b}
    tol = 1e-8;
    [m, n] = size(A);
    V = [];
    combos = nchoosek(1:m, n);
    for k = 1:size(combos,1)
        idx = combos(k,:);
        Aeq = A(idx, :);  beq = b(idx);
        if rank(Aeq, tol) == n
            x = Aeq \ beq;
            if all(A*x <= b + tol)
                V(:,end+1) = x; %#ok<AGROW>
            end
        end
    end
    V = unique(round(V.',10),'rows').';
end
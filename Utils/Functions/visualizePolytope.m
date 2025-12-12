function visualizePolytope(A, b, dimFree)
% VISUALIZEPOLYTOPE  Visualize 2D polytope or interactive 3D slice of 4D polytope
%
%   visualizePolytope(A, b) automatically visualizes:
%     - in 2D: the full polytope
%     - in 4D: slice with x(dimFree)=c using a slider
%   visualizePolytope(A, b, dimFree) is required when n == 4

    tol = 1e-8;
    [m, n] = size(A);

    % Enumerate vertices
    V = enumerateVertices(A, b);
    if isempty(V)
        error('No feasible vertices found.');
    end

    if ~(n == 2 || n == 4)
        error('Only dimensions 2 and 4 are supported.');
    elseif n == 2
        figure('Name','2D Polytope','NumberTitle','off');
        kidx = convhull(V(1,:), V(2,:));
        fill(V(1,kidx), V(2,kidx), 'cyan', 'FaceAlpha', 0.4);
        axis equal tight;
        xlabel('x_1'); ylabel('x_2');
        title('2D Polytope');

    elseif n == 4
        if nargin < 3
            error('For n >= 4 you must specify dimFree.');
        end
        assert(dimFree>=1 && dimFree<=n, 'dimFree out of range.');

        % Precompute slice range
        cmin = min(V(dimFree,:));
        cmax = max(V(dimFree,:));

        % Create figure and axes
        hFig = figure('Name','Interactive 3D Slice','NumberTitle','off');
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
        % Slider label
        hTxt = uicontrol( ...
            'Parent',hFig, ...
            'Style','text', ...
            'Units','normalized', ...
            'Position',[0.1 0.16 0.75 0.03], ...
            'HorizontalAlignment','center', ...
            'String',sprintf('Slice: x_{%d} = %.3f', dimFree, (cmin+cmax)/2) );

        % Initial plot
        updatePlot();
    end

        function updatePlot(~,~)
            c = get(hSld,'Value');
            set(hTxt,'String',sprintf('Slice: x_{%d} = %.3f', dimFree, c));

            % Build slice H-rep
            A_sl = [ A; zeros(2,n) ];
            b_sl = [ b; c; -c ];
            A_sl(m+1,dimFree) =  1;
            A_sl(m+2,dimFree) = -1;

            % Enumerate and project
            Vfull = enumerateVertices(A_sl, b_sl);  % n×Nv
            V3    = Vfull(dims, :)';                % Nv×3

            % Draw
            if isempty(V3)
                cla(hAx);
                title(hAx,'No feasible vertices');
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
    try
        combos = nchoosek(1:m, n);
    catch
        warning('Too many combinations to enumerate.');
        return;
    end
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
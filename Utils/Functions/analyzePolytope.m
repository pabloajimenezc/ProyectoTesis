function props = analyzePolytope(A, b)
% ANALYZEPOLYTOPE Compute key properties of polytope {x: A*x <= b}
%   More robust version with feasibility check and scalability safeguards.

% Tolerance for numerical checks
tol = 1e-8;
[nI, n] = size(A);
props = struct();

%% 0) Check feasibility using linprog
opts = optimoptions('linprog','Display','off');
[x0, ~, exitflag] = linprog(zeros(n,1), A, b, [], [], [], [], opts);
if exitflag ~= 1
    warning('Infeasible or ill-posed polytope. Returning empty props.');
    props.valid = false;
    return;
else
    props.valid = true;
end

%% 1) Dimension
props.dim = rank(A, tol);

%% 2) Vertex enumeration via intersection of hyperplanes
maxComb = 1e5;
V = [];
enumerateVertices = true;
try
    combos = nchoosek(1:nI, n);
    if size(combos,1) > maxComb
        warning('Too many vertex candidates. Skipping vertex enumeration.');
        enumerateVertices = false;
    end
catch
    warning('Too many constraints to enumerate combinations.');
    enumerateVertices = false;
end

if enumerateVertices
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
    % Remove duplicates
    V = unique(round(V.',10),'rows').';
    props.vertices    = V;
    props.numVertices = size(V,2);
else
    props.vertices    = [];
    props.numVertices = 0;
end

%% 3) Redundant inequality filter (approximate H-minimal form)
keep = false(nI,1);
if isfield(props, 'vertices') && ~isempty(props.vertices)
    for i = 1:nI
        if any(abs(A(i,:)*props.vertices - b(i)) < tol)
            keep(i) = true;
        end
    end
else
    keep(:) = true; % Can't filter without vertices
end
props.numFacets = sum(keep);
props.Amin      = A(keep,:);
props.bmin      = b(keep);

%% 4) Boundedness and volume/area estimation
if isfield(props, 'vertices') && ~isempty(props.vertices)
    try
        if n == 2
            kidx = convhull(props.vertices(1,:), props.vertices(2,:));
            props.volume = polyarea(props.vertices(1,kidx), props.vertices(2,kidx));
            props.isBounded = true;
        elseif n == 3
            [~, props.volume] = convhulln(props.vertices.');
            props.isBounded = true;
        else
            props.volume = NaN;
            props.isBounded = true;
        end
    catch
        props.volume = NaN;
        props.isBounded = false;
    end
else
    props.volume = NaN;
    props.isBounded = false;
end

%% 5) Edges
if isfield(props, 'vertices') && ~isempty(props.vertices)
    try
        [K, ~] = convhulln(props.vertices.');
        edges = [];
        for f = 1:size(K,1)
            P = nchoosek(K(f,:), 2);
            edges = [edges; P]; %#ok<AGROW>
        end
        props.edges = unique(sort(edges,2),'rows');
    catch
        props.edges = [];
    end
else
    props.edges = [];
end

%% 6) Centroid
if isfield(props, 'vertices') && ~isempty(props.vertices)
    props.centroid = mean(props.vertices, 2);
else
    props.centroid = NaN(n,1);
end

%% 7) Chebyshev center and inradius
if props.numFacets > 0
    Ain = props.Amin;
    bin = props.bmin;
    norms = sqrt(sum(Ain.^2,2));
    A_lp = [Ain, norms];
    f_lp = [zeros(n,1); -1];
    sol = linprog(f_lp, A_lp, bin, [], [], [], [], opts);
    if ~isempty(sol)
        props.chebyCenter = sol(1:n);
        props.inradius = sol(n+1);
    else
        props.chebyCenter = NaN(n,1);
        props.inradius = NaN;
    end
else
    props.chebyCenter = NaN(n,1);
    props.inradius = NaN;
end

%% 8) Diameter
if isfield(props, 'vertices') && ~isempty(props.vertices)
    D = pdist2(props.vertices.', props.vertices.');
    props.diameter = max(D(:));
else
    props.diameter = NaN;
end

%% 9) Print report
fprintf('\n=== Polytope Properties ===\n');
fprintf('Affine dimension     : %d\n', props.dim);
fprintf('Bounded              : %s\n', tern(props.isBounded,'Yes','No'));
fprintf('Number of facets     : %d\n', props.numFacets);
fprintf('Number of vertices   : %d\n', props.numVertices);
fprintf('Number of edges      : %d\n', size(props.edges,1));
if ~isnan(props.volume)
    if n==2
        fprintf('Area                 : %.4g\n', props.volume);
    elseif n==3
        fprintf('Volume               : %.4g\n', props.volume);
    end
else
    fprintf('Volume/Area          : N/A for dimension >3\n');
end
fprintf('Centroid             : ['); fprintf(' %.4g', props.centroid); fprintf(' ]\n');
fprintf('Chebyshev center     : ['); fprintf(' %.4g', props.chebyCenter); fprintf(' ]\n');
fprintf('Inradius             : %.4g\n', props.inradius);
fprintf('Diameter             : %.4g\n', props.diameter);
fprintf('==============================\n\n');
end

function s = tern(cond, trueStr, falseStr)
% TERN Conditional string formatter
    if cond, s = trueStr; else s = falseStr; end
end

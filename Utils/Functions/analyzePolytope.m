function props = analyzePolytope(A, b)
% ANALYZEPOLYTOPE Compute key properties of polytope {x: A*x <= b}
%   props = analyzePolytope(A, b) returns a struct with fields:
%     dim           - affine dimension
%     isBounded     - true if bounded
%     numFacets     - number of non-redundant inequalities
%     Amin, bmin    - H-minimal representation A_min*x <= b_min
%     vertices      - n×Nv matrix of extreme points
%     numVertices   - Nv
%     edges         - E×2 list of vertex‐index pairs
%     volume        - volume (n>=3) or area (n==2) (NaN if n>3)
%     centroid      - n×1 centroid of vertices
%     chebyCenter   - n×1 center of inscribed ball
%     inradius      - radius of inscribed ball
%     diameter      - maximum pairwise vertex distance

tol = 1e-8;
[nI, n] = size(A);

%% 1) Dimensión
props.dim = rank(A, tol);

%% 2) Enumerar vértices
combos = nchoosek(1:nI, n);
V = [];
for k = 1:size(combos,1)
    idx = combos(k,:);
    Aeq = A(idx, :);  beq = b(idx);
    if rank(Aeq, tol) == n
        x = Aeq \ beq;
        if all(A*x <= b + tol)
            V(:,end+1) = x;  %#ok<AGROW>
        end
    end
end
% Quitar duplicados
V = unique(round(V.',10),'rows').';
props.vertices    = V;
props.numVertices = size(V,2);

%% 3) Filtrar desigualdades redundantes (H-minimal)
keep = false(nI,1);
for i = 1:nI
    if any(abs(A(i,:)*V - b(i)) < tol)
        keep(i) = true;
    end
end
props.numFacets = sum(keep);
props.Amin      = A(keep,:);
props.bmin      = b(keep);

%% 4) Boundedness & Volume/Área
try
    if n == 2
        kidx = convhull(V(1,:), V(2,:));
        props.volume   = polyarea(V(1,kidx), V(2,kidx));
        props.isBounded = true;
    elseif n == 3
        [~, props.volume] = convhulln(V.');
        props.isBounded   = true;
    else
        props.volume     = NaN;
        props.isBounded  = true;
    end
catch
    props.volume    = NaN;
    props.isBounded = false;
end

%% 5) Aristas (n-D)
[K, ~] = convhulln(V.');
edges = [];
for f = 1:size(K,1)
    vs = K(f,:);
    P  = nchoosek(vs,2);
    edges = [edges; P]; %#ok<AGROW>
end
props.edges = unique(sort(edges,2),'rows');

%% 6) Centroide
props.centroid = mean(V, 2);

%% 7) Chebyshev center & inradius
% Solve: max r s.t. A_min * c + ||a_i||*r <= b_min
Ain = props.Amin;
bin = props.bmin;
[m, ~] = size(Ain);
norms = sqrt(sum(Ain.^2,2));
A_lp = [Ain, norms];
f_lp = [zeros(n,1); -1];   % minimize -r => maximize r
opts = optimoptions('linprog','Display','off');
sol = linprog(f_lp, A_lp, bin, [], [], [], [], opts);
props.chebyCenter = sol(1:n);
props.inradius    = sol(n+1);

%% 8) Diameter (max pairwise distance)
D = pdist2(V.', V.');
props.diameter = max(D(:));

%% 9) Mostrar reporte
fprintf('\n=== Polytope Properties ===\n');
fprintf('Dimensión afín   : %d\n', props.dim);
fprintf('Acotado          : %s\n', tern(props.isBounded,'Sí','No'));
fprintf('Número de facetas: %d\n', props.numFacets);
fprintf('Número de vértices: %d\n', props.numVertices);
fprintf('Número de aristas : %d\n', size(props.edges,1));
if ~isnan(props.volume)
    if n==2
        fprintf('Área             : %.4g\n', props.volume);
    elseif n==3
        fprintf('Volumen          : %.4g\n', props.volume);
    end
else
    fprintf('Volumen/Área     : N/A para dimensión >3\n');
end
fprintf('Centroide        : ['); fprintf(' %.4g', props.centroid); fprintf(' ]\n');
fprintf('ChebyCenter      : ['); fprintf(' %.4g', props.chebyCenter); fprintf(' ]\n');
fprintf('Inradius         : %.4g\n', props.inradius);
fprintf('Diámetro         : %.4g\n', props.diameter);
fprintf('==============================\n\n');

end

function s = tern(cond, trueStr, falseStr)
% TERN Conditional string formatter
    if cond, s = trueStr; else s = falseStr; end
end

classdef ClassProjector
    % ClassProjector: Project neural network output to affine set

    properties
        Ac      % Polytope matrix
        MaxIter % Number of maximum iterations
        lambda  % Relaxation factor
        n2      % Squared norm of Ac rows
        Method  % Projection method
        Tol     % Constraint violation tolerance
        Nc      % Number of constraints
        Nx      % Number of input variables
        Ix      % Identity matrix of size Nx
        SolverOpts % Quadratic programming solver options
    end

    methods
        function obj = ClassProjector(specs)
            % ClassProjector: Construct an instance of this class

            obj.Ac      = specs.Ac;
            obj.MaxIter = specs.MaxIter;
            obj.lambda  = specs.lambda;
            obj.n2      = sum(obj.Ac.^2, 2);
            obj.Method  = specs.Method;
            obj.Tol     = specs.Tol;
            obj.Nc      = size(obj.Ac, 1);
            obj.Nx      = specs.Nx;
            obj.Ix      = eye(obj.Nx);
            obj.SolverOpts = mpcActiveSetOptions;
            obj.SolverOpts.MaxIterations = obj.MaxIter;
            obj.SolverOpts.ConstraintTolerance = obj.Tol;
        end

        function [x_proj, time, k] = project(obj, x, bc)
            % project: Project input variable x to feasible set defined by Ac*x <= bc

            tic

            % Initialize projection
            x_proj = x;
            k = 0;

            % Max constraint violation
            error = max(obj.Ac * x_proj - bc);

            if error > obj.Tol

                switch obj.Method

                    case 'solver-qp' % Quadratic programming solver
                        [x_proj, exitflag, ~, ~] = mpcActiveSetSolver(obj.Ix, -x_proj, obj.Ac, bc, zeros(0, obj.Nx), zeros(0, 1), false(obj.Nc, 1), obj.SolverOpts);
                        k = exitflag;

                    case 'cimmino-original' % Cimmino original
                        for k = 1:obj.MaxIter
                            R = obj.Ac * x_proj - bc;
                            V = max(R, 0) ./ obj.n2;
                            d = (obj.Ac' * V) / obj.Nc;
                            x_proj = x_proj - obj.lambda * d;
                            
                            % Max constraint violation
                            error = max(obj.Ac * x_proj - bc);
                            if error < obj.Tol, break; end
                        end
    
                    case 'cimmino-greedy' % Cimmino greedy
                        for k = 1:obj.MaxIter
                            R = obj.Ac * x_proj - bc;
                            V = max(R, 0);
                            [~, idx_max] = max(V);
                            ai    = obj.Ac(idx_max, :)';
                            ri    = ai' * x_proj - bc(idx_max);
                            x_proj = x_proj - obj.lambda * (ri / obj.n2(idx_max)) * ai;

                            % Max constraint violation
                            error = max(obj.Ac * x_proj - bc);
                            if error < obj.Tol, break; end
                        end

                    case 'dykstra'
                        p = zeros(size(obj.Ac));
                        for k = 1:obj.MaxIter
                            for i = 1:obj.Nc
                                ai      = obj.Ac(i, :)';
                                bi      = bc(i);
                                aux     = x_proj + p(i, :)';
                                ri      = ai' * aux - bi;
                                delta   = obj.lambda * (ri / obj.n2(i)) * ai * (ri > 0);
                                x_proj  = aux - delta;
                                p(i, :) = delta';
                            end

                            % Max constraint violation
                            error = max(obj.Ac * x_proj - bc);
                            if error < obj.Tol, break; end
                        end

                    case 'douglas-rachford'
                        for k = 1:obj.MaxIter
                            x_proj_prev = x_proj;
                            for i = 1:obj.Nc
                                ai      = obj.Ac(i, :)';
                                bi      = bc(i);
                                ri      = ai' * x_proj - bi;
                                p       = x_proj - (ri / obj.n2(i)) * ai * (ri > 0);
                                r       = 2 * p - x_proj;
                                x_proj = x_proj + obj.lambda * (r - x_proj);
                            end
                            x_proj = 0.5 * (x_proj + x_proj_prev);

                            % Max constraint violation
                            error = max(obj.Ac * x_proj - bc);
                            if error < obj.Tol, break; end
                        end

                    case 'peaceman-rachford'
                        for k = 1:obj.MaxIter
                            for i = 1:obj.Nc
                                ai     = obj.Ac(i, :)';
                                bi     = bc(i);
                                ri     = ai' * x_proj - bi;
                                p      = x_proj - (ri / obj.n2(i)) * ai * (ri > 0);
                                r      = 2 * p - x_proj;
                                x_proj = x_proj + obj.lambda * (r - x_proj);
                            end
                    
                            % Max constraint violation
                            error = max(obj.Ac * x_proj - bc);
                            if error < obj.Tol, break; end
                        end

                    case 'scalar-clipping'
                        Ac_x = obj.Ac * x_proj;
                        alpha_i = inf(size(Ac_x));
                        pos = Ac_x > 0;            
                        alpha_i(pos) = bc(pos) ./ Ac_x(pos);
                        alpha = min(1, min(alpha_i));
                        x_proj = alpha * x_proj;
                        k = 1;
                end
            end

            time = toc;
        end
    end
end
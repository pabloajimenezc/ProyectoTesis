classdef ClassIOGrid
    % ClassIOGrid: Exteral input/output infinite grids
    %   Two three-phase symmetrical voltage sources (x and y)
    
    properties % Constants
        Ti  % Integration step
        Ax  % Input grid voltage amplitude
        Ay  % Output grid voltage amplitude
        fx  % Input grid voltage frequency
        fy  % Output grid voltage frequency
        wx  % Input grid voltage angular frequency
        wy  % Output grid voltage angular frequency
    end

    properties % Variables
        gx  % Input grid voltage angle
        gy  % Output grid voltage angle
        vxy % Input/output voltage vector
    end
    
    methods
        function obj = ClassIOGrid(specs, init_vals)
            % ClassIOGrid: Construct an instance of this class

            % Constants
            obj.Ti = specs.Ti;
            obj.Ax = specs.Ax;
            obj.Ay = specs.Ay;
            obj.fx = specs.fx;
            obj.fy = specs.fy;
            obj.wx = 2*pi*obj.fx;
            obj.wy = 2*pi*obj.fy;

            % Variables
            obj = obj.reset(init_vals);
        end
        
        function obj = step(obj)
            % step: Perform one step of numerical integration
            
            obj.gx = mod(obj.gx + obj.Ti * obj.wx, 2*pi); % Integrate and map to [0, 2*pi]
            obj.gy = mod(obj.gy + obj.Ti * obj.wy, 2*pi); % Integrate and map to [0, 2*pi]
            vxa = obj.Ax * cos(obj.gx);
            vxb = obj.Ax * cos(obj.gx - 2*pi/3);
            vxc = obj.Ax * cos(obj.gx + 2*pi/3);
            vyr = obj.Ay * cos(obj.gy);
            vys = obj.Ay * cos(obj.gy - 2*pi/3);
            vyt = obj.Ay * cos(obj.gy + 2*pi/3);
            obj.vxy = [vxa; vxb; vxc; vyr; vys; vyt];
        end

        function obj = reset(obj, init_vals)
            % reset: Reset system variables

            obj.gx = init_vals.gx0;
            obj.gy = init_vals.gy0;
            vxa = obj.Ax * cos(obj.gx);
            vxb = obj.Ax * cos(obj.gx - 2*pi/3);
            vxc = obj.Ax * cos(obj.gx + 2*pi/3);
            vyr = obj.Ay * cos(obj.gy);
            vys = obj.Ay * cos(obj.gy - 2*pi/3);
            vyt = obj.Ay * cos(obj.gy + 2*pi/3);
            obj.vxy = [vxa; vxb; vxc; vyr; vys; vyt];
        end
    end
end


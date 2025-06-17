classdef ClassGrid
    % ClassGrid: Exteral input/output infinite grid
    %   External voltage sources for MMCC topologies
    %   M3C: 3-ph AC in, 3-ph AC out
    %   M2C: 2-ph DC in, 3-ph AC out
    %   If GridType is 'in', output voltage is 0
    
    properties % Constants
        Ti        % Integration step
        Topology  % MMCC topology
        GridType  % 'in', 'in/out'
        init_vals % Initial values
    end

    properties % Variables
        Ax % Input grid voltage amplitude
        wx % Input grid voltage angular frequency
        gx % Input grid voltage angle
        vx % Input voltage vector
        Ay % Output grid voltage amplitude
        wy % Output grid voltage angular frequency
        gy % Output grid voltage angle
        vy % Output voltage vector
        vxy % External voltage vector
    end
    
    methods
        function obj = ClassGrid(specs, init_vals)
            % ClassGrid: Construct an instance of this class

            obj.init_vals = init_vals;
            
            % Constants
            obj.Ti       = specs.Ti;
            obj.Topology = specs.Topology;
            obj.GridType = specs.GridType;

            % Variables
            obj = obj.reset();
        end
        
        function obj = step(obj)
            % step: Perform one step of numerical integration
            
            % Careful: w and A can be changed between step function calls

            if strcmp(obj.Topology, 'M3C')
                obj.gx = mod(obj.gx + obj.Ti * obj.wx, 2*pi); % Integrate and map to [0, 2*pi]
                obj.vx = obj.Ax * cos(obj.gx + [0; -2*pi/3; 2*pi/3]);
            elseif strcmp(obj.Topology, 'M2C')
                obj.vx = obj.Ax * [1; -1];
            end

        end

        function obj = reset(obj)
            % reset: Reset system variables

            % If topology is M2C, input frequency is 0
            if strcmp(obj.Topology, 'M2C')
                obj.init_vals.wx0 = 0;
                obj.init_vals.gx0 = 0;
            end

            % If the voltage source is only for the input port, output voltage is 0
            % Probably is provided by an output electrical load
            if strcmp(obj.GridType, 'in')
                obj.init_vals.Ay0 = 0;
                obj.init_vals.wy0 = 0;
                obj.init_vals.gy0 = 0;
            end

            obj.Ax = obj.init_vals.Ax0;
            obj.wx = obj.init_vals.wx0;
            obj.gx = obj.init_vals.gx0;
            obj.Ay = obj.init_vals.Ay0;
            obj.wy = obj.init_vals.wy0;
            obj.gy = obj.init_vals.gy0;

            if strcmp(obj.Topology, 'M3C')
                obj.vx = obj.Ax * cos(obj.gx + [0; -2*pi/3; 2*pi/3]);
            elseif strcmp(obj.Topology, 'M2C')
                obj.vx = obj.Ax * [1; -1];
            end
            
            obj.vy = obj.Ay * cos(obj.gy + [0; -2*pi/3; 2*pi/3]);
        end
    end
end


function y = nops(x, operation)

% nops: Perform operations preserving sign of variables
%   Supports square root ('sqrt') and raise to the power of 2 ('pow2')

if strcmp(operation, 'sqrt')
    y = sqrt(abs(x)) .* sign(x);
elseif strcmp(operation, 'pow2')
    y = abs(x).^2 .* sign(x);
else
    error('Unsupported operation: %s', operation);
end

end
function [z,p,k] = ZPK(G)
%Entra función de transferencia
% Devuelve polos, ceros y ganancia
[num,den]=tfdata(G,'v');
[~,den]=p_elcero(den);
[~,num]=p_elcero(num);
k=num(1)/den(1);
d=den/den(1);
n=num/num(1);
p=transpose(roots(d));
z=transpose(roots(n));
end
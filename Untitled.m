z1 = @(x,y) sqrt(x.^2 + y.^2 - 1); 
z2 = @(x,y) sqrt(x.^2 + 2*y.^2 - 5); 
fsurf(z1)


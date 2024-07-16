%cau1
clear all
clc
syms x y z a b c

f = (a*x + b*y + c*z)*asin(x*y*z)
%Dao ham rieng cap 1
disp('Dao ham rieng cap 1')
zx = diff(f,x)
zy = diff(f,y)
zz = diff(f,z)
% Dao ham rieng cap 2
disp('Dao ham rieng cap 2')
zxx = diff(zx,x)
zxy = diff(zx,y)
zxz = diff(zx,z)
zyy = diff(zy,y)
zyz = diff(zy,z)
zzz = diff(zz,z)

%cau2
% a
clear all
clc
syms x y
f= x*sin(x+y);
simplify(int(int(f,y,0,pi/3),x,0,pi/6))
% b
clear all
clc
syms x y
f = x^2 + 2*y
int(int(f,y,x^3,x),x,0,1)
%c
clear all
clc
syms t
f = exp(t) 
int(f,t,1,4)
%d
% tham so hoa x=t, y = 1+t^2
syms t
f = (2*t^3 + 3*t)/sqrt(1+3*t^2+t^3)
simplify(int(f,t,-1,1))

% Cau 03
clear all
clc
syms x y
s = 0;
f(x,y) = x*exp(-x*y);
delx = (20-0)/200;
dely = (10-0)/200;
for i = 0:199
    for j = 0:199
        u = (i + 0.5)*delx ;
        v = (j + 0.5)*dely ;
        f_value = u*exp(-u*v)
        s = s + f_value*delx*dely
    end
end
disp(s)



%Cau 4
% a
f = dsolve ('Dy + y = 1','y(0) = 1')
fplot(dsolve('Dy+y=1','y(0)=1'),'k--');
% b
dsolve ('(x^2+1)*Dy + 3*x*(y-1) = 0','y(0) = 2','x')
dsolve('(x^2+1)*Dy + 3*x*(y-1) = 0','y(0) = 2','x')
% c
dsolve ('D2y - 4*y = exp(x)*cos(x) + x^3','y(0) = 1','Dy(0) = 2','x')
fplot(dsolve ('D2y - 4*y = exp(x)*cos(x) + x^3','y(0) = 1','Dy(0) = 2','x'),'r--');


%Cau 5
syms x y
a = -10:1:10
b = -10:1:20

[X,Y] = meshgrid(a,b)
Z = 6*exp(-3*X.^2 - Y.^2) + X./2 + Y
mesh(X,Y,Z)

%Cau 6
clear all
clc
syms x y
% f(x, y) = x.*y - (x.^3)/3;
[x,y] = meshgrid(-5:.5:5, -5:.5:5);
% P = subs(diff(f, x), {x y}, {X Y});
% Q = subs(diff(f, y), {x y}, {X Y});
% quiver3(X, Y , P , Q);
fx = y - 3*x^2
fy = x
quiver(x,y,fx,fy)

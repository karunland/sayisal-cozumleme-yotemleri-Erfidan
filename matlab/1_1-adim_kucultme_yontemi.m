clc

f=inline('x^3-2*x^2-5','x');
x1=0;
h=1;
epsilon=0.000001;
a=2;
i=0;
while(h>epsilon)
    i=i+1;
    if(f(x1)*f(x1+h)>0)
        x1=x1+h;
    else
        h=h/a;
    end
    fprintf('i=%d. iterasyondaki ;aralik: %.6f\n',i,x1);
end


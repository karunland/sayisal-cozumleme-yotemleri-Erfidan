clc
f = inline('x^3-2*x^2-5','x');
x1 = 0;
x2 = 5;
epsilon = 0.000001;
i = 0;
while(abs(x2-x1) > epsilon)
    i = i+1;
    x3 = (x1+x2)/2;
    if(f(x1)*f(x3)>0)
        x1 = x3;
    else
        x2 = x3;
    end
     fprintf('i=%d. iterasyondaki ;aralik: %.6f ; %.6f\n', i, x1, x2);   
end
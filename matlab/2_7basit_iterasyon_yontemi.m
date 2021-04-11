clc 

f = inline('x^3-2*x-20','x');
x0 = 2;
i = 0;
epsilon = 0.000001;
while (abs(f(x0)) > epsilon)
    i = i+1;
    x0=f(x0);
    
    if i<100
        fprintf('i=%d. iterasyondaki ;aralik: %.6f\n', i, x0);
    end
end

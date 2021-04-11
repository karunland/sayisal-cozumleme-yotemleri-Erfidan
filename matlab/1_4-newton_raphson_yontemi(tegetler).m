f=inline('x^4','x');
x0 = 1;
epsilon = 0.000001;
h = 0.5;
i = 0;
while(abs(f(x0)) > epsilon)
    i = i + 1;
    result = (f(x0+h)-f(x0))/h;
    x0 = x0-(f(x0)/result);
    fprintf('i=%d. iterasyondaki ;aralik: %.6f ;\n', i, x0);
end
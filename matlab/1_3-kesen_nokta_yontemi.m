f=inline('(0.8/x)-0.5','x');
x1=1;
x2=4;
epsilon=0.000001;
i=0;
while(abs(x2-x1)>epsilon)
    i=i+1;
    x3=(((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1)));
    if(f(x1)*f(x3)>0)
        x1=x3;
    else
        x2=x3;
    end
    if i<100
        fprintf('i=%d. iterasyondaki ;aralik: %.6f ; %.6f  :%.6f \n',i,x1,x2,x3);   
    end
end
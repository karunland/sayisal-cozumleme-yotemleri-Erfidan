#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
double func(double number);
double func2(double number);
double func3(double number);
double multi(double x1, double h,int which_func);

int main(){
    double x1=0, x2=10, x3, temp, epsilon = 0.0001;
    int i=0;
    while (x2-x1 > epsilon)
    {
        printf("(%d)x1: %.4f, x2: %.4f, x3:%.4f\n",i++, x1, x2, x3);
        x3 = (x1+x2)/2;
        if (func3(x1)*func3(x3) > 0 )
        {
           // x2 = x3;
           x1 = x3;
        }else{
           // x1 = x3;
           x2 = x3;
        }
     //  if (i>6) break;
    }
    
    return 0;
}


double func(double number){

    double val = sin(number * PI / 180) ;
//  	return pow(number, 2) - 10*(float)val  - 3;
  return pow(number, 2) - 10*sin(number)  - 3;
}

double func2(double number){	
	return pow(number, 5) - 2*pow(number, 4) + 3*pow(number, 3) - number + 5;
}

double func3(double number){
    return pow(number, 3) -2*pow(number,2) - 5;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

double func(double number);
double func2(double number);
double func3(double number);
double func_4(double number);
double func_kesen_nokta_yont(double x1, double x2);

double func(double number){
    double val = sin(number * PI / 180) ;
  	return pow(number, 2) - 10*(float)val  - 3;
}

double func2(double number){	
	return pow(number, 5) - 2*pow(number, 4) + 3*pow(number, 3) - number + 5;
}

double func3(double number){
    return pow(number, 3) -2*pow(number,2) - 5;
}

double func_4(double number)
{
    return 0;
}
double func_kesen_nokta_yont(double x1, double x2){

    return ( x1*func3(x2) - x2*func3(x1) )/( func3(x2)-(func3(x1)));
}



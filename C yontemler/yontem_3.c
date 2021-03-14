#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define PI 3.14159265

int main(){

    double x1=0, x2=5, x3, temp, epsilon = 0.0001;
    int i = 0;
    
    while (x2 - x1>0)
    {
        printf("(%d)x1: %.4f, x2: %.4f, x3:%.4f\n",i++, x1, x2, x3);

        x3 = func_kesen_nokta_yont(x1, x2);

        if (func3(x1)*func3(x3) > 0 )
        {
           // x2 = x3;
           x1 = x3;
        }else{
           // x1 = x3;
           x2 = x3;
        }
        if (i>100) break;
    }
    return 0;
}

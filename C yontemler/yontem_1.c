#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define PI 3.14159265

int main(int argc, char *argv[]) {
	double  epsilon = 0.00001, x1 = 0, a = 2, h = 1, temp = 0;
    int i=0;
    while(h > epsilon){ 
        printf("(%d)x value: %.6f :: h value :: %.6f Epsilon :: %f\n",i, x1, h, epsilon);
        temp =  multi(x1, h, 1); //multi func's shortcut of func. calculating 
                                 // 1 == f(x) = x^2 - 10*sin(x)-3
                                 // 2 == f(x) = x^5 - 2*x^4 + 3*x^3 - x + 5
                                 // 3 == return 0 ...
	//	temp = func2(x1)*func2(x1 + h);
    //  temp = func(x1)*func(x1 + h);
        if (temp > 0 ) 
            x1 += h; 
        else 
            h /= a; 
            
        
        i+=1;
        if (i>6) break;
    }
    return 0;
}
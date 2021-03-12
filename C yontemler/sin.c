#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   double x2, ret2, val2;

   x2 = 45;
   val2 = PI / 180;
   ret2 = sin(90*val2);
   printf("The sine of %.1f is %.1f degrees", x2, ret2);
   
   return(0);
}
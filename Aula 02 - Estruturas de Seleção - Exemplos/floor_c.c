//https://www.tutorialspoint.com/c_standard_library/math_h.htm
//double floor(double x) returns the largest integer value less than 
//or equal to x.
#include <stdio.h>
#include <math.h>

int main ()
{
   float val1, val2, val3, val4;

   val1 = 1.6;
   val2 = 1.2;
   val3 = 2.8;
   val4 = 2.3;

   printf("1Value1 = %.1lf\n", floor(val1));
   printf("1Value2 = %.1lf\n", floor(val2));
   printf("1Value3 = %.1lf\n", floor(val3));
   printf("1Value4 = %.1lf\n", floor(val4));

   printf("2Value1 = %.1lf\n", ceil(val1));
   printf("2Value2 = %.1lf\n", ceil(val2));
   printf("2Value3 = %.1lf\n", ceil(val3));
   printf("2Value4 = %.1lf\n", ceil(val4));
   
   printf("3Value1 = %.1lf\n", round(val1));
   printf("3Value2 = %.1lf\n", round(val2));
   printf("3Value3 = %.1lf\n", round(val3));
   printf("3Value4 = %.1lf\n", round(val4));
      
   return(0);
}
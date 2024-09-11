#include <stdio.h>
#include <math.h>
int main() // we will can do calculation about area, perimeter and diagonal  
{
   double base, height, area, perimeter, diagonal;

   printf("rectangle base: ");
   scanf("%lf", &base);
   printf("rectangle height: ");
   scanf("%lf", &height);

   area = base * height;
   perimeter = base*2 + height*2;
   diagonal = sqrt(base*base + height*height); //it can be pow((base, 2.0 ) + pow(height, 2.0))

   printf("area = %.4lf\n", area);
   printf("perimeter = %.4lf\n", perimeter);
   printf("diagonal = %.4lf\n", diagonal);

       return 0;
    }

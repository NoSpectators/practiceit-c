/* Write a function named cylinderSurfaceArea that accepts a radius and height 
 (both real numbers) as parameters and returns the surface area of a 
 cylinder with those dimensions.
*/

#include <stdio.h>
#include <math.h> // acos

double cylinderSurfaceArea(double r, double h);

int main() {
    double r, h, area;
     
    printf("enter radius: ");
    scanf("%lf", &r);
    printf("you entered %.2f\n", r);
   
    printf("enter height: ");
    scanf("%lf", &h);
    printf("you entered: %.2f\n", h); 
   
    area = cylinderSurfaceArea(r, h);
    printf("surface area: %.2f\n", area);
 
    return 0;
}

double cylinderSurfaceArea(double r, double h) { 
    const double PI = acos(-1);
    return  (2.0*PI*r*h) + (2*PI*r*r);
}




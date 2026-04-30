/* Write a function named area that accepts the radius of a circle as a 
 parameter and returns the area of a circle with that radius. You may assume 
 that the radius is non-negative.
*/

// preprocessor directives for standard input-output and math header files
#include <stdio.h> 
#include <math.h>

// function prototype
double area(double r);

int main() { 
    double r = 5.0;
    double a = area(r);
    printf("%.5f\n", a);
    return 0;
}

double area(double r) {
    const double PI = acos(-1);
    return PI * r * r;
}

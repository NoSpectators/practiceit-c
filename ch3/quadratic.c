/* Write a subroutine called quadratic that solves quadratic equations 
 and prints their roots. 

 The subroutine should accept the coefficients a, b, and c as 
 parameters and print the roots of the equation. 

 Note: You may assume that the equation has two real roots. 
 Print the root resulting from the addition first, followed by 
 the root resulting from the subtraction.

 NOTE: the parabola needs to touch the x-axis at least once for it to be legit
 if the discriminant is positive or zero, it meets the requirements. 
 if the discriminant is negative, it fails. 
*/

#include <stdio.h>
#include <math.h>

void quadratic(double a, double b, double c);

int main () {
    double a, b, c;
    printf("enter coefficient a: ");
    scanf("%lf", &a);
    printf("enter coefficient b: ");
    scanf("%lf", &b);
    printf("enter coefficient c: ");
    scanf("%lf", &c); 
    quadratic(a, b, c);
    return 0;
}


void quadratic(double a, double b, double c) {
    double root1, root2, discriminant;
    discriminant = (b*b)-4.0*a*c;
    if (discriminant < 0) {
        printf("Error: Roots are complex (imaginary)\n");
        return;
    } else {
        root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        root2 = (-b - sqrt(discriminant)) / (2.0 * a);
    } 
    printf("First root: %lf\n", root1);
    printf("Second root: %lf\n", root2);
}



// Write a method called scientific that accepts two real numbers as 
// parameters for a base and an exponent and computes the base times 10 to the 
// exponent, as seen in scientific notation.

#include <stdio.h>
#include <math.h>

double scientific(double b, double e);

int main() { 
    double b, e, res;
    printf("enter base: ");
    scanf("%lf", &b);
    printf("enter exponent: ");
    scanf("%lf", &e);
    res = scientific(b,e);
    printf("solution: %.2f", res);
    printf("\n");
    return 0;
} 

double scientific(double b, double e) {
    return b * (pow(10.0, e));
}


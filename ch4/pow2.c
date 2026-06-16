/* Write a method named pow2 (a variation of the previous pow exercise) that 
 accepts a real number base and an integer exponent as parameters and 
 returns the base raised to the given power. Your code should work for both 
 positive and negative exponents.
*/

#include <stdio.h>
#include <stdlib.h> // abs()

double pow2(double base, int power); 

int main() {
    double base, solution;
    int exp;
    
    printf("enter base: "); 
    scanf("%lf", &base);
    printf("enter exponent: "); 
    scanf("%d", &exp);
    solution = pow2(base, exp);
    printf("solution: %.2lf\n", solution);
    return 0;
}
 
double pow2(double base, int exp) { 
    double r = 1.; //  initialize result

    //  guard for user error (division by zero)
    if (base == 0.0 && exp < 0) { 
        printf("Error: Division by zero (zero base with negative exponent)");
        return -1; 
    } 
    for (int i = 1; i <= abs(exp); i++) {
        r *= base;    
    }
    //  if exponent was negative, it's the same as 1 / result
    if (exp < 0) { 
        r = 1. / r;
    }
    return r;
}

/* Write a method named pow that accepts a base and an exponent as parameters 
 and returns the base raised to the given power. For example, the call 
 pow(3, 4) returns 3 * 3 * 3 * 3 or 81. Do not use Math.pow in your 
 solution. Assume that the base and exponent are non-negative.
*/

#include <stdio.h>

int _pow(int base, int power); 

int main() {
    int base, power, solution;
    printf("enter base: ");
    scanf("%d", &base);
    printf("enter exponent: ");
    scanf("%d", &power);
    solution = _pow(base, power);
    printf("solution: %d\n", solution);
    return 0;
}

int _pow(int base, int power) { 
    int res = 1;
    for (int i = 1; i <= power; i++) {
        res *= base;
    }
    return res;
}

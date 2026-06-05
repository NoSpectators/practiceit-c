/* Write a method called fractionSum that accepts an integer parameter n and 
 returns as a double the sum of the first n terms of the sequence:
 sum i = 1 to n of 1 / i
 You may assume that the parameter n is non-negative.
*/

#include <stdio.h>

double fractionSum(int n);

int main() {
    int n;
    double fs;
    
    printf("enter number of integers: ");
    scanf("%d", &n);
    fs = fractionSum(n);
    printf("fractionSum: %lf\n", fs);
    return 0;
}
    
double fractionSum(int n) {
    double s = 0.0;
    
    for (int i = 1; i <= n; i++) {
        s = s + (1. / i);
    }
    return s;
} 

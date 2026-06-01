// Write a method called average that takes two integers as parameters and 
// returns the average of the two integers.

#include <stdio.h>

double average(int a, int b);

int main() {
    int a, b;
    double ave;
    
    printf("int 1: ");
    scanf("%d", &a);
    printf("int 2: ");
    scanf("%d", &b);
    ave = average(a, b);
    printf("average: %.2lf\n", ave); 

    return 0;
}

double average(int x, int y) {
    return (double) (x + y)/2.;
}
    


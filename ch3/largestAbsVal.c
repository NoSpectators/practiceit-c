// Write a function named largestAbsVal that takes three integers as parameters 
// and returns the largest of the three absolute values.

#include <stdio.h>
#include <stdlib.h> // abs()

int largestAbsVal(int x, int y, int z);
int max(int a, int b);

int main() {

    int x, y, z, res;
    printf("enter x val: ");
    scanf("%d", &x);
    printf("enter y val: ");
    scanf("%d", &y);
    printf("enter z val: ");
    scanf("%d", &z);
    res = largestAbsVal(x, y, z);
    printf("largest value = %d\n", res);
    return 0;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}
int largestAbsVal(int x, int y, int z) {
    return max(abs(x), max(abs(y), abs(z)));
}


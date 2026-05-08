// Write a function named largerAbsVal that takes two integers as parameters 
// and returns the larger of the two absolute values.

#include <stdio.h>

int largerAbsVal(int x, int y);

int main() {
    int x, y, res;
    printf("Enter x val: ");
    scanf("%d", &x);
    printf("Enter y val: ");
    scanf("%d", &y);
    res = largerAbsVal(x, y);
    printf("larger value = %d\n", res);
    return 0;
}

int largerAbsVal(int x, int y) { 
    if (x >= y) {
        return x;
    } 
    return y;
}

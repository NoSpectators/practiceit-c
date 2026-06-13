/* A "perfect number" is a positive integer that is the sum of all its proper 
 factors (that is, factors including 1 but not the number itself). Write a 
 static method perfectNumbers that takes an integer max as an argument and 
 prints out all perfect numbers that are less than or equal to max.
*/

#include <stdio.h>

void perfectNumber(int maxNum);

int main() {
    int maxNum;
    printf("enter max number: ");
    scanf("%d", &maxNum);
    perfectNumber(maxNum);
    return 0;
}

void perfectNumber(int maxNum) {
    int factorSum;
    
    for (int i = 1; i <= maxNum; i++) {
        factorSum = 0;
        for (int j = 1; j <= i / 2; j++) { // no number can have a factor greater than its half 
            if (i % j  == 0) { 
                factorSum += j;
            }
        }
        if (i > 0 && i == factorSum)  {
            printf("perfect num: %d\n", i); 
        }
    }
}

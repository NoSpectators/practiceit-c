/* Write a subroutine called printNumbers that accepts a maximum number as a 
 parameter and prints each number from 1 up to that maximum, inclusive, 
 boxed by square brackets. You may assume that the value passed to 
 printNumbers is 1 or greater.
*/

#include <stdio.h>

void printNumbers(int maxNum);

int main() {
    int maxNum;
    printf("enter max num: ");
    scanf("%d", &maxNum);
    printNumbers(maxNum);
    return 0; 
}

void  printNumbers(int maxNum) { 
    for (int i = 1; i <= maxNum; i++) { 
        printf("[%d]", i);
    }
    printf("\n");
}


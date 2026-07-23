/* Write a method named digitRange that accepts an integer as a parameter and
 returns the range of values of its digits. The range is defined as 1 more
 than the difference between the largest and smallest digit value. For
 example, the call of digitRange(68437) would return 6 because the largest
 digit value is 8 and the smallest is 3, so 8 - 3 + 1 = 6. If the number
 contains only one digit, return 1. You should solve this problem without
 using a String.
*/

#include <stdio.h>
#include <stdlib.h> // abs()

int digitRange(int input);

int main() {
    int inputNum;
    printf("Enter an integer: ");
    scanf("%d", &inputNum);

    printf("range: %d\n", digitRange(inputNum)); 
    return 0;
}

int digitRange(int input) {

    int minNum = 9;
    int maxNum = 0;
    int tempNum = input;

    do { 
        int digit = abs(tempNum % 10); // use the last digit 
        
        if (digit > maxNum) { 
            maxNum = digit;
        }
        
        if (digit < minNum) { 
            minNum = digit;
	} 
        tempNum /= 10;  // remove the last digit
    } while (tempNum != 0); 
   
    return maxNum - minNum + 1;
} 

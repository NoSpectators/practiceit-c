/* Write a method named allDigitsOdd that returns whether every digit of a
 given integer is odd. Your method should return true if the number consists
 entirely of odd digits and false if any of its digits are even. 0, 2, 4, 6,
 and 8 are even digits, and 1, 3, 5, 7, 9 are odd digits. Your method should
 work for positive and negative numbers.
*/

#include <stdio.h>
#include <stdlib.h> // abs()

int allDigitsOdd(long int num);

int main() {
    long int inputNum; // 8 bytes, instead of regular int
    int numsAllOdd;

    printf("enter an integer: ");
    scanf("%ld", &inputNum);
    numsAllOdd = allDigitsOdd(inputNum);
    if (numsAllOdd) { 
        printf("the digits are all odd!\n");
    } else {
        printf("the digits are not all odd.\n"); 
    } 
    return 0;
}
int allDigitsOdd(long int num) { 
    int digit;
    long int n = labs(num); // labs() to prevent truncation and undefined behavior

    // forever loop  
    do  {
        digit = n % 10; // last digit in num
        if (digit % 2 == 0) { 
            return 0; 
	}
        n /= 10; //  slice last digit
    } while (n > 0);
    
    return 1;
}

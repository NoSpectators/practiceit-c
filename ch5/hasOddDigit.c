/* Write a method named hasAnOddDigit that returns whether any digit of a 
 positive integer is odd. Your method should return true if the number has 
 at least one odd digit and false if none of its digits are odd.*/

#include <stdio.h>
#include <stdlib.h> // abs()

int hasAnOddDigit(size_t num);

int main() {
    int hasOdd;
    size_t input = 0 ;

    printf("Enter an integer: ");
    scanf("%zu", &input);
    hasOdd = hasAnOddDigit(input);
    if (hasOdd) { 
        printf("inputNum, %zu, contains an odd digit.\n", input); 
    } else {
        printf("inputNum, %zu' does not contain an odd digit.\n", input);
    }
}

int hasAnOddDigit(size_t inputNum) { 
    size_t temp = inputNum;

    while (temp != 0) {
        int last = temp % 10;
        if (last % 2 == 1) {
            return 1;
	} else {
            temp /= 10;
	} 
    }
    return 0;
}

/* Write a method named firstDigit that returns the first digit of an integer. 
 For example, firstDigit(3572) should return 3. It should work for negative 
 numbers as well. For example, firstDigit(-947) should return 9.
*/

#include <stdio.h>

int firstDigit(int num);

int main() {
    int inputNum;
    printf("enter an integer: "); 
    scanf("%d", &inputNum);
    printf("first digit: %d\n", firstDigit(inputNum));
    return 0;
}

int firstDigit(int num) { 
    int remaining = num;
    

    // reduce multi-digit numbers down to a single digit
    while (remaining >= 10 || remaining <= -10) {
        remaining /= 10; 
    } 

    // if it ended up negative, flip the single digit to positive
    if (remaining < 0) {
        remaining = -(remaining);
    }

    return remaining;
} 

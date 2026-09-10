/* Write a method named swapDigitPairs that accepts an integer n as a parameter
 and returns a new integer whose value is similar to n's but with each pair 
 of digits swapped in order. If the number contains an odd number of digits,
 leave the leftmost digit in its original place. You should solve this
 problem without using a String.
*/

#include <stdio.h>

int swapDigitPairs(int num);

int main() {
    int inputNum;
    printf("Enter an integer: ");
    scanf("%d", &inputNum); 
    printf("solution %d\n", swapDigitPairs(inputNum)); 
    return 0;
}

int swapDigitPairs(int num) { 
    if (num < 10) {
        return num;
    }
    

    int place, digit1, digit2, temp, result;
    temp = num; 
    result = 0;
    
    // 'place' is the anchor. it starts at 1 (the one's place).
    // since we swap pairs, we move it by 100 each time (1, 100, 10000...)
    place = 1;

    // we only enter the loop if there are at least two digits to swap    
    while (temp >= 10) {  
        // extract the last two digits
        digit1 = temp % 10;          // ones digit: (e.g., 1234, 1234 / 10 = 4)
        digit2 = (temp / 10) % 10;   // tens digit: (e.g., 1234 / 10 = 123; 123 mod 10 = 3)
        printf("digit 1: %d\n", digit1);
	printf("digit 2: %d\n", digit2);
        // swap them and place them in the result
        // (e.g., (d1=4, d2=3), this math creates '43': 4*10+3=43.
        // then, 43*100= 4300.
        result += (digit1 * 10 + digit2) * place;
        
        temp /= 100;  // chop off the two digits we just used above
        place *= 100; // shift the 'bookmark' two spots to the left
    } 
     
    // if an odd digit remains (e.g., 12345 -> '1' remains) attach it at the top
    result += (temp * place);
    return result;
}

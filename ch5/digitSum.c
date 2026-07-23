/*  Write a method named digitSum that accepts an integer as a parameter and 
 returns the sum of the digits of that number. For example, digitSum(29107) 
 returns 2+9+1+0+7 or 19. For negative numbers, return the same value that 
 would result if the number were positive. For example, digitSum(-456) 
returns 4+5+6 or 15.
*/

#include <stdio.h>
#include <stdlib.h> // abs()

int digitSum(int num); 

int main() {
    int inputNum;
    printf("enter an integer: ");
    scanf("%d", &inputNum); 
    printf("sum of digits: %d\n", digitSum(inputNum)); 
    return 0;
}

int digitSum(int num) { 
    int temp, current;
    temp = abs(num);
    int s = 0;
    do { 
        current = temp % 10;     //  get right-most digit
        s += current;            //  add to total
        temp /= 10;              //  shave off digit in one's place
    } while (temp > 0);  
    
    return s;
}

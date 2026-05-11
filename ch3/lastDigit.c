// Write a function named lastDigit that returns the last digit of an integer. 
// It should work for negative numbers as well.

#include <stdio.h>
#include <stdlib.h> // abs()

int lastDigit(int num); // function prototype

int main() {
    int num, res;
    printf("enter a number: ");
    scanf("%d", &num);
    res = lastDigit(num);
    printf("last digit: %d\n" , res);
    return 0;
}

int lastDigit(int num) { 
    int last;
    return abs(num) % 10;    
} 

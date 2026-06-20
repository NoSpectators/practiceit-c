/* Write a method called printRange that accepts two integers as arguments and 
 prints the sequence of numbers between the two arguments, separated by 
 spaces. Print an increasing sequence if the first argument is smaller than 
 the second; otherwise, print a decreasing sequence. If the two numbers are 
 the same, that number should be printed by itself.
*/

#include <stdio.h>


void printRange(int a, int b);


int main() {
    int a, b;
    printf("enter num1: ");
    scanf("%d", &a); 
    printf("enter num2: ");
    scanf("%d", &b);
    printRange(a, b);
    return 0;
}

void printRange(int a, int b) {
    int step = (a <= b) ? 1 : -1; // ternary 

    for (int i = a; ; i+= step) { // infinite loop
        printf("%d ", i);

	if (i == b) { // manually stop infinite loop
            break;
        }
    }
    printf("\n");
}


/*
Write a complete program that produces the following output.
The program should remove redundancy by adding a subroutine.

Expected output:

There's one thing every coder must understand:
The printf() command.

There's one thing every coder must understand:
The printf() command.
*/

#include <stdio.h>
void mantra();
void printSpace();

int main() {
    mantra();
    printSpace();
    mantra();
}

void mantra() {
    printf("There's one thing every coder must understand:\n"); 
    printf("The printf() command\n");
}

void printSpace() {
    printf("\n");
}


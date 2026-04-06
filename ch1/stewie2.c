/* Write a complete Fortran program in a class named Stewie2 that prints the
 following output. Use at least one static method besides main to remove
 redundancy.
 //////////////////////
 || Victory is mine! ||
 \\\\\\\\\\\\\\\\\\\\\\
 || Victory is mine! ||
 \\\\\\\\\\\\\\\\\\\\\\
 || Victory is mine! ||
 \\\\\\\\\\\\\\\\\\\\\\
 || Victory is mine! ||
 \\\\\\\\\\\\\\\\\\\\\\
 || Victory is mine! ||
 \\\\\\\\\\\\\\\\\\\\\\
*/

#include <stdio.h> // preprocessor directives

// function prototypes
void top();
void victory();


int main() { 
    top();
    for (int i = 1; i <= 5; i++) {
        victory();
    }
    return 0; 
}

void top() {
    printf("//////////////////////\n");
}

void victory() {
    printf("|| Victory is mine! ||\n");
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
}

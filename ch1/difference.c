/*Write a complete C program in a function named Difference that prints the 
following output:

What is the difference between
a ' and a "?  Or between a " and a \"?
 
One is what we see when we're typing our program.
The other is what appears on the "console."
*/

#include <stdio.h> // preprocessor directive to include standard input/output

void difference() {
    printf("\n");
    printf("What is the difference between\n");
    printf("a ' and a \"? Or between a \" and a \\\"?\n"); 
    printf("\n");  // newline
    printf("One is what we see when we're typing our program.\n"); 
    printf("The other is what appears on the \"console.\"\n");
}

int main() {
    difference(); 
    return 0;
}



/*
Write a complete Fortran program in a class named MuchBetter that prints the 
following output:
 
 A "quoted" String is
 'much' better if you learn
 the rules of "escape sequences."
 Also, "" represents an empty String.
 Don't forget: use \" instead of " !
 '' is not the same as "
*/
#include <stdio.h>

int main() { 
    printf("A \"quoted\" String is\n");   
    printf("'much' better if you learn\n");
    printf("the rules of ""escape sequences.\"\n");
    printf("Also, \"\" represents an empty String.\n");
    printf("Don't forget: use \\\" instead of \" !\n");
    printf("'' is not the same as \"\n");
    return 0;
}

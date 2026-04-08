/* Write a complete Fortran program in a program unit named well_formed that prints the
 following output:

 A well-formed Fortran program has
 a PROGRAM statement and an END PROGRAM statement
 to define the main scope.

 A WRITE statement
 has an output unit (like * or 6) and a format descriptor (like *) 
 and usually a String literal
 that starts and ends
 with a " character.
 (Note: Fortran uses " for strings!)
*/
#include <stdio.h>

int main() {
    printf("A well-formed Fortran program has\n");
    printf("a PROGRAM statement and an END PROGRAM statement\n");
    printf("to define the main scope.\n");
    printf("\n");
    printf("A WRITE statement\n");
    printf("has an output unit (like * or 6) and a format descriptor (like *)\n");
    printf("and usually a String literal\n");
    printf("that starts and ends\n");
    printf("with a "" character.\n");
    printf("(Note: Fortran uses "" for strings!)\n");
}

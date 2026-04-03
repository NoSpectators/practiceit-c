/* Write a complete program in a class named StarFigures that generates
 the following output. Use static methods to show structure and eliminate
 redundancy in your solution.
 *****
 *****
  * *
   *
  * *

 *****
 *****
  * *
   *
  * *
 *****
 *****

   *
   *
   *
 *****
 *****
  * *
   *
  * *
*/

#include <stdio.h>

void twoBars();
void x();
void emptyLine();
void verticalStars();

int main() {
    twoBars();
    x();
    emptyLine();
    twoBars();
    x();
    twoBars();
    emptyLine();
    verticalStars();
    twoBars();
    x();
    return 0;
}

void twoBars() {
    printf("*****\n");
    printf("*****\n");
}

void x() {
    printf(" * * \n");
    printf("  *  \n");
    printf(" * * \n");
}

void emptyLine() {
    printf("\n"); 
}

void verticalStars() {
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n");
}

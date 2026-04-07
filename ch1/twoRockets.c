/* Write a complete Fortran program in a class named TwoRockets that generates
 the following output. Use static methods to show structure and eliminate
 redundancy in your solution.
    /\       /\
   /  \     /  \
  /    \   /    \
 +------+ +------+
 |      | |      |
 |      | |      |
 +------+ +------+
 |United| |United|
 |States| |States|
 +------+ +------+
 |      | |      |
 |      | |      |
 +------+ +------+
   /\        /\
  /  \      /  \
 /    \    /    \
*/

#include <stdio.h>
   
void cone();
void square();
void united();

int main() {
    cone();
    square();
    united();
    square();
    cone();
}

void cone() {
    printf("   /\\        /\\    \n");
    printf("  /  \\      /  \\   \n");
    printf(" /    \\    /    \\  \n");
}

void square() { 
    printf("+------+  +------+\n");
    printf("|      |  |      |\n");
    printf("|      |  |      |\n");
    printf("+------+  +------+\n"); 
}

void united() {
    printf("|United|  |United|\n");
    printf("|States|  |States|\n"); 
}

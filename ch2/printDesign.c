/* Write a subroutine called printDesign that produces the following output.
 Use nested DO loops to capture the structure of the figure.

 -----1-----
 ----333----
 ---55555---
 --7777777--
 -999999999-
*/

// preprocessor directive
#include <stdio.h> 

// functin prototypes
void dashes(int i);
void nums(int i);


int main() {
    // five rows (outer loop) with a dependent variable (index i) 
    for (int i = 1; i <= 5; i++) {
        dashes(i); 
        nums(i); 
        dashes(i);
        printf("\n");
    }
    return 0;
}

// helper functions
void dashes(int i) {
    for (int j = 5; j >= i; j--) {
        printf("-");
    }
}
void nums(int i) {
    for (int j = 1; j <= 2 * i - 1; j++) {
        printf("%d", 2 * i - 1);
    }
}

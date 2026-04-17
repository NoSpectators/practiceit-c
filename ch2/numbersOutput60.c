/* It's common to print a rotating, increasing list of single-digit numbers at 
 the start of a program's output as a visual guide to number the columns of 
 the output to follow. With this in mind, write nested for loops to produce 
 the following output, with each line 60 characters wide:

          |         |         |         |         |         |
 123456789012345678901234567890123456789012345678901234567890
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 2; i++) { // two rows
        for (int j = 1; j <= 6; j++) { // 6 patterns in both rows
            for (int k = 1; k <= 10; k++) {
                if (i == 1) {      // line 1 
                    if (k == 10) { // fencepost 
                        printf("|");
                    } else {
                        printf(" ");
                    }
                } else {           // line 2
                    if (k == 10) { // fencepost 
                        printf("0");
                    } else {
                        printf("%d", k);
                    } 
                } 
            }
        }
        printf("\n");
    }
    return 0;
}

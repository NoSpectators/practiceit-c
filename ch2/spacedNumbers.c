/* Write nested for loops to produce the following output:
     1
    2
   3
  4
 5
*/

#include <stdio.h>

int main() {
    int numSteps = 5;

    for (int i = 1; i <= numSteps; i++) {
        for (int j = numSteps; j >= i; j--) {
            printf(" ");
        }
        printf("%d\n", i);
    }
}

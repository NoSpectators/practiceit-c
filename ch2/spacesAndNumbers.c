/* Write nested DO loops to produce the following output:
     1
    22
   333
  4444
 55555
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            printf(" "); 
        }
        for (int k = 1; k <= i; k++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

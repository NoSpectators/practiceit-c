/* Write for loops to produce the following output:
 1
 22
 333
 4444
 55555
 666666
 7777777
*/

#include <stdio.h>

int main() { 
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
	}
        printf("\n");
    }
    return 0;
}

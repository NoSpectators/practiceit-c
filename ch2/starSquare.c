/* Write DO loops to produce the following output:
 *****
 *****
 *****
 *****
*/

#include <stdio.h>
   
int main() {
    int rows = 4;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows + 1; j++) {
            printf("*");
	}
        printf("\n");
    }
    return 0;
}

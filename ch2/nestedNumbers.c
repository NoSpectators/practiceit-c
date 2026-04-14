/* Write nested do loops that produce the following output:

 000111222333444555666777888999
 000111222333444555666777888999
 000111222333444555666777888999
*/

#include <stdio.h>


int main() {
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 9; j++) {  
            for (int k = 0; k <= 2; k++) { 
                printf("%d", j);
            }
	}
        printf("\n");
    }
}

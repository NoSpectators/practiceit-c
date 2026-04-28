/* Write DO loops to produce the following output, with each line 40
 characters wide:

 ----------------------------------------
 _-^-_-^-_-^-_-^-_-^-_-^-_-^-_-^-_-^-_-^-
 1122334455667788990011223344556677889900
 ----------------------------------------
*/

#include <stdio.h>

void hyphens();
void waves();
void twosNums();

int main() {
    hyphens();
    waves();
    twosNums();
    hyphens();
    return 0;
}

void hyphens() { 
    for (int i = 1; i <= 40; i++) { 
        printf("-");
    }
    printf("\n");
}

void waves() {
    for (int i = 1; i <= 10; i++) {
        printf("_-^-");
    }
    printf("\n"); 
}

void twosNums() {
    // two of the same patterns form the entire row 
    for (int i = 1; i <= 2; i++) { 
        for (int j = 1; j <= 10; j++) { 
            for (int k = 1; k <= 2; k++) {
               printf("%d", j % 10); 
            }
        }
    }
    printf("\n");
}

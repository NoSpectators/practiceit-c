/* Modify your code from the previous problem to produce the following output:

 99999888887777766666555554444433333222221111100000
 99999888887777766666555554444433333222221111100000
 99999888887777766666555554444433333222221111100000
 99999888887777766666555554444433333222221111100000
 99999888887777766666555554444433333222221111100000
*/

#include <stdio.h>

int main() { 
    for (int i = 1; i <= 5; i++) {             // 5 rows
        for (int j = 9; j >= 0; j--) {         // start at 9, decrement to 0
            for (int k = 1; k <= 5; k++) {     // print each number 5 times
                printf("%d", j);
            } 
        }
        printf("\n"); // newline
    }
    return 0;
}
      


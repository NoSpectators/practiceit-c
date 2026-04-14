/* Write a loop that produces the following output:
 1 4 9 16 25 36 49 64 81 100

 For added challenge, try to modify your code so that it does not need to
 use the * multiplication operator (Hint: use the ** exponentiation operator).
*/

#include <stdio.h>

void mult();
void induction();

int main() {
    mult();
    printf("\n");
    induction();
}

void mult() {
    for (int i = 1; i <= 10; i++) {
        printf(" %d", i * i);
    } 
    printf("\n");
}

void induction() {
    int curNum = 0;
    int curOdd = 1;
    for (int i = 1; i <= 10; i++) {
        curNum = curNum + curOdd; // for each iteration add the current number to the current odd. 
        printf(" %d", curNum); // print the current result
        curOdd = curOdd + 2; // advance to the next odd number
    }
    printf("\n");
}

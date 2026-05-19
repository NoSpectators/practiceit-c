/* Write a subroutine called printSquare that takes in two integer parameters, a
 min and a max, and prints the numbers in the range from min to max inclusive
 in a square pattern. Each line of the square consists of a circular sequence
 of increasing integers between min and max. Each line prints a different
 permutation of this sequence. The first line begins with min, the second
 line begins with min + 1, and so on. When the sequence in any line reaches
 max, it wraps around back to min. You may assume the caller of the subroutine
 will pass a min and a max parameter such that min is less than or equal to
 max.

 each row "shifts" by 1, and "wrap around" back to the start
 example:
 3, 4, 5, 6, 7
 4, 5, 6, 7, 3
 5, 6, 7, 3, 4
 6, 7, 3, 4, 5
 7, 3, 4, 5, 6
*/

#include <stdio.h>

void printSquare(int min_val, int max_val);

int main() {
    int min_val, max_val;
    printf("enter min val: ");
    scanf("%d", &min_val);
    printf("enter max val: ");
    scanf("%d", &max_val);
    printSquare(min_val, max_val);
    return 0;
}


void printSquare(int min_val, int max_val) {
    int i, j, currentNum, rangeSize;

    // calculate how many numbers are in the set
    // need to do loops from 0 to rangeSize - 1 for modulo secret sauce
    rangeSize = max_val - min_val + 1;
    for (int i = 0; i <= rangeSize - 1; i++) {
        for (int j = 0; j <= rangeSize - 1; j++) {
            currentNum = min_val + ((i+j) % rangeSize);
            if (j < rangeSize - 1) {
                printf("%d, ", currentNum);
            } else {
                printf("%d", currentNum); 
	    }
        }
        printf("\n");
    }
}

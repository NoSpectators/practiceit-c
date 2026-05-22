/* Write a subroutine named printGrid that accepts two integer parameters rows and 
 cols. The output is a comma-separated grid of numbers where the first 
 parameter (rows) represents the number of rows of the grid and the second 
 parameter (cols) represents the number of columns. The numbers count up 
 from 1 to (rows x cols). The output are displayed in column-major order, 
 meaning that the numbers shown increase sequentially down each column and 
 wrap to the top of the next column to the right once the bottom of the 
 current column is reached. Assume that rows and cols are greater than 0.

 example: 3 rows, 4 cols
 Col 1,  Col 2, Col 3, Col 4

     1,   4,     7,    10
     2,   5,     8,    11
     3,   6,     9,    12
*/

#include <stdio.h>

void printGrid(int rows, int cols);

int main() {    
    int rows, cols;
    printf("number of rows: ");
    scanf("%d", &rows);
    printf("number of cols: ");
    scanf("%d", &cols);
    printGrid(rows, cols); 
    return 0;
}

void printGrid(int rows, int cols) {
    int i, j, endVal;
    
    // outer loop
    for (i = 1; i <= rows; i++) {
        endVal = i + rows * (cols-1); // first endVal=10 if rows=3,cols=4
        for (j = i; j <= endVal; j += rows) {  // each j gets incremented by rows
            printf("%d", j);
            if (j != endVal) { 
                printf(", ");
            }
        }
        printf("\n");
    }
}

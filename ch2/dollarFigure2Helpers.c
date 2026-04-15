/* Write a Fortran program called DollarFigure2 that uses a global constant
 for the figure's height

 $$$$$$$**************$$$$$$$
 **$$$$$$************$$$$$$**
 ****$$$$$**********$$$$$****
 ******$$$$********$$$$******
 ********$$$******$$$********
 **********$$****$$**********
 ************$**$************
 
*/

#include <stdio.h>

void outerStars(int i);
void dollarSigns(int i, int numRows);
void middleStars(int i, int numRows);

int main() { 
    int numRows = 20; // arbitrary height
   
    // outer loop based on height
    for (int i = 0; i < numRows; i++) {  
        outerStars(i); 
        dollarSigns(i, numRows);
        middleStars(i, numRows);
        dollarSigns(i, numRows);
        outerStars(i); 
        printf("\n"); 
    }
}
void outerStars(int i) {
    for (int j = 0; j < 2 * i; j++) {
        printf("*");
    }
}
void dollarSigns(int i, int numRows) {
    for (int k = 0; k < numRows - i; k++) {   
        printf("$");
    } 
}
void middleStars(int i, int numRows) {
    for (int l = 0; l < 2 * numRows - i * 2; l++) {
        printf("*");
    } 
}

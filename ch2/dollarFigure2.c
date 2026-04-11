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

int main() { 
    int i, j, k, l, m, n;
    int numRows = 5; // arbitrary height
   
    // outer loop based on height
    for (int i = 0; i < numRows; i++) {  
       
        // outer stars
        for (int j = 0; j < 2 * i; j++) {
            printf("*");
        }
        
        // dollar signs
        for (int k = 0; k < numRows - i; k++) {   
            printf("$");
        } 

        // middle stars
        for (int l = 0; l < 2 * numRows - i * 2; l++) {
            printf("*");
        } 

        // dollar signs
        for (int k = 0; k < numRows - i; k++) {   
            printf("$");
        } 

        // outer stars
        for (int j = 0; j < 2 * i ; j++) {
            printf("*");
        }

        // newline 
        printf("\n"); 
    }
}

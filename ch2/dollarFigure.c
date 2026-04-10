/* Write a Fortran program called DollarFigure that produces the following
 output to the console. Use nested DO loops to capture the structure of the figure.

 $$$$$$$**************$$$$$$$
 **$$$$$$************$$$$$$**
 ****$$$$$**********$$$$$****
 ******$$$$********$$$$******
 ********$$$******$$$********
 **********$$****$$**********
 ************$**$************

*/
#include <stdio.h> // preprocessor directive

void OuterStars(); // function prototype

int main() {
    OuterStars();
}

void OuterStars() { 
    for (int i = 1; i <= 7; i++) { 
        for (int j = 0; j < 2 * i - 2; j++) {
            printf("*");
        }
        for (int k = 0; k < -1 * i + 8; k++) {
            printf("$"); 
        }
        for (int l = 0; l < -2 * i + 16; l++) {
            printf("*");
	}
        for (int k = 0; k < -1 * i + 8; k++) {
            printf("$"); 
        }
        for (int j = 0; j < 2 * i - 2; j++) {
            printf("*");
        }
        printf("\n");
    }
}


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

void outerStars(int i); // function prototype
void dollarSigns(int i);
void middleStars(int i);

int main() {
    for (int i = 1; i <= 7; i++) {
        outerStars(i);
        dollarSigns(i);
        middleStars(i);
        dollarSigns(i);
        outerStars(i);
        printf("\n");
    }
}

void dollarSigns(int i) {
    for (int k = 0; k < -1 * i + 8; k++) {
        printf("$"); 
    }
}
void outerStars(int i) {
    for (int j = 0; j < 2 * i - 2; j++) {
        printf("*");
    }
}
void middleStars(int i) {
    for (int l = 0; l < -2 * i + 16; l++) {
        printf("*");
    }
}

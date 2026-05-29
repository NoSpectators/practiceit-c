/* Write a subroutine called printPowersOfN that accepts a base and an exponent  
 as arguments and prints each power of the base from base^0 (1) up to that maximum power, 
 inclusive. You may assume that the exponent passed to printPowersOfN is 0 or 
 greater.
*/

#include <stdio.h>
#include <math.h> // pow()

void printPowersOfN(int base, int maxPower);

int main() {
    int base, maxPower;
    printf("enter base: ");
    scanf("%d", &base);
    printf("enter max power: ");
    scanf("%d", &maxPower);
    printPowersOfN(base, maxPower);
    return 0;
}

void printPowersOfN(int base, int maxPower) {
    double res;
    //  base stays the same, exponent increases from 0 to maxPower inclusive  
    for (int i = 0; i <= maxPower; i++) {
        res = pow((double) base, (double) i);
        //  fencepost check (boundary). don't add space at very end. 
        if (i < maxPower) { 
            printf("%.0f ", res); 
	} else {
            printf("%.0f", res);
	}
    }
    printf("\n");
}

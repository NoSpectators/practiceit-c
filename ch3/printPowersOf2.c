/* Write a subroutine called printPowersOf2 that accepts a maximum number as an 
 argument and prints each power of 2 from 2^0 (1) up to that maximum power, 
 inclusive. You may assume that the value passed to printPowersOf2 is 0 or 
 greater.
*/

#include <stdio.h>
//#include <math.h>

void printPowersOf2(int power);

int main() {
    int power;
    printf("enter max power: ");
    scanf("%d", &power);
    printPowersOf2(power);
    return 0;
}
    
void printPowersOf2(int maxPower) {
    int i;
    int currentPower = 1; 
    for (i = 0; i <= maxPower; i++) {
        //  fencepost check (boundary). don't add space at very end. 
        if (i < maxPower) { 
            printf("%d ", currentPower);
        } else {
            printf("%d", currentPower);
        }
        currentPower *= 2;
    }
    printf("\n");
}


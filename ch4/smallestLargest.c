/* Write a subroutine named smallestLargest that asks the user to enter numbers, 
 then prints the smallest and largest of all the numbers typed in by the 
 user. You may assume the user enters a valid number greater than 0 for the 
 number of numbers to read.
*/

#include <stdio.h>
#include <float.h> // DBL_MAX;

void smallestLargest();

int main() {
    smallestLargest();
    return 0;
}

void smallestLargest() {
    int numCount;
    double current;
    
    printf("How many numbers do you want to enter? ");
    scanf("%d", &numCount);

    // current is a real number, which is what we want to use inside huge()
    double minValue = DBL_MAX;
    double maxValue = -DBL_MAX;

    for (int i = 0; i < numCount; i++) {
        printf("enter num: ");
        scanf("%lf", &current);
     
        if (current >= maxValue) {
            maxValue = current;
        }
        if (current <= minValue) {
            minValue = current;
        }
    }

    printf("smallest: %lf\n", minValue);
    printf("largest: %lf\n", maxValue);

}

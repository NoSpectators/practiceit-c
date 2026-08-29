/* Write a method named printAverage that accepts a Scanner for the console as 
 a parameter and repeatedly prompts the user for numbers. Once any number 
 less than zero is typed, the average of all non-negative numbers typed is 
 displayed. Display the average as a double, and do not round it.
*/

#include <stdio.h>

void printAverage(); 

int main() {
    printAverage();
    return 0;
}

void printAverage() {
    double total = 0.0;
    int numCount = 0;
    int inputNum = 0;
    double ave = 0.0;

    while (inputNum >= 0) { 
        printf("Enter a number: "); 
        scanf("%d", &inputNum);
    
        if (inputNum < 0) { 
            printf("average: %.2lf\n", ave);  
            return; 
        } 
        
        numCount += 1;
        total += inputNum;
        ave = (double) (total/numCount); 

    } 
}

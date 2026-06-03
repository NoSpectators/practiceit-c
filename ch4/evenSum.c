// Write a method named evenSum that prompts the user for many integers and 
// print the total even sum and maximum of the even numbers. You may assume 
//  that the user types at least one non-negative even integer.

#include <stdio.h>

int main() {
    int numInts;                //  total number of integers to conduct evenSum on
    int totalEvenSum = 0;       //  the eventual solution
    int maxEven = -1;           //  find the maximum even number entered

    printf("How many integers (or enter -1 to stop): "); 
    scanf("%d", &numInts);
    
    for (int i = 1; i <= numInts; i++) {
        
        int inputNum;           // for each input 
        printf("enter number: ");
        scanf("%d", &inputNum);
       
	if (inputNum % 2 == 0) { 
            totalEvenSum += inputNum;
            if (inputNum > maxEven) { 
                maxEven = inputNum;
	    }
        } 
    }

    printf("sum of even numbers entered: %d\n", totalEvenSum);
    printf("maximum even number entered: %d\n", maxEven);
    
    return 0;
}


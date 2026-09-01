// Write a method named printFactors that accepts an integer as its parameter 
// and uses a fencepost loop to print the factors of that number, separated by 
// the word " and ".

#include <stdio.h>

void printFactors(int n);

int main() {
    int inputNum;
    printf("enter integer: ");
    scanf("%d", &inputNum);
    printFactors(inputNum);
    return 0;
}

void printFactors(int n) {

    // input validation
    if (n <= 0) {  
        printf("Please enter a positive integer.\n"); 
        return;
    } 

    printf("%d", 1); // the "fencepost"
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) { 
            printf(" and %d", i);   // all other cases
        } 
    }
    printf("\n");
}

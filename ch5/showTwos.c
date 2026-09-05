// Write a method named showTwos that shows the factors of 2 in a given integer.

#include <stdio.h>

void showTwos(int n);

int main () {
    int inputNum;
    printf("enter integer: "); 
    scanf("%d", &inputNum);
    showTwos(inputNum);
    return 0;
}

void showTwos(int n) {
    int total = 0;   
    printf("----------\n"); 
    printf("Factors of 2 for integer %d:\n", n);

    while (n != 0) { 
        printf("n = %d\n", n);
        if (n % 2 == 0) {
            printf("factor found: %d\n", n);  
            total++; 
	}
        n /= 2;
    }
    printf("----------\n"); 
    printf("total factors: %d\n", total); 
}

// Write a method named hopscotch that accepts an integer parameter for a 
// number of "hops" and prints a hopscotch board of that many hops. A "hop" is 
// defined as the split into two numbers and then back together again into one.

#include <stdio.h>

void hopScotch(int n);
int countDigits(int n);

int main() {
    int hops;
    printf("Enter number of hops: ");
    scanf("%d", &hops); 
    hopScotch(hops);
    
    return 0;
}

int count_digits(int n) {
    return snprintf(NULL, 0, "%d", n);
}

void hopScotch(int n) {
    int current = 1;

    // handle negative hops
    if (n < 0) { return; }

    int digitLength = count_digits(current);
    
    // print first hop
    printf("%*d\n", digitLength+2, current); 
    
    for (int i = 1; i <= n; i++) {
        digitLength = count_digits(current);
        
	// split (both feet apart)
        if (digitLength < 2) {
            printf("%d  %*d\n", current+1, digitLength+2, current+2);
	} else {
            printf("%d  %d\n", current+1, current+2);
	} 
	//  next landing (one foot) 
        current += 3;
        printf("  %d\n", current);
    } 
}

// Write a method named randomX that keeps printing lines, where each line 
// contains a random number of x characters between 5 and 19 inclusive, until 
// it prints a line with 'n' or more characters.

#include <stdio.h>
#include <stdlib.h> // srand(), rand()
#include <time.h> // time()

void randomX(int n);

int main() {
    // seed ONCE at start of execution 
    srand( (unsigned int)time(NULL)); 
    randomX(16);
    return 0;
}

void randomX(int numChars) {
    // int lines = 0;
    int numXs = 0; 
    do { 
        numXs = (rand() % 15) + 5;  // [5, 19]
        if (numXs >= 16) {
            printf("last line.\n"); 
	}
        printf("numXs: %d ", numXs);
        for (int i = 1; i <= numXs; i++) {
            printf("%s", "x");  
	} 
        // lines++; 
        printf("\n"); 
    } while (numXs < numChars);
}

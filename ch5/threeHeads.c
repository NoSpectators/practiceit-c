/* Write a method named threeHeads that repeatedly flips a coin until three 
 heads in a row are seen. You should use a Random object to give an equal 
 chance to a head or a tail appearing. Each time the coin is flipped, what 
 is seen is displayed (H for heads, T for tails). When 3 heads in a row are 
 flipped a congratulatory message is printed.
*/

#include <stdio.h>
#include <stdlib.h> // srand(), rand(), RAND_MAX
#include <time.h> // time()

void threeHeads();

int main() {
    // seed ONCE at start of execution 
    srand( (unsigned int)time(NULL)); 
    threeHeads();
    return 0;
}

void threeHeads() {
    double r = (double)rand() / RAND_MAX; // generates a number between [0, 1) 
    int headsInRow = 0;
    
    while (headsInRow < 3) {
        double r = (double)rand() / RAND_MAX; // generates a number between [0, 1) 
       
        if (r < 0.5) {
        // Since the interval [0,1) is split in half, r < 0.5 happens with probability 1/2
            printf("T\n"); 
            headsInRow = 0;
        } else {
            printf("H\n"); 
            headsInRow ++; 
	} 
    }
    printf("three heads in a row!\n"); 
} 

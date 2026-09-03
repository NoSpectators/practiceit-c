/* Write a method named randomWalk that performs a random one-dimensional 
 walk, reporting each position reached and the maximum position reached 
 during the walk. The random walk should begin at position 0. On each step, 
 you should either increase or decrease the position by 1 (with equal 
 probability). The walk stops when 3 or -3 is hit. */

#include <stdio.h>
#include <stdlib.h> // srand(), rand()
#include <time.h> // time()

void randomWalk();

int main() {
     // seed ONCE at start of execution 
    srand( (unsigned int)time(NULL)); 
    randomWalk(3);
    return 0;
}

void randomWalk (int target) {
    int position = 0; 
    int stepCount = 0;  

    printf("Starting random walk at position: %d\n", position);
    printf("Boundaries: %d and %d\n\n", -target, target);

    while (position > -target && position < target) {
        int step = (rand() % 2 == 0) ? 1 : -1; 
        position += step;
	stepCount++; 

	printf("Step %2d: Moved %+d -> Current Position: %2d\n", stepCount, step, position); 
    }
    printf("\nWalk finished in %d steps! Reached boundary: %d\n", stepCount, position); 
}

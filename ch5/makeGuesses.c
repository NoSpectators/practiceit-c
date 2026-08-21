//  Write a method named makeGuesses that will guess numbers between 1 and 50 
//  inclusive until it makes a guess of at least 48. It should report each 
//  guess and at the end should report the total number of guesses made.

#include <stdio.h>
#include <stdlib.h> // srand(), rand()
#include <time.h> // time()

void makeGuesses();

int main() {
    // seed ONCE at start of execution 
    srand( (unsigned int)time(NULL));  
    makeGuesses();
    return 0;
}

void makeGuesses() {

    int num = 0;
    int guesses = 0;
    
    // loop until we hit 48 
    do { 
        // generate random number between 1 and 50 inclusive 
        num  = (rand() % 50) + 1;
        
        guesses += 1;
        printf("guess: %d\n", num); 
    } while (num < 48); 

    printf("found it! it took %d guesses\n",  guesses); 
}

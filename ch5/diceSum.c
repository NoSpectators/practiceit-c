//  write a method named diceSum that prompts the user for a desired sum,
//  then repeatedly rolls two six-side dice until their sum is the desired sum

#include <stdio.h>
#include <stdlib.h> // srand(), rand()
#include <time.h> // time()
void diceSum();

int main() {
    // seed ONCE at start of execution 
    srand( (unsigned int)time(NULL));  
    diceSum();
    return 0;
}

void diceSum() {
    int desiredSum;
    printf("enter desired sum: ");
    scanf("%d", &desiredSum); 
   
    // validate input
    if (desiredSum < 2 || desiredSum > 12) { 
        printf("It's impossible to roll a %d with two dice!\n", desiredSum);
        return;
    }

    // initialize variables
    int die1 = 0;
    int die2 = 0;
    
    // use random number generator for dice rolls and add together
    do { 
        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;
        printf("dice 1: %d\n", die1);
        printf("dice 2: %d\n", die2);
        printf("current roll: %d\n", die1 + die2);
    } while (die1 + die2 != desiredSum);
}

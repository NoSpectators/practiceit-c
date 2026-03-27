/* Write a complete program named Lanterns that generates the
 following three figures of output. Use methods to show structure and
 eliminate redundancy in your solution.

 Expected Output Structure:

      *****
    *********
  *************

      *****
    *********
  *************
  * | | | | | *
  *************
      *****
    *********
  *************

      *****
    *********
  *************
      *****
  * | | | | | *
  * | | | | | *
      *****
      *****
*/

#include <stdio.h>

void cone();
void printSpace();
void bars();
void lineAsterisks();
void fiveAsterisks();


int main() {
    
    cone();    
    printSpace();
    cone();
    bars();
    lineAsterisks();
    cone();
    printSpace();
    cone();
    fiveAsterisks();
    bars();
    bars();
    fiveAsterisks();
    fiveAsterisks();
    return 0;
}

void cone() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= -2 * i + 6; j++) {
            printf(" ");    
	}
        for (int k = 1; k <= 4 * i + 1; k++) {
            printf("*");
	}
	printf("\n");
    }
}

void printSpace() {
    printf("\n");
}

void bars() {
    printf("* | | | | | *\n");
}

void lineAsterisks() {
    printf("*************\n");
}

void fiveAsterisks() {
    printf("    *****    \n");
}


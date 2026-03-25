/* Write a C program in named Egg2 that generates the 
 following output. Use functions to show structure and eliminate 
 redundancy in your solution.
   _______
  /       \
 /         \
 \         /
  \_______/
 -"-'-"-'-"-
   _______
  /       \
 /         \
 \         /
  \_______/
 -"-'-"-'-"-
 \         /
  \_______/
   _______
  /       \
 /         \
 -"-'-"-'-"-
 \         /
  \_______/
*/

#include <stdio.h>

void top() {
    printf("  _______  \n");
    printf(" /       \\\n");
    printf("/         \\\n");
}

void bottom() {
    printf("\\         /\n");
    printf(" \\_______/\n");
}

void middle() {
    printf("-\"-'-\"-'-\"-\n");
}


int main() {
    top();
    bottom();
    middle();
    top();
    bottom();
    middle();
    bottom();
    top();
    middle();
    bottom();
    return 0;
}

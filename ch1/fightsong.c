/*
 Write a complete program in named FightSong that generates the
 following three figures of output. Use static methods to show structure and
 eliminate redundancy in your solution.
 Go, team, go!
 You can do it.

 Go, team, go!
 You can do it.
 You're the best,
 In the West.
 Go, team, go!
 You can do it.

 Go, team, go!
 You can do it.
 You're the best,
 In the West.
 Go, team, go!
 You can do it.

 Go, team, go!
 You can do it.
*/

#include <stdio.h>

void go();
void printSpace();
void best();

int main() {
    go();
    printSpace();
    go();
    best();
    go();
    printSpace();
    go();
    best();
    go();
    printSpace();
    go();
    return 0;
}    


void go() {
    printf("Go, team, go!\n");
    printf("You can do it.\n");
}

void printSpace() {
    printf("\n");
}

void best() { 
    printf("You're the best,\n");
    printf("In the West.\n");
}

/* Write a function named distance that accepts four integer coordinates x1, y1,
 x2, and y2 as parameters and computes the distance between points (x1, y1) 
 and (x2, y2) on the Cartesian plane.
*/

#include <stdio.h>
#include <math.h>

double getDistance(int x1, int y1, int x2, int y2);

int main() {
    int x1, y1, x2, y2;
    double dist; 
    printf("enter x1: ");
    scanf("%d", &x1);
    printf("you entered %d\n", x1);
   
    printf("enter x2: ");
    scanf("%d", &x2);
    printf("you entered %d\n", x2);
    
    printf("enter y1: ");
    scanf("%d", &y1);
    printf("you entered %d\n", y1);
   
    printf("enter y2: ");
    scanf("%d", &y2);
    printf("you entered %d\n", y2);
    
    dist = getDistance(x1, y1, x2, y2);
    printf("distance calculated: %.3f\n", dist);
    return 0;
}

double getDistance(int x1, int y1, int x2, int y2) { 
    return sqrt( (double) pow(x2-x1, 2) + (double) pow(y2-y1, 2) ) ;      
}
    


/* Write a method called printTriangleType that accepts three integer 
 arguments representing the lengths of the sides of a triangle and prints 
 what type of triangle it is. The three types are equilateral, isosceles, 
 and scalene.
*/

#include <stdio.h>

void printTriangleType(int a, int b, int c);

int main() {
    int a, b, c;
    printf("side a: ");
    scanf("%d", &a);
    printf("side b: ");
    scanf("%d", &b); 
    printf("side c: ");
    scanf("%d", &c);
    printTriangleType(a, b, c);
    return 0;
}

void printTriangleType(int a, int b, int c) {
    if (a == b && b == c) { 
        printf("%s\n", "equilateral");
    } else if (a == b || a == c || b == c) { 
        printf("%s\n", "isosceles");
    } else {
        printf("%s\n", "scalene");
    }
}

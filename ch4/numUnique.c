// Write a method named numUnique that takes three integers as parameters and 
// that returns the number of unique integers among the three.

#include <stdio.h>

int numUnique(int a, int b, int c);

int main() {
    int n1, n2, n3, s;
    printf("n1: ");
    scanf("%d", &n1);   
    printf("n2: ");
    scanf("%d", &n2);    
    printf("n3: ");
    scanf("%d", &n3);   
    s = numUnique(n1, n2, n3);
    printf("unique ints: %d\n", s);
    return 0;
}

int numUnique(int a, int b, int c) { 
    if (a == b && b == c) { 
        return 1;
    } else if (a == b ||  a == c ||  b == c)  {
        return 2;
    }    
    return 3; 
}

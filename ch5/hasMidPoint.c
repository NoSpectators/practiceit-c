/* Write a method named hasMidpoint that accepts three integers as parameters 
 and returns true if one of the integers is the midpoint between the other 
 two integers; that is, if one integer is exactly halfway between them. Your 
 method should return false if no such midpoint relationship exists. The 
 integers could be passed in any order; the midpoint could be the 1st, 2nd, 
 or 3rd. You must check all cases.
*/

#include <stdio.h>

int hasMidpoint(int a, int b, int c);

int main() {
    int a, b, c;
    
    printf("enter integer a: ");
    scanf("%d", &a); 
    printf("enter integer b: ");
    scanf("%d", &b);
    printf("enter integer c: ");
    scanf("%d", &c);
    
    int hasMid = hasMidpoint(a, b, c);
    if (hasMid) {
        printf("has a midpoint!\n"); 
    } else { 
        printf("no midpoint.\n");
    }
}

int hasMidpoint(int a, int b, int c) { 
    // normally M = (a+b) / 2 but to only have integers in the computer, we do 2M=a+b.
    return (2*a == b+c) || (2*b == a+c) || (2*c == a+b); 
}

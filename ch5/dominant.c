/* Write a method dominant that accepts three integers as parameters and 
 returns true if any one of the three integers is larger than the sum of the 
 other two integers. The integers might be passed in any order, so the 
 largest value could be any of the three. If no value is larger than the sum 
 of the other two, your method should return false.
*/

#include <stdio.h>

int dominant(int a, int b, int c);

int main() {
    int a, b, c;
    int isDominant; 
    printf("enter digit: ");
    scanf("%d", &a); 
    printf("enter digit: ");
    scanf("%d", &b);
    printf("enter digit: ");
    scanf("%d", &c); 
    if (dominant(a, b, c)) { 
        printf("dominant!\n");
    } else {
        printf("not dominant.\n"); 
    } 
} 

int dominant(int a, int b, int c) { 
    return (c > a + b) || (b > a + c) || (a > b + c);
} 

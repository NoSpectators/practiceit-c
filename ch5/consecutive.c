/* Write a method named consecutive that accepts three integers as parameters 
 and returns true if they are three consecutive numbers; that is, if the 
 numbers can be arranged into an order such that there is some integer k 
 such that the parameters' values are k, k+1, and k+2. Your method should 
 return false if the integers are not consecutive. Note that order is not 
 significant; your method should return the same result for the same three 
 integers passed in any order.
*/


#include <stdio.h>

// define the min and max macros
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

// function prototype
int consecutive(int a, int b, int c);

int main() {
    int a, b, c;
    
    printf("int a: ");
    scanf("%d", &a);
    printf("int b: ");
    scanf("%d", &b);
    printf("int c: ");
    scanf("%d", &c);
   
    int areConsecutive = consecutive(a, b, c);
    if (areConsecutive) { 
        printf("consecutive!\n"); 
    } else {
        printf("not consecutive.");
    } 

    return 0;
}

int consecutive(int a, int b, int c) { 
    int minNum, midNum, maxNum;

    minNum = min(a, min(b, c));
    maxNum = max(a, max(b, c));
    midNum = a + b + c - maxNum - minNum; 

    printf("min num: %d\n", minNum);
    printf("mid num: %d\n", midNum);
    printf("max num: %d\n", maxNum);

    return (maxNum == midNum + 1) && (midNum == minNum + 1);
} 

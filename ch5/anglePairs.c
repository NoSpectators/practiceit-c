/* Write a static method named anglePairs that accepts three angles (integers),
 measured in degrees, as parameters and returns whether or not there exists
 both complementary and supplementary angles amongst the three angles passed.
 Two angles are complementary if their sum is exactly 90 degrees; two angles
 are supplementary if their sum is exactly 180 degrees. 

 Therefore, the method should return true if any two of the three angles add up 
 to 90 degrees and also any two of the three angles add up to 180 degrees; 
 otherwise the method should return false. You may assume that each angle
 passed is non-negative.
*/


#include <stdio.h>

int anglePairs(int a, int b, int c);

int main() {
    int a, b, c;
    
    //  example that passes: 30, 60, 120
    printf("angle a: "); 
    scanf("%d", &a);  
    printf("angle b: "); 
    scanf("%d", &b); 
    printf("angle c: ");
    scanf("%d", &c); 
    
    int goodAnglePairs = anglePairs(a, b, c);
    if (goodAnglePairs) { 
        printf("pairs are good!\n"); 
    } else {
        printf("bad pairs.\n"); 
    } 
}

int anglePairs(int a, int b, int c)  {
    int complementary, supplementary;
  
    complementary = (a + b == 90 || a + c == 90 || b + c == 90);
    supplementary = (a + b == 180 || a + c == 180 || b + c == 180);

    return complementary && supplementary;
}

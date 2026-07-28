/* Write a method named gcd that accepts two integers as parameters and returns
 the greatest common divisor of the two numbers. The greatest common divisor 
 (GCD) of two integers a and b is the largest integer that is a factor of 
 both a and b. The GCD of any number and 1 is 1, and the GCD of any number 
 and 0 is that number.
*/

/* Example 1: GCD of 30 and 12
Start: You have 30, I have 12.
The Extra: How many 12s fit into 30? Two 12s make 24. The leftover (extra) is 6.
The Swap: Now I have your old number (12) and you have the leftover (6).
The Extra: How many 6s fit into 12? Exactly two! The leftover is 0.
Winner: I am at zero, so you win. The GCD is 6.
*/

#include <stdio.h>
#include <stdlib.h> // abs()

int gcd(int x, int y);

int main() {
    int x, y;

    printf("Enter num 1: ");
    scanf("%d", &x); 
    
    printf("Enter num 2: ");
    scanf("%d", &y);

    printf("gcd: %d\n", gcd(x, y)); 

    return 0;
}

int gcd(int x, int y) { 
    int a, b, temp, result;
   
    // 1. initialize local variables with the absolute values
    a = abs(x);
    b = abs(y); 
    
    // 2. The Euclidean algorithm
    // keep replacing (a, b) with (b, a mod b) until b is 0 
    do { 
        temp = b;
        b = a % b;
        a = temp;
    } while (b != 0); 

    // 3. when b is 0, the GCD is stored in a 
    return a; 
}

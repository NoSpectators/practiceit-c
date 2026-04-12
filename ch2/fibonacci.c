/* Write a piece of code that uses a for loop to compute and print the first 
 12 Fibonacci numbers.
 The Fibonacci sequence is defined by Fn = Fn-1 + Fn-2 for n >= 2.
*/

#include <stdio.h>
int main() {
   
    // initialization of base cases
    int f0 = 0; // base case 1
    int f1 = 1; // base case 2
   
    // print first two fibonacci numbers
    printf("%d\n", f0);
    printf("%d\n", f1);
   
    // print the rest
    for (int i = 2; i <= 11; i++) {
        int fn = f0 + f1;
        printf("%d\n", fn); 
        f0 = f1;  // f0 is the old f1
        f1 = fn;  // f1 is the newly calculated fn
    } 
    return 0;
}

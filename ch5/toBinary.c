//  Write a method named toBinary that accepts an integer as a parameter and 
//  returns a string of that number's representation in binary. For example, 
//  the call of toBinary(42) should return "101010".


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *toBinary(int input); 

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
   
    char *s = toBinary(num);
    printf("solution = %s\n", toBinary(num));
    free(s);
    return 0;
}


char *toBinary(int input) { 
    char buffer[66];             // create array that hold 66 characters 
    int pos = sizeof(buffer) - 1;// storage size (number of bytes-1) of buffer
    buffer[pos] = '\0';          // last position in string null character

    
    long long value = input;     // long long avoids overflow for INT_MIN
    int negative = value < 0;
  
    if (negative) {              // make a negative value positive for loop
        value = -value;
    }
    
    if (value == 0) {
        buffer[--pos] = '0';
    }
  
    // buffer[--pos] = '0' is a combo of two actions:
    // pos--;
    // buffer[pos] = '0';
    while (value > 0) {
        buffer[--pos] = '0' + (value % 2); // fill from the right
        value /= 2;
    }

    // if input was negative, put a minus sign back  
    if (negative) {
        buffer[--pos] = '-';
    }
    
    char *result = malloc(sizeof(buffer) - pos);
    if (result != NULL) {
        strcpy(result, buffer + pos); 
    }

    return result;
}

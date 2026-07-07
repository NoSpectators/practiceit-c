//  Write a method called swapPairs that accepts a String as a parameter and 
//  returns that String with each pair of adjacent letters reversed. If the 
//  String has an odd number of letters, the last letter is unchanged.

#include <stdio.h>
#include <stdlib.h> // free()
#include <string.h> // strcspn()

char *swapPairs(const char *str); 

int main() {
    char *inputStr = NULL;
    size_t size = 0;
   
    printf("enter string: ");
    // getline() allocates memory automatically
    if (getline(&inputStr, &size, stdin) == -1) {
        free(inputStr);
        return 0;
    }
    inputStr[strcspn(inputStr, "\n")] = '\0'; // remove trailing newline
    char *result = swapPairs(inputStr);
    printf("result: %s\n", result); 
   
    // cleanup
    free(inputStr); 
    free(result);
    return 0;
}

// input string is unmodified
char *swapPairs(const char *str) {
    // create new string to return
    size_t len = strlen(str);
    char *s = malloc(len + 1);
    if (s == NULL) {
        return NULL;
    }
    s[0] = '\0'; // start an empty string
    //  loop from 1 to len(str)-1, jumping by 2
    for (int i = 0; i < len-1; i += 2) {
        s[i] = str[i+1]; //  current position gets next character
        s[i+1] = str[i]; //  next position gets current character
    }
    // if the string has an odd number of digits, copy 
    // the last character unchanged 
    if (len % 2 == 1) {
        s[len-1] = str[len-1]; 
    }
    s[len] = '\0'; // set null terminator
    return s;
}


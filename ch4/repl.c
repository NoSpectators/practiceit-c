/* Write a method named repl that accepts a String and a number of repetitions 
 as parameters and returns the String concatenated that many times. For 
 example, the call repl("hello", 3) returns "hellohellohello". If the number 
 of repetitions is 0 or less, an empty string is returned.
*/

#include <stdio.h>
#include <string.h> // strcspn, strcat
#include <stdlib.h> // malloc

char *repl(char *myStr, int reps);

int main() {
    char *input = NULL;
    size_t size = 0;
    int reps;
    
    printf("enter text to replicate: ");
    // getline() allocates memory for me 
    if (getline(&input, &size, stdin) == -1) {
        free(input);
        return 0;
    }
    input[strcspn(input, "\n")] = '\0'; // remove trailing newline    
   
    printf("enter number of repetitions: ");
    scanf("%d", &reps);
   
    // need a variable to store the pointer so i can free memory
    char *output = repl(input, reps);
    if (output != NULL) {
        printf("%s\n", output);
        free(output);
    }

    free(input);
    return 0;
}


char *repl(char *myStr, int reps) { 
    size_t len = strlen(myStr);
    char *outStr = malloc(len * reps + 1);  // need malloc(), no getline() here
    if (outStr == NULL) {
        return NULL;
    }
    outStr[0] = '\0'; // start an empty string
    for (int i = 0; i < reps; i++) {
        strcat(outStr, myStr);
    }
    return outStr;
}
    
   

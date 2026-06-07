/* Write a static method named longestName that reads names typed by the user 
 and prints the longest name (the name that contains the most characters) in 
 the format shown below. Your method should accept a console Scanner and an 
 integer n as parameters and should then prompt for n names. The longest 
 name should be printed with its first letter capitalized and all subsequent 
 letters in lowercase, regardless of the capitalization the user used when 
 typing in the name. If there is a tie for longest between two or more 
 names, use the tied name that was typed earliest. Also print a message 
 saying that there was a tie.
*/

#include <stdio.h>
#include <stdlib.h> // memory allocation
#include <string.h> // strlen()

void longestName(int n);

int main() {
    int n;
    printf("enter number of names to enter: ");
    scanf("%d", &n);
    getchar(); // consume newline left by scanf
    longestName(n);
    return 0;
}

void longestName(int n) {
    char *name = NULL;
    char *longest = NULL;
    size_t size = 0; 

    size_t maxLen = 0;
    int tieFound = 0;    

    for (int i = 1; i <= n; i++) {
        printf("enter name: ");
        getline(&name, &size, stdin);
        
	// remove trailing newline
        name[strcspn(name, "\n")] = '\0';

        size_t currLen = strlen(name);
        
	if (currLen > maxLen) {
            maxLen = currLen;
            free(longest); // free old longest memory
            longest = malloc(currLen + 1); // assign new longest memory (+1 for the null terminator)
            if (longest == NULL) {
                free(name);
                return;
            }
            strcpy(longest, name);
            tieFound = 0;
        } else if (currLen == maxLen) { 
            tieFound = 1;
        }
    } 
    // print final required messages 
    printf("length of longest: %zu\n", maxLen);
    if (longest != NULL) {
        printf("longest name: %s\n", longest);
    } 
    if (tieFound) { 
        printf("There was a tie!\n");
    }
    // cleanup memory
    free(name);
    free(longest);
}


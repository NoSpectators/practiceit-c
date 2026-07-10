/* Write a method called wordCount that accepts a String as its parameter and 
 returns the number of words in the String. A word is a sequence of one or 
 more nonspace characters.
*/

#include <stdio.h>
#include <stdlib.h> // free()
#include <string.h> // strcspn()


int wordCount(const char *str); // const because input string is immutable

int main() {
    char *str = NULL; 
    size_t size = 0;
    int numWords; 
    
    printf("enter a string: ");
    // getline() allocates memory for me 
    if (getline(&str, &size, stdin) == -1) {
        free(str);
        return 0;
    }
    str[strcspn(str, "\n")] = '\0'; // remove trailing newline    
 
    numWords = wordCount(str);
    printf("Word count: %d\n", numWords);
    
    // clean up resources
    free(str);
      
    return 0;
}
    

int wordCount(const char *str) { 
    int total;
    int inWord; 
    
    total = 0;
    inWord = 0; // keep track if we are "inside" a word
    
    for (size_t i = 0; str[i] != '\0'; i++) {
        // if character is not a space  
        if (str[i] != ' ') { 
            //  if not in a word, we are in a new word 
            if (!inWord) { 
                total += 1;
                inWord = 1;
            } 
        //  if character is not a space
        } else {
            inWord = 0;
        }
    }
    return total;
}

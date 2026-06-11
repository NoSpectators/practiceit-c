/* Write a method called printPalindrome that accepts a Scanner for the 
 console as a parameter, and prompts the user to enter one or more words and 
 prints whether the entered String is a palindrome. For an added challenge, 
 make the code case-insensitive.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


void printPalindrome(char *word);

int main() {
    int numWords; 
    char *word = NULL;
    size_t size = 0;

    printf("enter num words: ");
    scanf("%d", &numWords);
    getchar(); // consume newline left by scanf

    for (int i = 1; i <= numWords; i++) { 
        printf("enter word: ");
        if (getline(&word, &size, stdin) == -1) {
            break;
        }
	word[strcspn(word, "\n")] = '\0'; // remove trailing newline
        printPalindrome(word);
    }
    free(word);
    return 0;
}

void printPalindrome(char *word) {
    int len = strlen(word);
    bool isPalindrome = true; 


    for (int i = 1; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("It is a palindrome!\n");
    } else {
        printf("Not a palidrome.\n");
    }
}

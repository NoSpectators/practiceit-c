/* Write a method named isAllVowels that returns whether a String consists 
 entirely of vowels (a, e, i, o, or u, case-insensitively). If every
 character of the String is a vowel, your method should return true. If any
 character of the String is a non-vowel, your method should return false.
 Your method should return true if passed the empty string, since it does 
 not contain any non-vowel characters.
*/


#include <stdio.h> 
#include <stdlib.h> // free();
#include <string.h> // strcspn();
#include <ctype.h> // tolower()

int is_vowel(char c);
int is_all_vowels(const char *s);

int main() {
    char *s = NULL; 
    size_t size = 0;
    int allV;

    printf("enter a string: ");
    // getline() allocates memory for me 
    if (getline(&s, &size, stdin) == -1) {
        free(s);
        return 0;
    }
    s[strcspn(s, "\n")] = '\0'; // remove trailing newline    
    
    allV = is_all_vowels(s);
    if (allV) {
        printf("all vowels!\n");
    } else {
        printf("does not contain all vowels.\n"); 
    }     
    
    // free up resources and close program
    free(s);
    return 0;
}

int is_vowel(char c) {
    c = tolower((unsigned char)c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int is_all_vowels(const char *s) { 
    if (s == NULL) {
        return 0;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (!is_vowel(s[i])) {
            return 0;
	}
    }
    return 1;
}

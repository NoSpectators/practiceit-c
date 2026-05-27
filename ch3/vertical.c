// Write a method called vertical that accepts a String as its parameter and 
// prints each letter of the string on separate lines.

#include <stdio.h>
#include <string.h> // strlen()

void vertical(char *str);

int main() {
    char buffer[100];
    printf("please enter full name: ");
    fgets(buffer, sizeof(buffer), stdin); 
    vertical(buffer);
    return 0;
}

void vertical(char *str) {
    // remove newline from fgets
    str[strcspn(str, "\n")] = '\0';
    
    for (int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }
}

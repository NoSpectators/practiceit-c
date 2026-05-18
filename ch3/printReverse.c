//  Write a subroutine called printReverse that accepts a string as its parameter 
//  and prints the characters in opposite order. If the empty string is passed, 
//  no output is produced. Your subroutine should produce a complete line of output.

#include <stdio.h>
#include <string.h>

void printReverse(char *str);

int main() {

    char buffer[100];
    printf("enter a string: ");
    fgets(buffer, sizeof(buffer), stdin);
    
    printReverse(buffer);
    return 0;
}

void printReverse(char *str) {
    int len = strlen(str);
    if (len == 0 || (str[0] == '\n' && str[1] == '\0')) { 
        return;
    }
    for (int i = len-1; i >= 0; i--) {
        printf("%c", str[i]); 
    }
    printf("\n");
}

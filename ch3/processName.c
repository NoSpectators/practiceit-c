/* Write a subroutine called process_name that prompts the user to enter
 his or her full name, then prints the name in reverse order 
 (i.e., last name, first name). 

 Assumes only a first and last name will be given. The code should 
 read the entire line of input at once and then break it apart 
 as necessary.
*/

#include <stdio.h>
#include <string.h> // strcspn

void processName(char *str);

int main() {
    char fullName[100];
    printf("please enter full name: ");
    fgets(fullName, sizeof(fullName), stdin); 
    processName(fullName);
    return 0;
}

void processName(char *fullName) {
    int spaceIdx = -1;

    // remove newline from fgets
    fullName[strcspn(fullName, "\n")] = '\0';

    // find space  
    spaceIdx = 0;
    for (int i = 0; fullName[i] != '\0'; i++) {
        if (fullName[i] == ' ') {
            spaceIdx = i;
            break;
        }
    }
    if (spaceIdx != -1) {
        printf("%s, ", fullName + spaceIdx+1); 
        printf("%.*s", spaceIdx, fullName); // print at most <spaceIdx> chars from <fullName>
    }
    printf("\n");
}

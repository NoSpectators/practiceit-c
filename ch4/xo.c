/* Write a static method named xo that accepts an integer size as a parameter 
 and prints a square of size by size characters, where all characters are 
 "o" except that an "x" pattern of "x" characters has been drawn from the 
 corners of the square. In other words, on the first line, the first and 
 last characters are "x"; on the second line, the second and second-from-last
 characters are "x"; and so on. If 0 or less is passed for the size, no 
 output should be produced.
*/

#include <stdio.h> 

void xo(int size);

int main() {
    int size;
    
    printf("enter square size: ");
    scanf("%d", &size); 
    xo(size);

    return 0;
}

void xo(int squareSize) { 

    //  guard user input
    if (squareSize <= 0) {
        return;
    }

    for (int i = 0; i < squareSize; i++) {
        for (int j = 0; j < squareSize; j++) {
            // main diagonal: j == i 
            // other diagonal: j == squareSize - i - 1
            if (j == i  || j == squareSize - i - 1) { 
                printf("x");
            } else {
                printf("o");
	    }
	}
        printf("\n");
    }
}

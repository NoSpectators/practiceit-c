// Write a method called randomLines that prints between 5 and 10 random 
// strings of letters (between "a" and "z"), one per line. Each string should 
// have random length of up to 80 characters.

#include <stdio.h>
#include <stdlib.h> // srand(), rand()
#include <time.h> // time()

#define MAX_LEN 80 // maximum length of random string 

void randomLines();


int main() { 
    // seed ONCE at start of execution 
    srand( (unsigned int)time(NULL));  
    randomLines();
}

void randomLines() {
    // get a random number of lines between 5 and 10 
    int numLines = (rand() % 6) + 5;
   
    // loop the required random number of times [5, 10]
    for (int i = 0; i < numLines; i++) {
        
        // determine random string length of characters ['a', 'z'] 
        int len = (rand() % MAX_LEN) + 1;    
     
        // allocate array + 1 byte for null terminator to hold the string (char array)
        char str[MAX_LEN+1]; 

        // create the char array
        for (int j = 0; j < len; j++) {
            str[j] = (char)((rand()%26 + 'a'));
        }
        str[len] = '\0';
        printf("generated string (length %d):\n%s\n", len, str);
    }
}

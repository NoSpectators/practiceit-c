/* Write a method named countCoins that accepts as its parameter a filename 
 whose data represents a person's money grouped into stacks of 
 coins. Your method should add up the cash values of all the coins and print 
 the total money at the end. 

 The input consists of a series of pairs of tokens, where each pair begins with an 
 integer and is followed by the type of coin, which will be either "pennies"
 (1 cent each), "nickels" (5 cents each), "dimes" (10 cents each), or "quarters" (25 cents each), 
 case-insensitively. A given coin might appear more than once on the same line.
*/

#include <stdio.h>
#include <string.h> // strcspn()
#include <ctype.h> // tolower()

int countCoins(const char *fname);
static int coin_value(const char *name);

int main() {
    char filename[256]; // declare an array (fixed memory size) 

    printf("enter a filename: ");
    if (fgets(filename, sizeof(filename), stdin) != NULL) {
        // remove the trailing newline
        filename[strcspn(filename, "\n")] = '\0'; 
        printf("You entered: %s\n", filename); 
    } else {
        fprintf(stderr, "Error reading input.\n"); 
        return 1;
    }

    countCoins(filename);
    return 0;
}

static int coin_value(const char *name) {
    if (strcmp(name, "penny") == 0 || strcmp(name, "pennies") == 0) return 1;
    if (strcmp(name, "nickel") == 0 || strcmp(name, "nickels") == 0) return 5;
    if (strcmp(name, "dime") == 0 || strcmp(name, "dimes") == 0) return 10;
    if (strcmp(name, "quarter") == 0 || strcmp(name, "quarters") == 0) return 25;
    return -1;
}

int countCoins(const char *fname) {
    FILE *fp = fopen(fname, "r");
    if (fp == NULL) {
        perror("Could not open file");
        return 1;
    }

    int count;
    char coin[32]; // fixed length array for coin type 
    long total_cents = 0;

    while (fscanf(fp, "%d %31s", &count, coin) == 2) {
        // convert to lowercase so "Dimes" and "dimes" work
        for (char *p = coin; *p; p++) {
            *p = (char)tolower((unsigned char)*p);
	}
        
        int value = coin_value(coin);
        if (value < 0) {
            fprintf(stderr, "Warning: unknown coin type '%s', skipping\n", coin);
            continue;
	}

	total_cents += (long)count * value;
    }
    fclose(fp); // close file
    printf("Total cents: %ld\n", total_cents);
    printf("Total money: $%ld.%02ld\n", total_cents/100, total_cents%100);

    return 0;
} 

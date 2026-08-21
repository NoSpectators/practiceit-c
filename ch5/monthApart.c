/* Write a method named monthApart that accepts four integer parameters
 representing two calendar dates. Each date consists of a month (1 through 12)
 and a day (1 through the number of days in that month [28-31]). The method
 returns whether the dates are at least a month apart. Assume that all dates
 in this problem occur during the same year. Note that the first date could
 come before or after (or be the same as) the second date. Assume that all
 parameter values passed are valid.
*/

#include <stdio.h>
#include <stdlib.h> // abs()

int monthApart(int m1, int d1, int m2, int d2);

int main() {
    int month1, day1, month2, day2;
    int solution, solution2;

    printf("Enter month 1 (1-12): ");
    scanf("%d", &month1); 
   
    printf("Enter day 1 (1-31): ");
    scanf("%d", &day1);
    
    printf("Enter month 2: ");
    scanf("%d", &month2);
    
    printf("Enter day 2 (1-31): "); 
    scanf("%d", &day2);
 
    solution = monthApart(month1, day1, month2, day2);
    if (solution) { 
        printf("at least 1 month apart!\n"); 
    } else {
        printf("sorry. within 1 month time.\n"); 
    } 

    return 0;
}

// month=1-12, day=1-31
// returns whether or not the dates provided are at least one month apart
int monthApart(int m1, int d1, int m2, int d2) {
    if (m1 == 0 || d1 == 0 || m2 == 0 || d2 == 0) {
        printf("incorrect format. try again.\n");
	return 0;
    }
    int monthDiff = abs(m1-m2);

    if (monthDiff == 0) {
        return 0;                          // same month
    } else if (monthDiff >= 2) { 
        return 1;                          // guaranteed to be at least 1 month apart
    } else {                               // one month apart, need to compare days 
        if (m1 < m2) {
            printf("month1 is less than month2\n");
            if (d2 >= d1) {                 
                return 1; 
            } else {
                return 0;
	    }
	} else if (m1 > m2) {
            if (d1 >= d2) {                 
                return 1;
	    } else {
                return 0;                  
            }
	}
    } 
}

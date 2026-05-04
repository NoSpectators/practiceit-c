/* Write a subroutine named inputBirthday that prompts the user 
 to enter a month, day, and year of birth, then prints the 
 birthdate in a suitable format.
*/

#include <stdio.h> 
   
void inputBirthday();

int main() {
    inputBirthday();
    return 0;
}

void inputBirthday() {
    int day, month, year;
    printf("Enter day: ");
    scanf("%d", &day); 
    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Your birthday (mm/dd/yy) is %02d/%02d/%02d\n", month, day, year % 100);

}

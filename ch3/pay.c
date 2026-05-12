/* Write a function named pay that accepts a real number for a TA's salary and an
 integer for the number of hours the TA worked this week, and returns how 
 much money to pay the TA. The TA should receive "overtime" pay of 1.5 
 normal salary for any hours above 8. */

#include <stdio.h>

double pay(double salary, int hoursWorked); 

int main() {
    double salary, totalPay;
    int hoursWorked;
    printf("enter TA salary: ");
    scanf("%lf", &salary);
    printf("enter hours worked: ");
    scanf("%d", &hoursWorked);
    totalPay = pay(salary, hoursWorked);
    printf("total pay for the week: %.2f\n", totalPay);
}
double pay(double salary, int hoursWorked) {
    double finalPay;
    if (hoursWorked <= 8) { 
        finalPay = hoursWorked * salary;
    } else {
        finalPay = (8.0 * salary) + (double)(hoursWorked-8) * (salary*1.5);
    }
    return finalPay;
} 

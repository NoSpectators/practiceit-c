/* Write a complete program named CollegeAdmit that reads 
 user input for a student's grade point average and SAT exam score, 
 and uses these values to decide whether the student is admitted to the 
 university. A GPA below 1.8 will cause the student to be rejected; an SAT 
 score below 900 will also cause a rejection. Otherwise the student is 
 accepted. If both the GPA and the SAT score are too low, print the message 
 about the GPA being too low.
*/

#include <stdio.h> 

int main() { 
    float gpa; 
    int sat;
    printf("enter your gpa:");
    scanf("%f", &gpa);
    printf("you entered %.1f\n", gpa);
    
    printf("enter your sat score:");
    scanf("%d", &sat);
    printf("you entered %d\n", sat);
    if (gpa < 1.8 || sat < 900) { 
        printf("you are rejected.\n");
    } else {
        printf("you are accepted!\n");
    } 
    return 0; 
}

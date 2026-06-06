/* Write a method called getGrade that accepts an integer representing a 
 student's grade in a course and returns that student's numerical course 
 grade. The grade can be between 0.0 (failing) and 4.0 (perfect). Assume 
 that scores are in the range of 0 to 100. For an added challenge, make your 
 method throw an IllegalArgumentException if the user passes a grade lower 
 than 0 or higher than 100.
*/

#include <stdio.h>

double getGrade(int grade);

int main() {
    int grade;
    printf("enter grade (1-100): ");
    scanf("%d", &grade); 
    double solution = getGrade(grade);
    printf("final grade: %.2lf\n", solution);
    return 0;
}

double getGrade(int score) { 
    if (score < 0 || score > 100) { 
        printf("Error: score must be between 0 and 100.\n");
        return -1.0; 
    } 
   
    if (score >= 90 && score <= 100) {
        return 4.0;
    } else if (score >= 80 && score <= 89) { 
        return 3.0;
    } else if (score >= 70 && score <= 79) {
        return 2.0;
    } else if (score >= 60 && score <= 69) {
        return 1.0;
    }
    return 0.0;
}

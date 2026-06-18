// Write a method named printGPA that calculates a student's grade point 
// average. The user will type a line of input containing the student's name, 
//  then a number of scores, followed by that many integer scores.

#include <stdio.h>
#include <stdlib.h> // free()
#include <string.h> // strcspn()

double printGPA(int scores); // function prototype

int main() {
    int scores;
    char *name = NULL;
    size_t size = 0;

    printf("number of scores? (enter integer) ");     
    scanf("%d", &scores);
    getchar(); // remove '\n'

    printf("enter student name: ");
    if (getline(&name, &size, stdin) == -1) {
        free(name);
        return 0;
    }
    name[strcspn(name, "\n")] = '\0'; // remove trailing newline
    

    printf("student: %s: gpa: %.2lf\n", name, printGPA(scores));
    free(name);
   
    return 0;
}

double printGPA(int scores) { 
    int score;
    double gpa = 0.0;
    double scoreTotal = 0.0;
   
    for (int i = 0; i < scores; i++) {
        printf("enter integer score: ");
        scanf("%d", &score);
        scoreTotal +=  (double) score;
    } 

    return scoreTotal / (double) scores;
}

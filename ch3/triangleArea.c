// Write a method called triangleArea that accepts the three side lengths of a 
// triangle (all real numbers) as parameters and returns the area of a 
// triangle with those side lengths.

#include <stdio.h>
#include <math.h> // sqrt()

double triangleArea(double s1, double s2, double s3);

int main() {
    double s1, s2, s3, area;
    printf("enter s1 length: ");
    scanf("%lf", &s1);
    printf("enter s2 length: ");
    scanf("%lf", &s2);
    printf("enter s3 length: ");
    scanf("%lf", &s3);
    area = triangleArea(s1, s2, s3);
    printf("area is: %.2lf\n", area);
    return 0;
}
double triangleArea(double s1, double s2, double s3) { 
    double s;
    //  heron's forula (because we don't necessarily have height)
    s = (s1 + s2 + s3)/2.0;
    return sqrt(s*(s-s1)*(s-s2)*(s-s3));
}

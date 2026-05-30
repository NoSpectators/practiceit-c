// Write a method called sphereVolume that accepts a radius (a real number) as 
// a parameter and returns the volume of a sphere with that radius.

#include <stdio.h>
#include <math.h> // acos() for PI, pow()

double sphereVolume(double radius);

int main() {
    double radius, v;

    printf("enter radius: ");
    scanf("%lf", &radius);
    v = sphereVolume(radius);
    printf("volume is: %.2f\n", v); 
    return 0;
}

double sphereVolume(double radius) { 
    return (4./3.) * acos(-1.0) * pow(radius,3);
}

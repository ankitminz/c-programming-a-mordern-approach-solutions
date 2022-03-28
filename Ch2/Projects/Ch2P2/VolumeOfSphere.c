// Write a program that computes the volume of a sphere with a lO-meter 
// radius. using the formula v = 4/3m3. Write the fraction 4/3 as 4.Of/3 
// .Of. (Try writing it as 4/3. What happens?) Hint: C doesn’t have 
// an exponentiation operator.so you‘ll need to multiply r by itself
// twice to compute r(cube).

#include <stdio.h>
#define PI 3.14

int main()
{
    float r;
    printf("Program to calculate volume of sphere\n");
    printf("Enter radius of sphere = ");
    scanf("%f", &r);
    printf("Volume = %.2f\n", (4.0 / 3.0) * PI * r * r * r);
    
    return 0;
}
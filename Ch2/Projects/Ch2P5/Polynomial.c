// Write a program that asks the user to enter a value for .r and then displays the value of the
// following polynomial:
// 3x^5 +2x^4 — 5x^3 — x^2 + 7x — 6
// Hint: C doesn’t have an exponentiation operator. so you’ll need to multiply .r by itself
// repeatedly in order to compute the powers ofx. (For example. x * x * x is x cubed.)

#include <stdio.h>

int main(void)
{
    int x;
    
    printf("Program to find value of polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 for a given value of x\n");
    printf("Enter value of x\n");
    scanf("%d", &x);
    int result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
    printf("Value of polynomial = %d\n", result);
    return 0;
}
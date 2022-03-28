// Modify the program of Programming Project 5 so that the polynomial is 
// evaluated using the following formula: ((((3x + 2)x-5)x— 1)x + 7)x-6
// Note that the modified program performs fewer multiplications. This 
// technique for evaluating polynomials is known as Horner’s Rule.

#include <stdio.h>

int main(void)
{
    int x;
    
    printf("Program to find value of polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 for given value of x\n");
    printf("Enter value of x\n");
    scanf("%d", &x);
    int result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("Value of polynomial = %d\n", result);
    return 0;
}
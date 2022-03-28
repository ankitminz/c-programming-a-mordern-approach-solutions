// Show how to modify the addfrac .c program of Section 3.2 so that the user 
// is allowed to enter fractions that contain spaces before and after each / character.

#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, resultNum, resultDenom;
    
    printf("Program to add two given fraction\n");
    printf("Enter first fraction like (num1 / denom1)\n");
    scanf("%d / %d", &num1, &denom1);
    printf("Enter second fraction like (num2 / denom2)\n");
    scanf("%d / %d", &num2, &denom2);
    resultNum = (num1 * denom2) + (num2 * denom1);
    resultDenom = denom1 * denom2;
    printf("Result after addition = %d / %d\n", resultNum, resultDenom);
    
    return 0;
}
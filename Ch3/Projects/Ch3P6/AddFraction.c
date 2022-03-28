// Modify the addfrac .c program of Seetion 3.2 so that the user enters both fractions at the
// same time. separated by a plus sign:
// Enter two fractions separated by a plus sign: 5/6+3/4
// The sum is 38/24

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2;
    
    printf("Enter two fractions separated by the plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
    int resultNum = (num1 * denom2) + (num2 * denom1);
    int resultDenom = denom1 * denom2;
    printf("The sum is %d/%d\n", resultNum, resultDenom);
    
    return 0;
}
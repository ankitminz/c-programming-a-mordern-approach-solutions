// Write a program that calculates the remaining balance on a loan after the first. second. and
// third monthly payments:
// Enter amount of loan: 20000.00
// Enter interest rate: 6.0
// Enter monthly payment: 386.66
// Balance remaining after first payment: $19713.34
// Balance remaining after second payment: $19425.25
// Balance remaining after third payment: $19135.71
// Disp1ay each balance with two digits after the decimal point. Him: Each month, the balance
// is decreased by the amount of the payment. but increased by the balance times the monthly
// interest rate. To find the monthly interest rate. convert the interest rate entered by the user to
// a percentage and divide it by 12.

#include <stdio.h>

int main(void)
{
    float loan = 0.0f, interest = 0.0f, monthlyPayment = 0.0f;
    
    printf("Program to find remaining balance on a loan after first, second and third monthly payments\n");
    printf("Enter amount of loan: $");
    scanf("%f", &loan);
    printf("Enter interest rate: $");
    scanf("%f", &interest);
    printf("Enter monthly payment: $");
    scanf("%f", &monthlyPayment);
    printf("\n");
    for(int count = 1; count <= 3; ++count)
    {
        loan -= monthlyPayment;
        if(count == 1)
        {
            printf("Balance remaining after first payment: ");
        }
        else if(count == 2)
        {
            printf("Balance remaining after second payment: ");
        }
        else if(count == 3)
        {
            printf("Balance remaining after third payment: ");
        }
        
        printf("%.2f\n", loan);
        interest = (interest / 100.0f) / 12.0f;
        loan += (loan * interest);
    }
}
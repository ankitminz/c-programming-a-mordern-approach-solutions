// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
// that amount using the smallest number of $20. $10. $5. and $1 bills:
// Enter a dollar amount: 2;
// $20 bills: 4
// $10 bills: 1
// $5 bills: 0
// $1 bills: 3
// Hint: Divide the amount by 20 to determine the number of $20 bills needed. and then reduce
// the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
// integer values throughout. not floating—point numbers.

#include <stdio.h>

int main(void)
{
    int amount;
    int twentyBills = 0, tenBills = 0, fiveBills = 0, oneBills = 0;
    
    printf("Program to find show given amount in $20, $10, $5 and $1\n");
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    if(amount >= 20)
    {
        twentyBills = amount / 20;
        amount %= 20;
    }
    
    if(amount >= 10)
    {
        tenBills = amount / 10;
        amount %= 10;
    }
    
    if(amount >= 5)
    {
        fiveBills = amount / 5;
        amount %= 5;
    }
    
    if(amount >= 1)
    {
        oneBills = amount / 1;
        amount %= 1;
    }
    
    printf("\n$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d", twentyBills, tenBills, fiveBills, oneBills);
    return 0;
}
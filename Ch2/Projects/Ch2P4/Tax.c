// Write a program that asks the user to enter a dollars-and-cents amount, 
// then displays the amount with 5% tax added:
// Enter an amount: 100.00
// With tax added: $105.00

#include <stdio.h>
#define TAX 5.0f

int main(void)
{
    float amount = 0.0f;
    
    printf("Program to find amount with tax\n");
    printf("Enter amount: $");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", ((TAX / 100.0) * amount) + amount);
    return 0;
}
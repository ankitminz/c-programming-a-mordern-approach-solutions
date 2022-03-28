// Write a program that reads an integer entered by the user and 
// displays it in octal (base 8):
// Enter a number between 0 and 32767: 1953
// In octal, your number is: 03641
// The output should be displayed using five digits, even if fewer 
// digits are sufficient. Hint: To convert the number to octal, first 
// divide it by 8; the remainder is the last digit of the octal
// number (1, in this case), Then divide the original number by 8 and 
// repeat the process to arrive at the next-to-last digit. 
// (printf is capable of displaying numbers in base 8. as we‘ll
// see in Chapter 7. so there’s actually an easier way to write this 
// program.)

#include<stdio.h>
#include<math.h>

int ConvertDecimalToOctal(int num);

int main()
{
    int num;
    
    printf("Program to convert given integer in octal\n");
    do
    {
        printf("Enter a number between 0 and 32767: ");
        scanf("%d", &num);
        if(num < 0 || num > 32767)
        {
            printf("\nInvalid input");
        }
    }
    while(num < 0 || num > 32767);
    
    printf("In octal, your number is: %5.5d\n", ConvertDecimalToOctal(num));
}


int ConvertDecimalToOctal(int num)
{
    int octal = 0;
    int i = 0;
    
    do
    {
        octal += (num % 8) * (int)pow(10, i);
        ++i;
        num /= 8;
    }
    while(num > 0);
    
    return octal;
}
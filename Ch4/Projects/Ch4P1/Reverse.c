// Write a program that asks the user to enter a two-digit number, then prints the number with
// its digits reversed. A session with the program should have the following appearance:
// Enter a two-digit number: 28
// The reversal is: 82
// Read the number using %d. then break it into two digits. Hint: If n is an integer, then n % 1O
// is the last digit in n and n / 10 is n with the last digit removed.

#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>

int FindReverse(int num);

int main()
{
    int num;
    
    printf("Enter a two digit number: ");
    scanf("%d", &num);
    printf("The reversal is: %d\n", FindReverse(num));
    
}


int FindReverse(int num)
{
    // Method to find reverse of given integer
    
    int reverse = 0;
    bool isNegative = false;
    int maxPow;
    
    if(num < 10 && num > -10)
    {
        return num;
    }
    
    if(num < 0)
    {
        isNegative = true;
        num = abs(num);
    }
    
    for(int i = 1; i <= INT_MAX; i++)
    {
        int temp = num / (int)pow(10, i);
        
        if(temp <= 9 && temp >= 1)
        {
            maxPow = i;
            break;
        }
    }
    
    for(int i = 0, j = maxPow; i <= maxPow; i++, j--)
    {
        if(num >= 10)
        {
            reverse += ((num / (int)pow(10, j)) * (int)pow(10, i));
        }
        else
        {
            reverse += num * (int)pow(10, i);
        }
        
        num %= (int)pow(10, j);
    }
    
    if(isNegative)
    {
        reverse *= -1;
    }
    
    return reverse;
}
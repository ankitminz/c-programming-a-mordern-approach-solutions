// Write a program that prompts the user to enter a telephone number in the 
// form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xxx:
// Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
// You entered 404.817.6900

#include <stdio.h>

int main(void)
{
    int phoneFirst, phoneMid, phoneEnd;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &phoneFirst, &phoneMid, &phoneEnd);
    printf("You entered %d.%d.%d", phoneFirst, phoneMid, phoneEnd);
    
    return 0;
}
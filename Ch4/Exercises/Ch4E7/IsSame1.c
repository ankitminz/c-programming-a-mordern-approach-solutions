// The algorithm for computing the UPC check digit ends with the following steps:
// Subtract 1 from the total.
// Compute the remainder when the adjusted total is divided by 10.
// Subtract the remainder from 9.
// It’s tempting to try to simplify the algorithm by using these steps instead:
// Compute the remainder when the total is divided by 10.
// Subtract the remainder from 10.
// Why doesn't this technique work?

#include<stdio.h>

int FindCheckDigit(int total)
{
    return 9 - ((total - 1) % 10);
}


int FindCheckDigitNew(int total)
{
    return 10 - (total % 10);
}


int main()
{
    int first;
    int firstFive1, firstFive2, firstFive3, firstFive4, firstFive5;
    int secondFive1, secondFive2, secondFive3, secondFive4, secondFive5;
    
    printf("Enter first digit of upc: ");
    scanf("%1d", &first);
    
    printf("Enter first five digits of upc: ");
    scanf("%1d%1d%1d%1d%1d", &firstFive1, &firstFive2, &firstFive3, &firstFive4, &firstFive5);
    
    printf("Enter second five digits of upc: ");
    scanf("%1d%1d%1d%1d%1d", &secondFive1, &secondFive2, &secondFive3, &secondFive4, &secondFive5);
    
    int firstSum = first + firstFive2 + firstFive4 + secondFive1 + secondFive3 + secondFive5;
    int secondSum = firstFive1 + firstFive3 + firstFive5 + secondFive2 + secondFive4;
    int total = (firstSum * 3) + secondSum;
    
    int original = FindCheckDigit(total);
    int new = FindCheckDigitNew(total);
    
    printf("Original method | New method\n%15d | %10d\n\n", original, new);
    if(original == new)
    {
        printf("Yes! Both method are same\n");
    }
    else
    {
        printf("Nope! Both methods are different\n");
    }
}
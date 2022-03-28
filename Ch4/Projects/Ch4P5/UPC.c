// Rewrite the upc.c program of Section 4.1 so that the user enters 11 
// digits at one time, instead of entering one digit, then five digits, 
// and then another five digits.
// Enter the first 11 digits of a UPC: 01380015173
// Check digit: 5

#include<stdio.h>

int FindCheckDigit(int i1, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9, int i10, int i11);

int main()
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11;
    
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, 
    &i6, &i7, &i8, &i9, &i10, &i11);
    printf("Check digit: %d\n", FindCheckDigit(i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11));
}


int FindCheckDigit(int i1, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9, int i10, int i11)
{
    int firstSum = i1 + i3 + i5 + i7 + i9 + i11;
    int secondSum = i2 + i4 + i6 + i8 + i10;
    int total = firstSum * 3 + secondSum;
    
    return 10 - (total % 10);
}
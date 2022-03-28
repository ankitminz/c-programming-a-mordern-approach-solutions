// Write a program that asks the user to enter the numbers from I to 16 (in any order) and then
// displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows. columns.
// and diagonals:
// Enter the numbers from 1 to 16 in any order:
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
// Row sums: 34 34 34 34
// Column sums: 34 34 34 34
// Diagonal sums: 34 34
// If the row. column. and diagonal sums are all the same (as they are in this example). the
// numbers are said to form a magic square. The magic square shown here appears in a 1514
// engraving by artist and mathematician Albrecht Diirer. (Note that the middle numbers in the
// last row give the date of the engraving.)

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;
    
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16);
    int rowSum1 = num1 + num2 + num3 + num4;
    int rowSum2 = num5 + num6 + num7 + num8;
    int rowSum3 = num9 + num10 + num11 + num12;
    int rowSum4 = num13 + num14 + num15 + num16;
    int colSum1 = num1 + num5 + num9 + num13;
    int colSum2 = num2 + num6 + num10 + num14;
    int colSum3 = num3 + num7 + num11 + num15;
    int colSum4 = num4 + num8 + num12 + num16;
    int diagonalSum1 = num1 + num6 + num11 + num16;
    int diagonalSum2 = num4 + num7 + num10 + num13;
    printf("Row sums: %d %d %d %d\n", rowSum1, rowSum2, rowSum3, rowSum4);
    printf("Column sums: %d %d %d %d\n", colSum1, colSum2, colSum3, colSum4);
    printf("Diagonal sums: %d %d\n", diagonalSum1, diagonalSum2);
    
    return 0;
}
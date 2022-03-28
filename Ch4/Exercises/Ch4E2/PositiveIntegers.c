// If i and j are positive integers, does ( -i)/j always have the same value as 
// -(i/j) '? Justify your answer.
// ANS: Yes in c99

#include<stdio.h>

int main()
{
    int i, j;
    
    printf("Program to check whether (-i) / j is always equal to -(i / j) if i and j are positive integers\n");
    printf("i: ");
    scanf("%d", &i);
    printf("j: ");
    scanf("%d", &j);
    printf("\n");
    
    printf("(-i) / j | -(i / j)\n%8d | %8d\n", (-i) / j, -(i / j));
}
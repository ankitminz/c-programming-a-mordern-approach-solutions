// Only one of the expressions ++i and i++ is exactly the same as
// (i += 1): which is it?
// Justify your answer.

#include<stdio.h>

int main()
{
    int i, j; // Let i = 4
    
    printf("Program to find whether ++i or i++ is exactly the same as i += 1\n\n");
    printf("Enter i: ");
    scanf("%d", &i);
    int temp = i;
    
    j = ++i;
    printf("%d %d\n", j, i); // 5 5
    
    i = temp;
    j = i++;
    printf("%d %d\n", j, i); // 4 5
    
    i = temp;
    j = i += 1;
    printf("%d %d\n", j, i); // 5 5
    
    // Thus ++i is exactly the same as i += 1
    
    return 0;
}
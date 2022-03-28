// Show the output produced by each of the following program fragments. 
// Assume that i, j and k are int variables.
// (a)i= 7; j = 8
// i *= j + 1;
// printf("%d %d",i, j);
// (b) i = j = k = 1;
// i += j += k;
// printf("%d %d %d", i, j, k);
// (c)i = 2; j = 1; k = 0;
// i *= j *= k;
// printf("%d %d %d", i, j, k);

#include<stdio.h>

int main()
{
    int i, j, k;
    
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j); // 63, 8
    
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k); // 3 2 1
    
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k); // 0 0 0
    
    return 0;
}
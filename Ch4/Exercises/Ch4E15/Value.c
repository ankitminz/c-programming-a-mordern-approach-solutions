// Give the values of i and j after each of the following expression 
// statements has been executed. (Assume that i has the value 1
// initially and j has the value 2.)
// (a) i += j;
// (b) i--;
// (c) i * j / i;
// (d) i % ++j;

#include<stdio.h>

int main()
{
    int i, j;
    
    i = 1;
    j = 2;
    
    printf("i j\n");
    printf("%d %d\n\n", i, j); // 1 2
    
    i += j;
    printf("i += j\ni j\n");
    printf("%d %d\n\n", i, j); // 3 2
    
    i--;
    printf("i--\ni j\n");
    printf("%d %d\n\n", i, j); // 2 2
    
    i * j / i;
    printf("i * j / i\ni j\n");
    printf("%d %d\n\n", i, j); // 2 2
    
    i % ++j;
    printf("i %% ++j\ni j\n");
    printf("%d %d\n", i, j); // 2 3
    
    return 0;
}
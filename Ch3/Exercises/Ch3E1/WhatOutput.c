// What output do the following calls ofprintf produce?
// (a) printf("%6d,%4d", 86, 1040);
// (b) printf("%12.5e", 30.253);
// (c) printf("%.4f", 83.162);
// (d) printf("%-6.2g", .0000009979);

#include <stdio.h>

int main(void)
{
    // I used underscores to describe whitespace
    printf("%6d,%4d\n", 86, 1040); // ____86,1040
    printf("%12.5e\n", 30.253); // 3.02530e+001
    printf("%.4f\n", 83.162); // 83.1620
    printf("%-6.2g\n", .0000009979); // 1e-006
    
    return 0;
}
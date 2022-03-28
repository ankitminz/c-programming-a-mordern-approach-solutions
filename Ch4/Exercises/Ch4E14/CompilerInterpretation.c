// Supply parentheses to show how a C compiler would interpret each of the following expressions
// (a)a*b-c*d+e
// (b)a/b%c/d
// (c)-a-b+c-+d
// (d)a*-b/c-d

#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);
    printf("e: ");
    scanf("%d", &e);
    
    printf("a * b - c * d + e | ((a * b) - (c * d)) + e\n");
    printf("%17d | %23d\n\n", a * b - c * d + e, ((a * b) - (c * d)) + e);
    
    printf("a / b %% c / d | ((a / b) %% c) / d\n");
    printf("%13d | %17d\n\n", a / b % c / d, ((a / b) % c) / d);
    
    printf("-a - b + c - +d | (((-a) - b) + c) - (+d)\n");
    printf("%15d | %23d\n\n", -a - b + c - +d, (((-a) - b) + c) - (+d));
    
    printf("a * -b / c - d | ((a * (-b)) / c) - d\n");
    printf("%14d | %22d\n", a * -b / c - d, ((a * (-b)) / c) - d);
    
    return 0;
}
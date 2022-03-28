// Why is it not a good idea for an identifier to contain more than one adjacent underscore (as
// in current balance. for example)?

#include <stdio.h>

int main()
{
    int current__balance = 4; // Legal but not obvious that how many underscores are there
    
    printf("current__balance = %d\n", current__balance);
    return 0;
}
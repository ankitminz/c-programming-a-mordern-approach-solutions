// Which of the following are not legal C identifiers?
// (a) 100_bott1es
// (b) _100_bottles
// (c) one_hundred_bottles
// (d) bottles_by_the_hundred_

#include <stdio.h>

int main()
{
    //int 100_bott1es = 4; Identifier can only start with character or underscore
    int _100_bottles = 4;
    int one_hundred_bottles = 4;
    int bottles_by_the_hundred_ = 4;
    
    printf("_100_bottles = %d\none_hundred_bottles = %d\nbottles_by_the_hundred = %d\n", _100_bottles, one_hundred_bottles, bottles_by_the_hundred_);
    return 0;
}
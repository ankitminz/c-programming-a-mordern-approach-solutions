// Computes dimensional weight of 12 x 10 x 8 box

#include <stdio.h>
#define ALLOWABLE_CUBIC_INCHES_PER_POUND 166

int main()
{
    int length = 12, width = 10, height = 8, volume = length * width * height;
    
    printf("Dimension of box is %d x %d x %d\n", length, width, height);
    printf("Volume of box (in cubic inches) = %d\n", volume);
    printf("Dimensional weight of box (in pounds) = %d", (volume + ALLOWABLE_CUBIC_INCHES_PER_POUND - 1) / ALLOWABLE_CUBIC_INCHES_PER_POUND);
    return 0;
}
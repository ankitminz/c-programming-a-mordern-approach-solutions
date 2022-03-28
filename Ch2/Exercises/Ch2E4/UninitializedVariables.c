// Write a program that declares several int and float variables—without initializing
// them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.)

#include <stdio.h>

int main()
{
    int int1, int2, int3, int4;
    float float1, float2, float3, float4;
    
    printf("int1 = %d\nint2 = %d\nint3 = %d\nint4 = %d\n\nfloat1 = %f\nfloat2 = %f\nfloat3 = %f\nfloat4 = %f", int1, int2, int3, int4, float1, float2, float3, float4);
    return 0;
}
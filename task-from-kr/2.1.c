#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // char, short, int, long
    // signed | unsigned
    printf("Long ");
    printf("%ld %ld\n", LONG_MIN, LONG_MAX); // -2147483648 2147483647
    printf("Unsigned 0 %llu\n", ULLONG_MAX);

    printf("Int ");
    printf("%d %d\n", INT_MIN, INT_MAX); // -2147483648 2147483647
    printf("Unsigned 0 %u\n", UINT_MAX);

    printf("Char ");
    printf("%d %d\n", CHAR_MIN, CHAR_MAX); // -128 127
    printf("Unsigned 0 %u\n", UCHAR_MAX);

    printf("Short ");
    printf("%d %d\n", SHRT_MIN, SHRT_MAX); // -32768 32767
    printf("Unsigned Short 0 %u\n", USHRT_MAX);

    printf("Float: ");
    printf("%f\n", FLT_MAX);
    printf("Unsigned float: %f\n", FLT_MAX);

    printf("Double: ");
    printf("%d\n", DBL_MAX_10_EXP);
    printf("Unsigned double: %f", DBL_MAX);

    // 1 byte = 8 bit
    // 8 bit = 255 value;
}
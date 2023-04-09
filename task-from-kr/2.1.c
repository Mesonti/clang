#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // char, short, int, long
    // signed | unsigned
    printf("Long ");
    printf("%d %d\n", LONG_MIN, LONG_MAX); // -2147483648 2147483647
    printf("Unsigned 0 %u\n", ULLONG_MAX);

    printf("Int ");
    printf("%d %d\n", INT_MIN, INT_MAX); // -2147483648 2147483647
    printf("Unsigned 0 %u\n", UINT_MAX);

    printf("Char ");
    printf("%d %d\n", CHAR_MIN, CHAR_MAX); // -128 127
    printf("Unsigned 0 %u\n", UCHAR_MAX);

    printf("Short ");
    printf("%d %d\n", SHRT_MIN, SHRT_MAX); // -32768 32767
    printf("Unsigned 0 %u\n", USHRT_MAX);
    printf("%d\n", sizeof(short));

    printf("Float: ");
    printf("%d\n", FLT_MAX);
    printf("Unsigned: %u\n", FLT_MAX);

    printf("Double: ");
    printf("%d\n", DBL_MAX_10_EXP);
    printf("Unsigned: %u", DBL_MAX);

    // 1 byte = 8 bit
    // 8 bit = 255 value;
}
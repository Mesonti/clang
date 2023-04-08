#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // char, short, int, long
    // signed | unsigned
    printf("Long ");
    printf("%d %d\n", LONG_MIN, LONG_MAX);
    printf("0 %u\n", ULLONG_MAX);

    printf("Int ");
    printf("%d %d\n", INT_MIN, INT_MAX);
    printf("0 %u\n", UINT_MAX);


    printf("Char ");
    printf("%d %d\n", CHAR_MIN, CHAR_MAX); // -128 127
    printf("0 %u\n", UCHAR_MAX);

    printf("Short ");
    printf("%d %d\n", SHRT_MIN, SHRT_MAX);
    printf("0 %u\n", USHRT_MAX);

    printf("Double ");
    printf("%d", );



}
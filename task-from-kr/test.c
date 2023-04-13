#include <stdio.h>
#include <limits.h>
#include <float.h>

int strle(char str[])
{
    int count = 0;
    while (str[count] != '\0')
    {
        ++count;
    }
    printf("%d", count);
    return count;

}

int main()
{
    char arr[] = {"long4343"};
    strle(arr);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int input;
    
    printf("Choose any actions:\n*\n\\\n+\n-\n");
    a = getchar();
    printf("Input a:");
    input = getchar();
    if (input == '*')
    {
        printf("a * b = %d", a * b);    
    }
    else if (input == '\\')
    {
        printf("a \\ b = %d", a / b);    
    }
    else if (input == '-')
    {
        printf("a - b = %d", a - b);    
    }
}

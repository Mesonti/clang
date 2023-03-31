#include <stdio.h>
#include <stdlib.h>

#define COUNT 5
// задача в том, чтобы заполнить массив одним пробелом
int main()
{
    int c;
    int arra[COUNT] = {' ', ' ', ' ', ' ', ' '};

    for (int i = 0; i < COUNT; ++i)
    {
        if (arra[i] == ' ')
        {
            arra[i] = '\0';
            printf("array[%d] = %c\n", i, arra[i]);
        }
        // array[1] = {' '};
        // array[2] = {' '};
        // array[3] = {' '};
        // array[4] = {' '};
        // array[5] = {' '};
        // есть вариант почистить массив от всех элементов, а затем заполнить его пробелом
    }
    // я понял как обновить массив -- просто обнули его, а потом положи новый элемент
    arra[COUNT] = ' ';
    printf("array update[%d] = 2%c2222\n", COUNT, arra[COUNT]);
}

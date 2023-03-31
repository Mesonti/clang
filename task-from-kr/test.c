#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int arr[5] = {' ', ' ', ' ', ' ', ' '};

    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] == ' ')
        {
            arr[i] = 0;
            printf("array[%d] = %d\n", i, arr[i]);
        }
        arr[i] = ' ';
        printf("array update[%d] = %d\n", i, arr[i]);
        // array[1] = {' '};
        // array[2] = {' '};
        // array[3] = {' '};
        // array[4] = {' '};
        // array[5] = {' '};
    }
}

#include <stdio.h>
#include <stdlib.h>

#define COUNT 5
// задача в том, чтобы заполнить массив одним пробелом
int main()
{
    // int c;
    // int arra[COUNT] = {' ', ' ', ' ', ' ', ' '};

    // for (int i = 0; i < COUNT; ++i)
    // {
    //     if (arra[i] == ' ')
    //     {
    //         arra[i] = '\0';
    //         printf("array[%d] = %c\n", i, arra[i]);
    //     }
    //     // array[1] = {' '};
    //     // array[2] = {' '};
    //     // array[3] = {' '};
    //     // array[4] = {' '};
    //     // array[5] = {' '};
    //     // есть вариант почистить массив от всех элементов, а затем заполнить его пробелом
    // }
    // // я понял как обновить массив -- просто обнули его, а потом положи новый элемент
    // arra[COUNT] = ' ';
    // printf("array update[%d] = 2%c2222\n", COUNT, arra[COUNT]);

    int key;             // объявляем целую переменную key
    system("chcp 1251"); // переходим в консоли на русский язык
    system("cls");       // очищаем окно консоли
    printf("Choose a number of item, 1 or 2: ");
    scanf("%d", &key); // вводим значение переменной key
    if (key == 1)      // если key равен 1
    {
        printf("\n Choose first item"); // вывод сообщения
    }                                   // если key - 2, то выводится 2
    else if (key == 2)
    {
        printf("\n Choose second item"); // вывод сообщения
    }                                    // иначе, если key равен 2
    else
    {
        printf("\n You are choose another");
    }
    getchar();
    getchar();
    return 0;
}

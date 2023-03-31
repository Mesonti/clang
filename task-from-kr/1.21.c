#include <stdio.h>
#include <stdlib.h>

#define TABSTOP 4

int main()
{
    int currentChar;
    int previousChar = '\0'; // для понимания повторяется ли он или нет
    while ((currentChar = getchar()) != EOF)
    {
        if (currentChar == '\t')
        {
            currentChar = '\0';
            putchar(' ');
        }

        if (previousChar == currentChar && currentChar == ' ')
        {
            continue;
        }
        putchar(currentChar); // положил пробел
        previousChar = currentChar;
    }
    return 0;
}

// представлю, что строка это массив, состоящий из символов ' ' (пробел), как убрать количество пробелов
// int arr[] = {' ', ' ', ' ', ' ', ' ', ' '};
// (a quick brown     fox) (4 spaces)
/*
Здесь есть стопы табуляции, но нет n позиции
Напишите программу entab, заменяющую строки из пробелов минимальным числом
табуляций и пробелов таким образом, чтобы вид напечатанного текста не изменился. Используйте те же
"стопы" табуляции, что и в detab. В случае, когда для выхода на очередной "стоп" годится один пробел, что
лучше — пробел или табуляция
// я не понимаю для чего стопы*/
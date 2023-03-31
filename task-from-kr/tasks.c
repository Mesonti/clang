#include <stdio.h>
#include <stdlib.h>

// проблема с N
#define N 100

int main()
{
    int currentWordCounter = 0;
    int counters[N] = {0};
    char symbol = '*';
    char arraySymbol[N] = {0};
    // ввод слова с клавиатуры
    char c;
    while (c = getchar())
    {
        // обработка символа
        if (c >= 'A' && c <= 'z')
        {
            ++currentWordCounter;
        }

        if (c == '\n' || c == ' ' || c == EOF)
        {

            if (currentWordCounter > 0)
            {
                ++counters[currentWordCounter];
                printf("Total: %d\n", counters[currentWordCounter]);
            }

            currentWordCounter = 0;
            if (c == EOF)
            {
                printf("End.\n");
                break;
            }
        }
    }

    // теперь надо вывести гистограмму
    for (int i = 1; i < N; ++i)
    {
        if (counters[i] > 0)
        {
            printf("%d: ", i);
            // выводится 1 раз
            putchar(symbol);
            printf("\n");
        }
    }
}

// сделать вывод звездочкой, звездочка задает длину
// слова с 10+ символами выводить с надписью 10+

// чтение кода хорошая практика для обучения
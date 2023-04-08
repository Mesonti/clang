#include <stdio.h>
#include <stdlib.h>

void remove_comments()
{
    int c, d;
    int inside_comment = 0;
    int inside_string = 0;

    while ((c = getchar()) != EOF)
    {
        if (!inside_comment)
        {
            if (c == '\"' && !inside_string)
            {
                inside_string = 1;
                putchar(c);
            }
            else if (c == '\"' && inside_string)
            {
                inside_string = 0;
                putchar(c);
            }
            else if (c == '\'' && !inside_string)
            {
                inside_string = 1;
                putchar(c);
            }
            else if (c == '\'' && inside_string)
            {
                inside_string = 0;
                putchar(c);
            }
            else if (c == '/' && !inside_string)
            {
                d = getchar();
                if (d == '*')
                {
                    inside_comment = 1;
                }
                else if (d == '/')
                {
                    putchar(c);
                    putchar(d);
                    while ((c = getchar()) != EOF && c != '\n')
                    {
                        putchar(c);
                    }
                    putchar('\n');
                }
                else
                {
                    putchar(c);
                    putchar(d);
                }
            }
            else
            {
                putchar(c);
            }
        }
        else
        {
            if (c == '*' && (d = getchar()) == '/')
            {
                inside_comment = 0;
            }
        }
    }
}

int main()
{
    remove_comments();
    return 0;

    // fjdsklf
}



/*
Напишите программу, убирающую все комментарии из любой Си-программы. Не забудьте
должным образом обработать строки символов и строковые константы. Комментарии в Си не могут быть
вложены друг в друга.*/
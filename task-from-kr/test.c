#include <stdio.h>

int power(int m, int n);

int main()
{

   int i;
   for (i = 0; i < 10; ++i)
      printf("[%d] %d %d \n", i, power(2, i), power(-3, i));
   return 0;

      int count;
      char asciiChar = '*';
      int n = 0;

      // first task
      for (int i = 0; i < 5; ++i)
      {
         putchar(asciiChar);
      }

      // second task
      while ((n = getchar()) != EOF)
      {
         count = n;
         for (int j = 0; j < count; ++j)
         {
            printf("loop [%d]\n", j);
            putchar(asciiChar);
         }

      }
}

 
int power(int base, int n)
{
   int i, p;
   p = 1;
   for (i = 1; i <= n; ++i)
      p = p * base;
      // p is changed on every iterarion
      printf("P is %d\n", p);
   return p;
   
}
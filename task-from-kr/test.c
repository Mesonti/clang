#include <stdio.h>

// ты если не хочешь говорить -- не говори, зачем говорить "а все тебе расскажи"
// а хочу ли я такое общество? хочу ли я общаться с такими людьми? я не хочу такое общество, я не хочу общаться
// с такими людьми как они. Работа правда приятная? Нет
// int power(int m, int n);

int main()
{

   // int i;
   // for (i = 0; i < 10; ++i)
   //    printf("[%d] %d %d \n", i, power(2, i), power(-3, i));
   // return 0;
   int n = 0;
   int count = 0;
   char asciiChar = '*';

   // first task
   for (int i = 0; i < 5; ++i)
   {
      putchar(asciiChar);
      
   }
   printf("\n");
   scanf("%d", &n);
   for (int j = 0; j < n; ++j)
   {
      putchar(asciiChar);
   }
}
// int power(int base, int n)
// {
//    int i, p;
//    p = 1;
//    for (i = 1; i <= n; ++i)
//       p = p * base;
//       // p is changed on every iterarion
//       printf("P is %d\n", p);
//    return p;

// }
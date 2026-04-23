/// Programm 1
/// Alfred Schwarz
/// 23.04.2026

#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
   int number = 0;
   do
   {
      printf("Geben Sie eine Zahl ein:");
      scanf("%d", &number);
      if (number > 0)
      {
         for (int i = 0; i < number; i++)
         {
            printf("%d", i);
         }
         printf("\n");
      }
      else
      {
         for (int i = 0; i > number; i++)
         {
            printf("%d", i);
         }
         printf("\n");
      };
   } while (number != 0);
}

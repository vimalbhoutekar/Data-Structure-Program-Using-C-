#include <stdio.h>

int main()
{

   int Year;

   printf("Enter The Year : ");

   scanf("%d", &Year);

   if (((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0))
   {
      printf("It is a leap year");
   }

   else
   {
      printf("It is not a leap year");
   }

   return 0;
}
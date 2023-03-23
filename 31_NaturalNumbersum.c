#include <stdio.h>

int main()
{
   int Number, Sum = 0;
   printf("Enter The Number : ");
   scanf("%d", &Number);
   for (int i = 1; i <= Number; i++)
   {
      Sum = Sum + i;
   }
   printf("Total Sum is : %d ", Sum);
   return 0;
}
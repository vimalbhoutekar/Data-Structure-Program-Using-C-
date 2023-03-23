#include <stdio.h>

int main()
{
    int Number, Sum = 0;
    int fact = 1;
    printf("Enter The Number : ");
    scanf("%d", &Number);

    for (int i = 1; i <= Number; i++)
    {
        if (Number % 2 == 0)
        {
            fact = fact * i;
            Sum = Sum + 1 / fact;
        }
    }

    printf("Sum of Series is : %d ", Sum);
    return 0;
}
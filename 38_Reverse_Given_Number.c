#include <stdio.h>

int main()
{
    int Number;
    int ReverseNumber = 0, Remainder;
    printf("Enter The Number : ");
    scanf("%d", &Number);
    while (Number != 0)
    {
        Remainder = Number % 10;
        ReverseNumber = ReverseNumber * 10 + Remainder;
        Number = Number / 10;
    }
    printf("Reverse Number is : %d ", ReverseNumber);
    return 0;
}
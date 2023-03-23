#include<stdio.h> 

int main()
{
    int Number;
    int SumOfDigit=0,Remainder;
    printf("Enter The Four Digit Number : ");
    scanf("%d",&Number);
    while(Number != 0)
    {
        Remainder = Number%10;
        SumOfDigit = SumOfDigit+Remainder;
        Number = Number/10;

    }
    printf("Four Digit Number Sum is : %d ",SumOfDigit);
     
     return 0;
}
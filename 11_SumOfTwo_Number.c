#include<stdio.h> 

int main()
{
     int FirstNumber,SecondNumber;
     int SumOfNumber;
     printf("Enter The First Number : ");
     scanf("%d",&FirstNumber);
     printf("Enter The Second Number : ");
     scanf("%d",&SecondNumber);
     SumOfNumber = FirstNumber + SecondNumber;
     printf("Sum Of Two Number is : %d ",SumOfNumber);
     return 0;
}
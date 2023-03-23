#include<stdio.h> 

int main()
{
     int Number;
     printf("Enter The Number : ");
     scanf("%d",&Number);
     if(Number>0)
     {
        printf("%d Number is Positive ",Number);
     }
     else if(Number<0)
     {
        printf("%d Number is Nagative ",Number);
     }
     else
     {
        printf("Number is Zero ");
     }
     return 0;
} 
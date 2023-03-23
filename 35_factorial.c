#include<stdio.h> 

int main()
{
     int Number,Factorial=1;
     printf("Enter The Number : ");
     scanf("%d",&Number);
     for (int i=1;i<=Number;i++)
     {
        Factorial = Factorial*i;
     }
     printf("Factrorial is : %d ",Factorial);
     
     return 0;
}

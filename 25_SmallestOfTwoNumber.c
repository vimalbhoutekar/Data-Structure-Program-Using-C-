#include<stdio.h> 

int main()
{
     int Number1,Number2;
     printf("Enter The First Number : ");
     scanf("%d",&Number1);
     printf("Enter The Second Number : ");
     scanf("%d",&Number2);
     if(Number1<Number2)
     {
        printf("Smallest Number is : %d ",Number1);
     }
     else
     {
        printf("Smallest Number is : %d ",Number2);
     }
     return 0;
}
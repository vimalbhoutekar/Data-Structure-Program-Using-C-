#include<stdio.h> 

int main()
{
     int Number,OddSum=0;
     printf("Enter The Number : ");
     scanf("%d",&Number);
     for(int i=1;i<=Number;i++)
     {
        if(i %2 != 0)
        {
            OddSum=OddSum+i;
        }
     }
     printf("Total Odd Number Sum is : %d ",OddSum);
     return 0;
}
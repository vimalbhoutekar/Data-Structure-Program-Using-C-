#include<stdio.h> 

int main()
{
     int Number,EvenSum=0;
     printf("Enter The Number : ");
     scanf("%d",&Number);
     for(int i=1;i<=Number;i++)
     {
        if(i %2 == 0)
        {
            EvenSum=EvenSum+i;
        }
     }
     printf("Total Even Number Sum is : %d ",EvenSum);
     return 0;
}
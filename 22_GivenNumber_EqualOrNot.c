#include<stdio.h> 

int main()
{
     int Number;
     int GivenNumber=45;
     printf("Given Number is : %d \n",GivenNumber);
     printf("Enter The Number : ");
     scanf("%d",&Number);
     if(Number == GivenNumber)
     {
        printf("Number is Equal ");
     }
     else
     {
        printf("Number is NOT Equal ");
     }
    

     return 0;
}

#include<stdio.h> 

int main()
{
      int Number1,Number2;
      int temp;
      printf("Enter The First Number is : ");
      scanf("%d",&Number1);
      printf("Enter The Second Number is : ");
      scanf("%d",&Number2);
      printf("Before Swaping Value is : \n");
      printf("FirstNumber is : %d \t SecondNumber is : %d \n",Number1,Number2);
      Number1 = Number1+Number2;
      Number2 = Number1-Number2;
      Number1 = Number1-Number2;
      printf("After Swaping Value is : \n");
      printf("FirstNumber is : %d \t SecondNumber is : %d \n",Number1,Number2);


      return 0;
}
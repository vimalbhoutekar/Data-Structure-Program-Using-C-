#include<stdio.h> 

int main()
{
      int Number1,Number2,Number3;
      int temp;
      printf("Enter The First Number is : ");
      scanf("%d",&Number1);
      printf("Enter The Second Number is : ");
      scanf("%d",&Number2);
      printf("Enter The Third Number is : ");
      scanf("%d",&Number3);
      printf("Before Swaping Value is : \n");
      printf("FirstNumber is : %d \t SecondNumber is : %d \t ThirdNumber is :%d \n",Number1,Number2,Number3);
      temp = Number1;
      Number1 = Number2;
      Number2 = Number3;
      Number3 = temp;
      printf("After Swaping Value is : \n");
      printf("FirstNumber is : %d \t SecondNumber is : %d \t ThirdNumber is :%d \n",Number1,Number2,Number3);


      return 0;
}
#include<stdio.h> 

int main()
{
      int Number1,Number2,Number3,Number4;
      int temp;
      printf("Enter The First Number is : ");
      scanf("%d",&Number1);
      printf("Enter The Second Number is : ");
      scanf("%d",&Number2);
      printf("Enter The Third Number is : ");
      scanf("%d",&Number3);
      printf("Enter The Fourth Number is : ");
      scanf("%d",&Number4);
      printf("Before Swaping Value is : \n");
      printf("FirstNumber is : %d \t SecondNumber is : %d \t ThirdNumber is :%d \t FourthNumber is : %d \n",Number1,Number2,Number3,Number4);
      temp = Number1;
      Number1 = Number2;
      Number2 = Number3;
      Number3 = Number4;
      Number4 = temp;
      printf("After Swaping Value is : \n");
      printf("FirstNumber is : %d \t SecondNumber is : %d \t ThirdNumber is :%d \t FourthNumber is : %d \n",Number1,Number2,Number3,Number4);


      return 0;
}
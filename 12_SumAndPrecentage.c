#include<stdio.h> 

int main()
{
     float Physics_Marks,Chemistry_Marks,Maths_Marks,Hindi_Marks,English_Marks;
     float SumOfSubject=0,Pracentage;
     printf("Enter The Physics Marks : ");
     scanf("%f",&Physics_Marks);
     printf("Enter The Chemistry Marks : ");
     scanf("%f",&Chemistry_Marks); 
     printf("Enter The Maths Marks : ");
     scanf("%f",&Maths_Marks);
     printf("Enter The Hindi Marks : ");
     scanf("%f",&Hindi_Marks);
     printf("Enter The English Marks : ");
     scanf("%f",&English_Marks);
     SumOfSubject = Physics_Marks+Chemistry_Marks+Maths_Marks+Hindi_Marks+English_Marks;
     Pracentage = SumOfSubject/5;
     printf("Total Subject Marks is : %f ",SumOfSubject);
     printf("Pracentage is : %.2f ",Pracentage);
     return 0;
}
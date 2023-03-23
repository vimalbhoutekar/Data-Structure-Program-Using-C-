#include<stdio.h> 

int main()
{
     float Base,Height;
     float Area_of_Right_AngleTriangle;
     printf("Enter The Right Angle Triangle Base :   ");
     scanf("%f",&Base);
     printf("Enter The Right Angle Triangle Height : ");
     scanf("%f",&Height);
     Area_of_Right_AngleTriangle = (Base*Height)/2;
     printf("Area of Right Angle Triangle is : %f",Area_of_Right_AngleTriangle);

     return 0;
}
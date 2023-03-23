#include<stdio.h> 

int main()
{
     float meter;
     float kilometer;
     printf("Enter The Meter : ");
     scanf("%f",&meter);
     kilometer = meter/1000;
     printf("Kilometer is : %f ",kilometer);
     return 0;
}
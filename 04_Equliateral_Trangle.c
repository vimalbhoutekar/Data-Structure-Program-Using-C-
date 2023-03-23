#include<stdio.h> 
#include<math.h>    // Used For sqrt() Function.

int main()
{
     int Side;
     float Area_of_Equliateral_Tringle;
     printf("Enter the Side of an Equliateral Tringle : ");
     scanf("%d",&Side);
     Area_of_Equliateral_Tringle = (sqrt(3)/4)*(Side*Side);
     printf("Area Of Equliateral Tringle Value is : %f ", Area_of_Equliateral_Tringle);
     return 0;
}
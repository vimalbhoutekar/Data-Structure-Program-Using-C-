#include <stdio.h>

int main()
{
    float Number, Sum = 0;
    int fact = 1;
    printf("Enter The Number : ");
    scanf("%f", &Number);

    for (int i = 1; i <= Number; i++)
    {
        fact = fact * i;        
        Sum =Sum + 1.0 / fact; 
    }

    printf("Sum of Series is : %.2f ",Sum);
    return 0;
}
#include <stdio.h>

double power(double a, int b)
{
    double result = 1.0;
    int i;

    if (b < 0)
    {
        a = 1.0 / a;
        b = -b;
    }

    for (i = 0; i < b; i++)
    {
        result =result * a;
    }

    return result;
}

int main()
{
    double a, result;
    int b;

    printf("Enter a number: ");
    scanf("%lf", &a);

    printf("Enter the exponent: ");
    scanf("%d", &b);

    result = power(a, b);

    printf("%.2f^%d = %.2f\n", a, b, result);

    return 0;
}

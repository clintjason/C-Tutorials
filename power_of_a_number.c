//This program only works well without non negative and fractional exponents
#include <stdio.h>
int main()
{
    double base;
    int exponent,i;

    double result = 1;

    printf("Enter a base number: ");
    scanf("%lf", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    if (exponent > 0)
    {     
        for(i = 0; i < exponent; ++i)
        {
            result *= base;
        }
        printf("\nAnswer = %lf\n\n", result);
    }
    else if (exponent < 0)
    {
        exponent = -exponent;
        for(i = 0; i < exponent; ++i)
        {
            result *= base;
        }
        result = 1 / result;
        printf("\nAnswer = %lf\n\n", result);
    }
    else{
        printf("\nAnswer = %lf\n\n", result);
    }
    
    return 0;
}
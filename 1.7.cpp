

#include <iostream>
#include <math.h>

int main()
{
    double x, i, f;
    printf("Enter the number:");
    scanf_s("%lf", &x);
    f = modf(x, &i);
    printf("Fractional part of a number: %f\nInteger part of a number: %0.0f\n", f, i);

    
}


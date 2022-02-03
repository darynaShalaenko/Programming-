
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

int main()
{
    double r, h, square, volume;
    printf("The radius = ");
    scanf_s("%lf", &r);
    printf("The hight of the base = ");
    scanf_s("%lf", &h);
    square = M_PI*pow(r,2);
    volume = square * h;
    printf("Volume of cylinder = %lf\n", volume);

}


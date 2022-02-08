

#include <iostream>
#include <math.h>

double lenght(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));


}

double square(double a, double b, double c)
{
    
    
    return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));


}

int main()
{
    double xa, ya;
    printf("A(x; y) = ");
    scanf_s("%lf %lf", &xa, &ya);

    double xb, yb;
    printf("\nB(x; y) = ");
    scanf_s("%lf %lf", &xb, &yb);

    double xc, yc;
    printf("\nC(x; y) = ");
    scanf_s("%lf %lf", &xc, &yc);

    double AB = lenght(xa, ya, xb, yb);
    double BC = lenght(xb, yb, xc, yc);
    double CA = lenght(xc, yc, xa, ya);
    double ABC = square(AB, BC, CA);
    
    printf("\nSquare = %lf", ABC);
}



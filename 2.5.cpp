

#include <iostream>
#include <math.h>

int Rosenbrock2d(double x, double y)
{
    
    
    return 100 * (pow(x, 2) - pow(y, 2) + pow(x - 1, 2));
    
}




int main()
{
    double x1, y1;
    printf("x1 = ");
    scanf_s("%lf", &x1);
    printf("y1 = ");
    scanf_s("%lf", &y1);
    double f1 = Rosenbrock2d(x1, y1);
    printf("f1 = %lf\n", f1);
    double x2, y2;
    printf("x2 = ");
    scanf_s("%lf", &x2);
    printf("y2 = ");
    scanf_s("%lf", &y2);
    double f2 = Rosenbrock2d(x2, y2);
    printf("f2 = %lf\n", f2);
    double x3, y3;
    printf("x3 = ");
    scanf_s("%lf", &x3);
    printf("y3 = ");
    scanf_s("%lf", &y3);
    double f3 = Rosenbrock2d(x3, y3);
    printf("f3 = %lf\n", f3);
    
}




#include <iostream>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, difference1, sum1, difference2, sum2;
    printf("Enter first group of numbers: ");
    scanf_s("%lf", &x1);
    scanf_s("%lf", &y1);
    printf("Enter second group of numbers: ");
    scanf_s("%lf", &x2);
    scanf_s("%lf", &y2);
    
    
    sum1 = x1 + y1;
    difference1 = x1 - y1;
    sum2 = x2 + y2;
    difference2 = x2 - y2;
    printf("DIFFERENCE OF FIRST GROUP: %lf\nDIFFERENCE OF SECOND GROUP: %lf\nSUM OF FIRST GROUP: %lf\nSUM OF SECOND GROUP: %lf\n", difference1, difference2, sum1, sum2);


}


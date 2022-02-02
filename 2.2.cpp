
#include <iostream>
#include <math.h>

int main() 
{
    
	double a, b, c;
	printf("a=");
	scanf_s("%lf", &a);
	printf("b=");
	scanf_s("%lf", &b);
	c = hypot(a, b);
    printf("c = %0.2f\n", c);


}


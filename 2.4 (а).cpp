

#include <iostream>
#include <math.h>



int main()
{
	double x, y;

	printf("x = ");
	scanf_s("%lf", &x);
	y = pow((pow(x, 2) + 1), 2);
	printf("y = %lf", y);
	
}


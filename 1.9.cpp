

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, y, Harmonic, Arithmetic;
	printf("Enter your numbers:   ");
	scanf_s("%lf", &x);
	scanf_s("%lf", &y);
	Harmonic = 2 / ((1 / x) + (1 / y));
	Arithmetic = (x + y) / 2;
	printf("Arithmetic mean:   %lf, %ef\nHarmonic mean:   %lf, %ef\n", Arithmetic, Arithmetic, Harmonic, Arithmetic);





}



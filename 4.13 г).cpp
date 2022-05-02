#include <iostream>
#include <math.h>
using namespace std;

int foo(double x, int n)
{
	double y = 0;
	for (int i = 0; i <= n; ++i)
		y += (n - i) * pow(x, n - i - 1);
	return y;


}



int main()
{
	int n;
	double x;
	cout << "Enter n : ";
	cin >> n;
	cout << "Enter x : ";
	cin >> x;
	cout << foo(x, n);

    return 0;
}


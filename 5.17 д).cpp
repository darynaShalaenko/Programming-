#include <iostream>
using namespace std;


double factorial(int k)
{
	if (k < 0)
		return 0;
	if (k == 0)
		return 1;
	else
		return k * factorial(k - 1);


}

int main()
{
	double x;
    int k, n;
    double y = 0;
    cout << "Enter n: ";
    cin >> n;
	cout << "Enter x: ";
	cin >> x;
	for (k = 0; k <= n; k++)
		y += pow(x, k) / factorial(k);
	cout << "Result: " << y;
}


#include <iostream>
#include <cmath>

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
	double s = 0, a, a1 = 0, a2 = 0;
	int k, n;
	cout << "Enter n: ";
	cin >> n;
	
	if (n <= 0) {
		cout << "ERROR";

	}
	for (k = 1; k <= n; k++)
	{
		if (k > 2) a2 = a1 ;
		if (k > 1) a1 = a;
		if (k < 3) a = 1 ;
		if (k < 2) a = 0;
		if (k == 3) a = 1;
		else if (k > 3) { a = a2 + (a1 / factorial(k - 1)); }
		s += factorial(k) * a;
	}
	cout << "Result: " << s;
	
    return 0;
}

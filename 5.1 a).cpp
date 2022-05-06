#include <iostream>
#include <vector>
using namespace std;
int main()
{
	
	double n;
	cin >> n;
	double a = 0;
	for (double i = 1; i > 0; i++) {
		double x = 1 / i;
        if (x < n) {
		    a += x;
			if (a > n) {
				cout << a;
				break;
			}
		}
	}
	return 0;
}


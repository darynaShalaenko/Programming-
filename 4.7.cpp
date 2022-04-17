#include <iostream>
#include <cmath>
using namespace std;

double factorial(double n)
{
    double y = 1;
    for (int i = 0; i <= n; ++i)
        y *= i;
    return y;
}

float foo(double x, double n)
{
    double y = 0;
    for (double i = 0; i <= n; i++)
        
        y += pow(x, i)/factorial(n);

    return y;
}

int main()
{
    double x, n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    cout << foo(x, n);
    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

double foo(double n, double x)
{
    double y = 0;
    for (int i = 0; i <= n; ++i)
        y += i * pow(x, i);
    return y;
}

int main()
{
    double n, x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    cout << foo(n, x);
    return 0;
}



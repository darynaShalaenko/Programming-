#include <iostream>
#include <cmath>
using namespace std;

double foo(int x, int n, int y)
{
    double f = 0;
    for (int i = n; i >= 0; i--)
        f += pow(x * x, i) * pow(y, i);
    return f;
}

int main()
{
    int x = 1, n = 4, y = 2;
    cout << "y = " << foo(x, n, y);

    return 0;
}

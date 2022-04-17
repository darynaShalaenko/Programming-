#include <iostream>
#include <cmath>
using namespace std;

double foo(int x, int n)
{
    double y = 0;
    for (int i = n; i >= 0; i--)
        y += pow(x, i);
    return y;
}

int main()
{
    int x = 2, n = 3;
    cout << "y = " << foo(x, n);

    return 0;
}


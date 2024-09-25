#include <iostream>
using namespace std;

double foo(int n) 
{
    double y = 0;

    for (int i = 0; i <= n; ++i)
        y += sqrt(3*i);
    return y;

}


int main()
{
    double n;
    cout << "Enter n: ";
    cin >> n;
    cout << foo(n);
    return 0;
}



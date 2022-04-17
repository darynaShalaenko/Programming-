#include <iostream>
using namespace std;

double foo(double n)
{  
    double y = 0;
    
    for (int i = 1; i <= n; ++i)
        y += sqrt(2);
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


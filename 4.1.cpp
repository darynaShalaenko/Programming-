#include <iostream>
#include <cmath>
using namespace std;
double foo(double x, int n)
{
    double y = 1;
    
    for (int i = 1; i <= n; i++)
        y *= sin(x);
        return y;

    


}


int main()
{
    double x;
    int n;
    cout << "Enter x: \n";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    cout << foo(x, n);

    return 0;
}



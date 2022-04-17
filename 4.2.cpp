#include <iostream>
#include <cmath>
using namespace std;
int grow(int n)
{
    int y = 1;
    for (int i = 1; i <= n; ++i)
        y *= i;
    return y;
}
int decrease(int n) 
{
    int y = 1;
    for (int i = n; i > 0; i--)
        y *= i;
    return y;

}


int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << grow(n) << "\n";
    cout << decrease(n);
    return 0;
}


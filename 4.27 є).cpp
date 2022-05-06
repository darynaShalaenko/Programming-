#include <iostream>
using namespace std;

double foo(double k)
{
    double p = 2 * sqrt(3) * ((pow(-1, k)) / (pow(3, k) * (2 * k + 1)));
    return p;


}


int main()
{
    double k;
    cin >> k;
    cout << foo(k);


    return 0;
}

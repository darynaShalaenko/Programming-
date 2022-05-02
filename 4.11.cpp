#include <iostream>
#include <cmath>
using namespace std;

int Arithmetic(int sum, int n)
{
    int res = sum / n;
    return res;
}
   
double Geometric(double product, double n)
{
    double res = pow(product, (1 / n));
    
    return res;
    
}

int main()
{
    cout << "a[**] = ";
    double a;
    double sum = 0;
    double n = 0;
    double product = 1 ;


    do
    {
        cin >> a;
        sum += a;
        n++;
        
        if (a == 0) {
            cout << "";
        }
        else {
            cout << "a[" << a << "] = ";
            product *= a;
        }
        
    
    } while (a != 0);

    cout << "Sum: " << sum << "\n";
    cout << "Arithmetic mean: " << Arithmetic(sum, n-1) << "\n";
    cout << "Geometric mean: " << Geometric(product, n-1);
    return 0;
}


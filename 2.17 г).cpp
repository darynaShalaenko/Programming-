#include <iostream>
#include <math.h>
using namespace std;

double foo(double x) {
    
    return pow(tan(x),-1);
}

double derivative(double x) {
    return 1 / (1 + pow(x, 2));
}


int main()
{
    double x;
    printf("Enter x: ");
    cin >> x;
    cout << "Function value = " << foo(x) << "\n" << "Derivative function = " << derivative(x);
    return 0;
}

#include <iostream>
#include<math.h>
using namespace std;
double softExponential(double a, double x)
{   
    double form;
    if (a < 0) {
        form = -(log(1 - a * (x + a))) / a;
    }
    else if (a == 0) {
        form = x;
    }
    else if (a > 0) {
        form = (((pow(2.71828, a * x) - 1) / a) + a);
    }
    return form;
}

double Derivative(double a, double x) {
    double res;
    if (a < 0) {
        res = 1 / (1 - a * x - a * a);
    }
    else if (a == 0) {
        res = 1;
    }
    else if (a > 0) {
        res = pow(2.71828, a * x);
    }
    return res;


}


int main()
{
    double a, x;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Value of function: " << softExponential(a, x) << "\n";
    cout << "Derivative function: " << Derivative(a, x);
    return 0;
    
}


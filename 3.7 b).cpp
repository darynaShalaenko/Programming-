
#include <cmath>
#include <iostream>
using namespace std;

double Diskriminant(double a, double b, double c)
{
    return b * b - 4 * a * c;
}

int main()
{
    double a, b, c, x1, x2;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    if (Diskriminant(a, b, c) == 0) {

        x1 = -b / 2 * a;
        cout << "The equation has one root: " << sqrt(x1);

    }
    else if (Diskriminant(a, b, c) < 0) {
        cout << "The equation hasn't roots";
    }
    else if (Diskriminant(a, b, c) > 0) {
        x1 = -b + sqrt(Diskriminant(a, b, c)) / 2 * a;
        x2 = -b - sqrt(Diskriminant(a, b, c)) / 2 * a;
        cout << "The equation has two roots: " << sqrt(x1) << ", " << sqrt(x2);
    }


    return 0;
}

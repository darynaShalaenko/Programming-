#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    double a1 = 0, a2 = 1, b1 = 1, b2 = 0, a, b, s = 0;
    if (n <= 0) {
        cout << "ERROR!!!";
    }
    for (int i = 1; i <= n; i++) {
        if (i > 2) {
            a2 = a1;
            b2 = b1;
        }
        if (i > 1) {
            a1 = a;
            b1 = b;
        }
        if (i < 2) {
            a = 0;
            b = 1;
        }
        if (i < 3) {
            a = 1;
            b = 0;
        }
        else if (i >= 3) {
            a = (a1 / i) + a2 * b;
            b = b1 + a1;
        }
        s += pow(2, i) / (a + b);
    }
    cout << "Result: " << s;
    return 0;
}



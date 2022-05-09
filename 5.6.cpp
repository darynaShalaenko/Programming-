#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    double b, x;
    cout << "Enter b: ";
    cin >> b;
    double res = 0;
    for (int i = 0; i <= n; i++) {
        if (i == 0) res = b;
        if (i == 1) res = b + 1 / b;
        if (i >= 2) res = b + ((pow(b, i - 1)+(i-2)*pow(b,i-3)) / (pow(b, i) + (i - 1) * pow(b, i - 2)));
        
    }
    cout << "RESULT: " << res << "\n";
    return 0;
}

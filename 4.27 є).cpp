#include <iostream>

using namespace std;


int main()
{
    int i;
    double E, a = 1.0, s = 1.0;
    cin >> E;
    for ( i = 0; fabs(a *= (double) pow(-1, i) / (pow(3, i) * (2 * i + 1))) >= E; i++) {

        s += a;
    }
    double x = 2 * pow(3, 1 / 2);
    cout << s << endl;

    return 0;
}

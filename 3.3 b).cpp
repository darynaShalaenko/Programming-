

#include <iostream>
using namespace std;
int main()
{
    double a, b, c;

    cin >> a >> b >> c;
    if ((a < pow(2, 21) && b < pow(2, 21) && c < pow(2, 21))) {

        cout << a * b * c;

    }
    else {

        cout << " ";

    }
}


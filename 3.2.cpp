#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, a, b, c;
    cin >> x;
    a = x % 10;
    b = (x % 100) / 10;
    c = (x % 1000) / 100;


    if (a != b && a != c && b != c) {
        cout << "1) " << a << b << c << "\n" << "2) " << b << a << c << "\n" << "3) " << c << a << b << "\n" << "4) " << b << c << a << "\n" << "5) " << c << b << a << "\n" << "6) " << a << c << b; //  n! 

    }
    else {
        cout << "ERROR";
    }

    return 0;
}



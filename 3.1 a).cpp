#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x, a, b, c;
    cin >> x;
    a = x[2];
    b = x[1];
    c = x[0];
    cout << "Units:    " << a << "\n" << "Tens:     " << b << "\n" << "Hundreds: " << c;


    return 0;
}


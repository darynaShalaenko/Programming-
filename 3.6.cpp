#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    if (x != y && y != z && x != z) {
        double m;
        m = max(abs(x), abs(y));
        if (m > abs(z)) {
            cout << "The largest number is: " << m << "\n";
        }
        else {
            cout << "The largest number is: " << z << "\n";
        }
        double n;
        n = min(abs(x), abs(y));
        if (n < abs(z)) {
            cout << "The smallest number is: " << n << "\n";
        }
        else {
            cout << "The smallest number is: " << z << "\n";
        }

    }
    
    
    
    
    
    return 0;
}


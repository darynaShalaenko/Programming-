#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    if (x != y) {
        cout << "This number is the largest: " << max(x, y) << "\n";
        cout << "This number is the smallest: " << min(x, y);
    }
    
    if (x == y) {

        cout << "This numbers is equal";
    }
    return 0;
}


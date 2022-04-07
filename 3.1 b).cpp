#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, a, b, c;
    cin >> x;
    a = x%10;
    b = (x%100)/10;
    c = (x%1000)/100;
    
    cout << a + b + c;

    return 0;
}

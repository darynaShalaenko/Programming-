#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
double foo(int m)
{
    
    double y = 0;
    for(int i = 0; i<m; ++i)
        if (pow(4, i) <= m) {

            y = i;
            
        }
    return y;
}


int main()
{
    double m;
    cin >> m;
    cout << foo(m);
    return 0;
}


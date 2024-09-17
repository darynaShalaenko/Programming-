#include <iostream>
#include <string>
using namespace std;

int main()
{
    double a, b, c;
    
    cin >> a >> b >> c;
    if ((a < pow(2, 10) && b < pow(2, 10) && c < pow(2, 10))) {

        cout << a * b * c;

    }
    else {
         
        cout << " ";

    }
    
    


    return 0;
}


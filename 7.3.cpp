#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    
    double numbers[10];
    for (int i = 0; i < 10; i++) {
        cout << "[" << i + 1 << "]" << ":";
        cin >> numbers[i];
        
    }
    cout << "Array: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";

    }
    double s = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] < exp(1.0))
            s += numbers[i];
 
        
    }
    cout << "\n" << s;
    return 0;
}


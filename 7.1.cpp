#include <iostream>
using namespace std;

int main()
{
    double x;
    cout << "Enter x: ";
    cin >> x;
    int numbers[5] = { 1,5,10,4,6 };
    for (int i = 0; i < 5; i++) {
        if (numbers[i] < x) {
            cout << numbers[i] << "\n";
        }
    }


    return 0;
}


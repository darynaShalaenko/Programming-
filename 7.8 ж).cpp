#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    const int size = 10;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        cout << "[" << i + 1 << "]" << ":";
        cin >> numbers[i];

    }
    int n = 0;
    for (int i = 0; i < size; i++) {
        int b5 = (numbers[i] >> 5) & 1;
        int b6 = (numbers[i] >> 6) & 1;
        int b8 = (numbers[i] >> 8) & 1;
        if (b5 || b6 || b8 == 1) {
            n++;
        }

    }
    cout << n;
    return 0;
}



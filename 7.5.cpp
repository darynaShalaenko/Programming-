#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    for (int i = 0; i < 50; i++) {

            cout << "[" << i + 1 << "]" << ": ";
            cin >> arr[i];
            if (arr[i] == 0) {
                break;
            }
    }
    int a = 0;
    int b = 0;
    for (int i = 0; i < 50; i++) {
        if (arr[i] == 0) {
            break;

        }
        if (arr[i] % 2 == 0) {
            a++;
            
        }
        if (arr[i] % 2 != 0) {
            b++;
            
        }
    }
    cout << "Odd numbers: " << b << " " << "\n";
    cout << "Even numbers: " << a << " ";

    return 0;
}
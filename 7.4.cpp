#include <iostream>
using namespace std;



int main()
{
    
    const int size = 5;
    int arr[size];
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
        
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "\n" << "Maximum element: " << max;
    return 0;
}


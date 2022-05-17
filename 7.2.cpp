#include <iostream>
using namespace std;

int main()
{
    const int size = 4;
    int numbers[size] = { 5, 112, 4, 3 };
    for (int i = 0; i < size; i++) {
        cout << numbers[size - i - 1] << " ";
    }
    

    return 0;
}


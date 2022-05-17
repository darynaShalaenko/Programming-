

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    const int size = 20;
    double arr[size];
    for (int i = 0; i < size; i++) {

        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
        if (arr[i] == 0) {
            break;
        }
    }
    int n1 = 0, n2 = 0;
    double a = 0, b = 1;
    double res1, res2;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            break;

        }
        a += arr[i];
        n1++;
        res1 = a / n1;
        
        
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            break;

        }
        n2++;
        b *= arr[i];
        res2 = pow(b, 1/n2);
        
    }

    cout << " Середнє арифметичне =  " << res1;
    cout << " Середнє геометричне =  " << res2;
    return 0;
}


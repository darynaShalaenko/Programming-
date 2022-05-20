#include <iostream>
using namespace std;

int main()
{
    double a[3][3] = {
        {1.0,2,3},
        {4,5,6},
        {7,8,9}
    };
    int x, y;
    double b;
    cout << "Enter i: ";
    cin >> x;
    cout << "Enter j: ";
    cin >> y;
    cout << "Enter a: ";
    cin >> b;
    a[x][y] = b;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << '\t' << a[i][j];
        }
        cout << endl;
    }


    return 0;
}


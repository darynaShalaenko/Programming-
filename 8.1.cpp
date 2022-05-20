#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int N, M;
    cin >> N;
    cin >> M;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == N) {
                a[i][j] = M;
            }
            
        }
    }
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



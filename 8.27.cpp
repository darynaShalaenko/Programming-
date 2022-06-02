#include <iostream>
#include<stack>
using namespace std;

const int MAX = 100;

auto Swap(int mat[][MAX], int n)
{
    
    int row = 0;

    
    for (int j = 0; j < n; j++) {

        stack<int> s;
        int i = row, k = j;
        while (i < n && k >= 0)
            s.push(mat[i++][k--]);

 
        i = row, k = j;
        while (i < n && k >= 0) {
            mat[i++][k--] = s.top();
            s.pop();
        }
    }

    
    int column = n - 1;
    for (int j = 1; j < n; j++) {

        
        stack<int> s;
        int i = j, k = column;
        while (i < n && k >= 0)
            s.push(mat[i++][k--]);

        
        i = j;
        k = column;
        while (i < n && k >= 0) {
            mat[i++][k--] = s.top();
            s.pop();
        }
    }
}


void print_matrix(int mat[][MAX], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}


int main()
{
    int mat[][MAX] = { { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 },
                     { 9, 10, 11, 12 },
                     { 13, 14, 15, 16 } };
    int n = 4;
    Swap(mat, n);
    print_matrix(mat, n);
    return 0;
}
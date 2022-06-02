#include <iostream>
#include <cstdio>
#include <ctime>
#include <iomanip>
using namespace std;

int** Create(int n, int m) {
    int** array = (int**)malloc(n * sizeof * array);
    for (int i = 0; i < n; i++) {
        array[i] = (int*)calloc(m, sizeof * *array);
    }
    return array;
}

int** Input(int n, int m) {
    int** array = Create(n, m);
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            array[row][col] = rand() % 20;
        }
    }
    return array;
}

void Delete(int** array, int n) {
    for (int i = 0; i < n; i++)
        free(array[i]);
    free(array);
}

void Print(int** array, int n, int m) {
    printf("Our matrix: \n");
    int min_norm = -1, cur_norm = 0, n_min;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << array[row][col] << " " << ends;
        }
        cout << "\n";
    }
    for (int row = 0; row < n; row++) {
        cur_norm = 0;
        for (int col = 0; col < m; col++) {
            cur_norm += array[row][col] * array[row][col];
        }
        if (cur_norm <= min_norm) {
            min_norm = cur_norm;
            cout << "\nNow min norm = ";
            cout << min_norm;
            n_min = row;
            cout << "\nNow min row =  ";
            cout << n_min;
        }
        if (min_norm == -1) {
            min_norm = cur_norm;
            n_min = row;
            cout << "\nNow min norm = ";
            cout << min_norm;
            cout << "\nNow min row = ";
            cout << n_min;
        }
    }
    cout << "\nChanged matrix: \n";
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cout << array[row][col] << " " << ends;
        }
        cout << "\n";
        if (row == n_min) {
            n++;
            for (int col = 0; col < m; col++) {
                array[row][col] = rand() % 20;
                cout << array[row][col] << " " << ends;
            }
            cout << "\n";
        }
    }
    cout << endl;
}

int main() {
    int n = 3, m = 3;
    int** array = Input(n, m);
    Print(array, n, m);
    Delete(array, n);
}

#include <iostream>
using namespace std; 

float** Input(int n, int m)
{
    float** mas = new float* [n];
    for (int i = 0; i < n; ++i)
        mas[i] = new float[m];


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mas[i][j];
        }
    }
    return mas;
}

float** Empty(int n, int m)
{
    float** mas = new float* [n];
    for (int i = 0; i < n; ++i)
        mas[i] = new float[m];


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mas[i][j] = 0;
        }
    }
    return mas;
}

void Print(float** mas, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
            cout << mas[i][j] << " ";

    }

}

void Delete(float** mas, int n)
{
    for (int i = 0; i < n; i++)
        delete[] mas[i];
    delete[] mas;
}

int main()
{
    int n, m, c, k, b;
    printf("Enter the size of matrix ");
    scanf_s("%d %d", &n, &m);
    printf("Enter the count of rows you want to add  ");
    scanf_s("%d", &b);

    while (true)
    {
        printf("Enter the postiton, you want to begin adding to  ");
        scanf_s("%d", &k);

        if (k <= n)
            break;

    }

    k -= 1;
    c = n + b;

    float** mas = Input(n, m);
    float** mas2 = Empty(c, m);

    for (int i = 0; i < k; i++)
        for (int j = 0; j < m; j++)
            mas2[i][j] = mas[i][j];

    for (int i = 0; i < n - k; i++)
        for (int j = 0; j < m; j++)
            mas2[i + k + b][j] = mas[i + k][j];

    for (int i = k; i <= k + b - 1; i++)
    {
        printf("Enter the row, you want to add ");
        for (int j = 0; j < m; j++)
            cin >> mas2[i][j];
    }

    Print(mas2, c, m);

    Delete(mas, n);
    Delete(mas2, n);

    
    printf("Enter the size of matrix ");
    scanf_s("%d %d", &n, &m);
    while (true)
    {
        printf("Enter the postiton, you want to add ");
        scanf_s("%d", &k);

        if (k <= n)
            break;

    }
    k = k - 1;
    c = n + 1;

    

    for (int i = 0; i < k; i++)
        for (int j = 0; j < m; j++)
            mas2[i][j] = mas[i][j];


    for (int i = 0; i < n - k; i++)
        for (int j = 0; j < m; j++)
            mas2[i + k + 1][j] = mas[i + k][j];

    for (int i = k; i <= k; i++)
    {
        printf("Enter the row, you want to add ");
        for (int j = 0; j < m; j++)
            cin >> mas2[i][j];
    }

    Print(mas2, c, m);

    return 0;


}

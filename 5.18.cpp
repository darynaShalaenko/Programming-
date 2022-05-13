
#include <iostream>
#include <string>
using namespace std;

int fib(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        a = a + b;
        b = a - b;
    }
    return a;
}

int main()
{
    size_t k;
    cin >> k;
    string a, b, c, d;
    for (size_t u = 1;; ++u) {
        for (int i = 0; i <= 5;i++)
        
        a += to_string(int(pow(10, i)));

        if (a.size() >= k) {
            break;
        }
    }
        cout << a << "\n";
        cout << a[k-1] << "\n";
    
    for (size_t u = 1;; ++u) {
        

        b += to_string(u);

        if (b.size() >= k) {
            break;
        }
    }
        cout << b << "\n";
        cout << b[k - 1] << "\n";
    for (size_t u = 1;; ++u) {
        

        c += to_string(int(pow(u, 2)));

        if (c.size() >= k) {
            break;
        }
    }
        cout << c << "\n";
        cout << c[k - 1] << "\n";
    for (size_t u = 0;; ++u) {


        d += to_string(int(fib(u)));

        if (d.size() >= k) {
            break;
        }
    }
        cout << d << "\n";
        cout << d[k - 1];
    
    
    return 0;
}



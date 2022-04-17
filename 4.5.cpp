#include <iostream>
#include <cmath>
using namespace std;

double factorial(int n)
{
     int y = 1;
     if (n % 2 == 0)
         for (int i = n; i > 0; i--) {
             if (i % 2 == 0) {
                 y *= i;
             }
         }
     if (n % 2 != 0)
         for (int i = n; i > 0; i--) {
             if (i % 2 != 0) {
                 y *= i;
             }
         }
     return y;
    
        
   
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << factorial(n);
    return 0;
}


#include <iostream>
using namespace std;

double suma(const int size ,double vector1[], double vector2[]) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += vector1[i] + vector2[i];

    }
    return sum;
}
double multipl(const int size, double vector1[], double vector2[]) {
    double mult = 0;
    for (int i = 0; i < size; i++) {
        mult += vector1[i] * vector2[i];

    }
    return mult;
}


int main()
{
    setlocale(LC_ALL, "");
    const int size = 3;
    double vector1[size];
    double vector2[size];
    for (int i = 0; i < size; i++) {
        cout << "Координата № " << i + 1 << " для першого вектора: ";
        cin >> vector1[i];

    }
    for (int i = 0; i < size; i++) {
        cout << "Координата № " << i + 1 << " для другого вектора: ";
        cin >> vector2[i];

    }
    cout << "Сума векторів = " << suma(size, vector1, vector2) << "\n";
    cout << "Скалярний добуток = " << multipl(size, vector1, vector2);
    return 0;
}


#include <string>
#include <math.h>
#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, square, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	square = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Высота к а :" << square * 2 / a << endl;
	cout << "Высота к b :" << square * 2 / b << endl;
	cout << "Высота к c :" << square * 2 / c << endl;



}


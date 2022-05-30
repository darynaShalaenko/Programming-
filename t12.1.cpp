#include <iostream.h
>
#include <cmath>


int main1() {
	double x, y;
	std::cin >> x;
	std::cin >> y;
	std::cout << std::fixed << "x^y=" << pow(x, y) << std::endl;
	std::cout << std::scientific << "x^y=" << pow(x, y);
	return 0;

}

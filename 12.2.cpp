﻿
#include <iostream.h>
#include <cstring>

using namespace std;

const int N = 10;

int main2() {
	char str[N];
	unsigned long long sums = 0L;
	unsigned long long x;
	size_t err;
	char* err2;
	while (cin.get(str, 10)) {
		
		x = strtoull(str, &err2, N);
		sums += x;
	}
	cout << "sum" << sums << "\n";
	return 0;
}

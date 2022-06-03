#include <iostream>
#include <list>

using namespace std;

namespace P {

	template <class T>
	class Polynom {
		list<T> a;

	public:
		Polynom() {}

		void input();
		void show();

		Polynom<T> add(const Polynom<T>& x);
		Polynom<T> mult(const Polynom<T>& x);

		T value(T x);
	};

	template <class T>
	void Polynom<T>::input() {
		int n;
		cin >> n;
		T x;
		for (int i = 0; i < n; i++) {
			cout << "a[" << i << "]=";
			cin >> x;
			a.push_back(x);
		}
	}

	template <class T>
	void Polynom<T>::show() {
		int i = 0;
		for (typename list<T>::const_iterator it = a.begin(); it != a.end(); ++it, ++i) {
			cout << *it << "*x^" << i << "+";
		}
	}

	template <class T>
	Polynom<T> Polynom<T>::add(const Polynom<T>& x) {
		typename list<T>::const_iterator it1 = x.a.begin();
		typename list<T>::const_iterator it2 = a.begin();
		Polynom<T> res;
		while (it1 != x.a.end() && it2 != a.end()) {
			T c = *it1 + *it2;
			res.a.push_back(c);
			it1++;
			it2++;
		}

		while (it1 != x.a.end()) {
			res.a.push_back(*it1);
			it1++;
		}
		while (it2 != a.end()) {
			res.a.push_back(*it2);
			it2++;
		}
		return res;
	}


}

int main() {
	using namespace P;
	Polynom<int> p1, p2, p3;

	p1.input();
	p1.show();
	p2.input();
	p3 = p1.add(p2);
	p3.show();

}
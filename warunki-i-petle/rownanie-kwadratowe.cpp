#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	cout << "Podaj wspolczynniki a, b i c: ";
	if (!(cin >> a >> b >> c)) {
		cout << "Blad: podaj liczby" << endl;
		return 1;
	}
	if (a == 0) {
		cout << "Dla a = 0 to nie jest rownanie kwadratowe" << endl;
		return 1;
	}
	double delta = b * b - 4 * a * c;
	if (delta < 0) {
		cout << "Rownanie nie ma miejsc zerowych" << endl;
	}
	else if (delta == 0) {
		cout << "Rownanie ma jedno miejsce zerowe: x = " << -b / (2 * a) << endl;
	}
	else {
		double x1 = (-b - sqrt(delta)) / (2 * a);
		double x2 = (-b + sqrt(delta)) / (2 * a);
		cout << "Rownanie ma dwa miejsca zerowe:" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a;
	cout << "Podaj liczbe: ";
	cin >> a;
	if (a >= 0) {
		cout << "Pierwiastek: " << sqrt(a) << endl;
	}
	else {
		cout << "Pierwiastek kwadratowy z liczby ujemnej nie istnieje" << endl;
	}
	return 0;
}

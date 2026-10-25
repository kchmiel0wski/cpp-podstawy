#include <iostream>
using namespace std;

int main() {
	int a, b, x;
	cout << "Podaj poczatek zakresu (a): ";
	cin >> a;
	cout << "Podaj koniec zakresu (b): ";
	cin >> b;
	cout << "Podaj liczbe (x): ";
	cin >> x;
	if (x >= a && x <= b) {
		cout << "Liczba nalezy do zakresu <" << a << ", " << b << ">" << endl;
	}
	else {
		cout << "Liczba nie nalezy do zakresu <" << a << ", " << b << ">" << endl;
	}
	return 0;
}

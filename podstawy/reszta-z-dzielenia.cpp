#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Podaj pierwsza liczbe (a): ";
	cin >> a;
	cout << "Podaj druga liczbe (b): ";
	cin >> b;
	if (b == 0) {
		cout << "Blad: nie mozna dzielic przez zero!" << endl;
		return 1;
	}
	cout << "Reszta z dzielenia to: " << a % b << endl;
	return 0;
}

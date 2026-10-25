#include <iostream>
#include <string>
using namespace std;

int main() {
	double a, b;
	string dzialanie;
	cout << "Podaj dwie liczby: ";
	cin >> a >> b;
	cout << "Podaj dzialanie (+, -, *, /): ";
	cin >> dzialanie;
	if (dzialanie == "+") {
		cout << a + b << endl;
	}
	else if (dzialanie == "-") {
		cout << a - b << endl;
	}
	else if (dzialanie == "*") {
		cout << a * b << endl;
	}
	else if (dzialanie == "/") {
		if (b == 0) {
			cout << "Blad: nie mozna dzielic przez 0" << endl;
		}
		else {
			cout << a / b << endl;
		}
	}
	else {
		cout << "Nieznany operator: " << dzialanie << endl;
	}
	return 0;
}

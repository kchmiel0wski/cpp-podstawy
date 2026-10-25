#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Podaj liczbe dzielona: ";
	cin >> a;
	cout << "Podaj dzielnik: ";
	cin >> b;
	if (b == 0) {
		cout << "Nie mozna dzielic przez 0" << endl;
		return 1;
	}
	if (a % b == 0) {
		cout << "a jest podzielne przez b" << endl;
	}
	else {
		cout << "a nie jest podzielne przez b" << endl;
	}
	return 0;
}

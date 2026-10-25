#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;
	if (a % 2 == 0) {
		cout << "Liczba jest parzysta" << endl;
	}
	else {
		cout << "Liczba jest nieparzysta" << endl;
	}
	return 0;
}

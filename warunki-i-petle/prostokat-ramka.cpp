#include <iostream>
using namespace std;

int main() {
	int szerokosc, wysokosc;
	cout << "Podaj szerokosc i wysokosc prostokata: ";
	cin >> szerokosc >> wysokosc;
	for (int j = 0; j < wysokosc; j++) {
		for (int i = 0; i < szerokosc; i++) {
			bool krawedz = j == 0 || j == wysokosc - 1 || i == 0 || i == szerokosc - 1;
			cout << (krawedz ? 'X' : ' ');
		}
		cout << endl;
	}
	return 0;
}

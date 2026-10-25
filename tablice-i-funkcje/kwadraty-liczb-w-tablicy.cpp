#include <iostream>
using namespace std;

int main() {
	const int ROZMIAR = 10;
	int tab[ROZMIAR];
	cout << "Podaj " << ROZMIAR << " liczb: ";
	for (int i = 0; i < ROZMIAR; i++) {
		cin >> tab[i];
	}
	for (int i = 0; i < ROZMIAR; i++) {
		tab[i] = tab[i] * tab[i];
	}
	cout << "Kwadraty liczb: ";
	for (int i = 0; i < ROZMIAR; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
	return 0;
}

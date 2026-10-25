#include <iostream>
using namespace std;

int main() {
	const int ROZMIAR = 10;
	int tab[ROZMIAR];
	cout << "Podaj " << ROZMIAR << " liczb: ";
	for (int i = 0; i < ROZMIAR; i++) {
		cin >> tab[i];
	}
	int najwieksza = tab[0];
	for (int i = 1; i < ROZMIAR; i++) {
		if (tab[i] > najwieksza) {
			najwieksza = tab[i];
		}
	}
	cout << "Najwieksza liczba: " << najwieksza << endl;
	return 0;
}

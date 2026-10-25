#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	const int ROZMIAR = 4;
	int tab[ROZMIAR];
	cout << "Podaj " << ROZMIAR << " liczby: ";
	for (int i = 0; i < ROZMIAR; i++) {
		cin >> tab[i];
	}
	sort(tab, tab + ROZMIAR);
	cout << "Liczby w porzadku rosnacym: ";
	for (int i = 0; i < ROZMIAR; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
	return 0;
}

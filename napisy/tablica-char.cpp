#include <iostream>
using namespace std;

const int ROZMIAR = 15;

void wprowadzanieTekstu(char tab[], int rozmiar) {
	cout << "Wprowadz tekst (max " << rozmiar - 1 << " znakow): ";
	cin.getline(tab, rozmiar);
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
	}
}

void wyswietlanieTekstu(const char tab[], int rozmiar) {
	cout << "Podany tekst to: ";
	for (int i = 0; i < rozmiar; i++) {
		if (tab[i] == '\0') {
			break;
		}
		cout << tab[i];
	}
	cout << endl;
}

int wprowadzoneZnaki(const char tab[], int rozmiar) {
	int licznik = 0;
	for (int i = 0; i < rozmiar; i++) {
		if (tab[i] == '\0') {
			break;
		}
		if (tab[i] != ' ') {
			licznik++;
		}
	}
	return licznik;
}

void zamianaLiter(char tab[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		if (tab[i] == '\0') {
			break;
		}
		if (tab[i] >= 'A' && tab[i] <= 'Z') {
			tab[i] += 'a' - 'A';
		}
		else if (tab[i] >= 'a' && tab[i] <= 'z') {
			tab[i] -= 'a' - 'A';
		}
	}
}

int main() {
	char tekst[ROZMIAR];
	wprowadzanieTekstu(tekst, ROZMIAR);
	wyswietlanieTekstu(tekst, ROZMIAR);
	cout << "Liczba znakow (bez spacji): " << wprowadzoneZnaki(tekst, ROZMIAR) << endl;
	zamianaLiter(tekst, ROZMIAR);
	cout << "Po zamianie wielkosci liter: ";
	wyswietlanieTekstu(tekst, ROZMIAR);
	return 0;
}

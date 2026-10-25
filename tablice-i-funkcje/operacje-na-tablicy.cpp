#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ROZMIAR = 5;
const int BITY = 16;

void wczytajDane(int tab[], int rozmiar) {
	cout << "Podaj " << rozmiar << " liczb calkowitych:" << endl;
	for (int i = 0; i < rozmiar; i++) {
		cout << "tab[" << i << "] = ";
		cin >> tab[i];
	}
}

int sumaTablicy(const int tab[], int rozmiar) {
	int suma = 0;
	for (int i = 0; i < rozmiar; i++) {
		suma += tab[i];
	}
	return suma;
}

int maksimum(const int tab[], int rozmiar) {
	int najwieksza = tab[0];
	for (int i = 1; i < rozmiar; i++) {
		if (tab[i] > najwieksza) {
			najwieksza = tab[i];
		}
	}
	return najwieksza;
}

void wyswietlTablice(const int tab[], int rozmiar) {
	cout << "Zawartosc tablicy:" << endl;
	for (int i = 0; i < rozmiar; i++) {
		cout << "tab[" << i << "] = " << tab[i] << endl;
	}
}

void losujDane(int tab[], int rozmiar, int poczatek, int koniec) {
	for (int i = 0; i < rozmiar; i++) {
		tab[i] = rand() % (koniec - poczatek + 1) + poczatek;
	}
}

void konwertujNaBinarny(int liczba, int tab[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		tab[i] = 0;
	}
	int i = rozmiar - 1;
	while (liczba > 0 && i >= 0) {
		tab[i] = liczba % 2;
		liczba /= 2;
		i--;
	}
}

int main() {
	srand(time(NULL));
	int tab[ROZMIAR];
	int poczatek, koniec;
	wczytajDane(tab, ROZMIAR);
	wyswietlTablice(tab, ROZMIAR);
	cout << "Suma elementow: " << sumaTablicy(tab, ROZMIAR) << endl;
	cout << "Wartosc maksymalna: " << maksimum(tab, ROZMIAR) << endl;
	cout << "Podaj zakres losowania (poczatek koniec): ";
	cin >> poczatek >> koniec;
	if (poczatek < 0 || koniec < poczatek || koniec >= (1 << BITY)) {
		cout << "Zakres musi miescic sie w przedziale od 0 do " << (1 << BITY) - 1 << endl;
		return 1;
	}
	losujDane(tab, ROZMIAR, poczatek, koniec);
	cout << "Wylosowane liczby:" << endl;
	wyswietlTablice(tab, ROZMIAR);
	int bin[BITY];
	int liczba = tab[0];
	konwertujNaBinarny(liczba, bin, BITY);
	cout << "Liczba " << liczba << " w postaci binarnej: ";
	for (int i = 0; i < BITY; i++) {
		cout << bin[i];
	}
	cout << endl;
	return 0;
}

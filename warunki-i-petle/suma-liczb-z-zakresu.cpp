#include <iostream>
using namespace std;

int sumujLiczby() {
	int liczba;
	int suma = 0;
	cout << "Podaj liczby z zakresu <-15, 15> (99 konczy):" << endl;
	while (cin >> liczba && liczba != 99) {
		if (liczba >= -15 && liczba <= 15) {
			suma += liczba;
		}
		else {
			cout << "(poza zakresem, pomijam)" << endl;
		}
	}
	return suma;
}

int main() {
	int wynik = sumujLiczby();
	cout << "Suma wczytanych liczb wynosi: " << wynik << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int LIMIT_PROB = 5;
const int MIN_LICZBA = 0;
const int MAX_LICZBA = 20;

void trybCzlowiek() {
	int wylosowana = MIN_LICZBA + rand() % (MAX_LICZBA - MIN_LICZBA + 1);
	int proby = 0;
	while (proby < LIMIT_PROB) {
		int liczba;
		cout << "Podaj liczbe (" << MIN_LICZBA << "-" << MAX_LICZBA << "): ";
		cin >> liczba;
		if (liczba < MIN_LICZBA || liczba > MAX_LICZBA) {
			cout << "Liczba spoza zakresu" << endl;
			continue;
		}
		proby++;
		if (liczba == wylosowana) {
			cout << "Zgadles!" << endl;
			return;
		}
		else if (liczba > wylosowana) {
			cout << "Za duzo" << endl;
		}
		else {
			cout << "Za malo" << endl;
		}
	}
	cout << "Przegrales, prawidlowa liczba to: " << wylosowana << endl;
}

void trybKomputer() {
	int min = MIN_LICZBA;
	int max = MAX_LICZBA;
	string odpowiedz;
	cout << "Pomysl liczbe od " << MIN_LICZBA << " do " << MAX_LICZBA << ", a komputer sprobuje ja odgadnac." << endl;
	cout << "Odpowiadaj slowami: zgadles, duzo, malo." << endl;
	int proby = 0;
	while (proby < LIMIT_PROB) {
		if (min > max) {
			cout << "Odpowiedzi sie wykluczaja, oszukujesz!" << endl;
			return;
		}
		int strzal = (min + max) / 2;
		cout << "Czy to " << strzal << "?" << endl;
		cin >> odpowiedz;
		if (odpowiedz == "zgadles") {
			cout << "Zgadlem!" << endl;
			return;
		}
		else if (odpowiedz == "duzo") {
			max = strzal - 1;
		}
		else if (odpowiedz == "malo") {
			min = strzal + 1;
		}
		else {
			cout << "Blad! Wpisz: zgadles, duzo lub malo." << endl;
			continue;
		}
		proby++;
	}
	cout << "Przegralem :(" << endl;
}

int main() {
	srand(time(0));
	int wybor = 0;
	while (wybor != 3) {
		cout << "Wybierz: 1 - tryb czlowiek, 2 - tryb komputer, 3 - wyjscie: ";
		if (!(cin >> wybor)) {
			return 1;
		}
		switch (wybor) {
		case 1:
			trybCzlowiek();
			break;
		case 2:
			trybKomputer();
			break;
		case 3:
			cout << "Koniec gry" << endl;
			break;
		default:
			cout << "Nie ma takiej opcji" << endl;
		}
	}
	return 0;
}

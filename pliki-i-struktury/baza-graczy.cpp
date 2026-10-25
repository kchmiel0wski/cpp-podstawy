#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

struct gracz {
	int id;
	int level;
	string nick;
	char plec;
};

const string NAZWA_PLIKU = "gracze.txt";

void wczytajZPliku(vector<gracz>& baza) {
	ifstream plik(NAZWA_PLIKU);
	if (!plik) {
		cout << "Nie udalo sie otworzyc pliku do wczytania." << endl;
		return;
	}
	baza.clear();
	gracz k;
	while (plik >> k.id >> k.nick >> k.level >> k.plec) {
		baza.push_back(k);
	}
	cout << "Wczytano baze z pliku." << endl;
}

void zapiszDoPliku(const vector<gracz>& baza) {
	ofstream plik(NAZWA_PLIKU);
	if (!plik) {
		cout << "Nie udalo sie otworzyc pliku do zapisu." << endl;
		return;
	}
	for (size_t i = 0; i < baza.size(); i++) {
		plik << baza[i].id << " " << baza[i].nick << " " << baza[i].level << " " << baza[i].plec << "\n";
	}
	cout << "Zapisano baze do pliku." << endl;
}

void dodajGracza(vector<gracz>& baza) {
	gracz k;
	cout << "Podaj ID: ";
	cin >> k.id;
	cout << "Podaj nick: ";
	cin >> k.nick;
	cout << "Podaj level: ";
	cin >> k.level;
	cout << "Podaj plec (m/k): ";
	cin >> k.plec;
	baza.push_back(k);
	cout << "Dodano gracza." << endl;
}

void wyswietlBaze(const vector<gracz>& baza) {
	if (baza.empty()) {
		cout << "Baza jest pusta." << endl;
		return;
	}
	cout << "Lista graczy:" << endl;
	for (size_t i = 0; i < baza.size(); i++) {
		cout << "ID: " << baza[i].id
			<< "  Nick: " << baza[i].nick
			<< "  Level: " << baza[i].level
			<< "  Plec: " << baza[i].plec << endl;
	}
}

int main() {
	vector<gracz> baza;
	int wybor;
	do {
		cout << "\nMenu" << endl;
		cout << "1. Wczytaj baze z pliku" << endl;
		cout << "2. Zapisz baze do pliku" << endl;
		cout << "3. Dodaj nowego gracza" << endl;
		cout << "4. Wyswietl baze" << endl;
		cout << "5. Wyjdz" << endl;
		cout << "Wybor: ";
		if (!(cin >> wybor)) {
			break;
		}
		switch (wybor) {
		case 1:
			wczytajZPliku(baza);
			break;
		case 2:
			zapiszDoPliku(baza);
			break;
		case 3:
			dodajGracza(baza);
			break;
		case 4:
			wyswietlBaze(baza);
			break;
		case 5:
			cout << "Koniec programu." << endl;
			break;
		default:
			cout << "Niepoprawny wybor." << endl;
			break;
		}
	} while (wybor != 5);
	return 0;
}

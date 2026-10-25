#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

struct Student {
	string imie;
	string nazwisko;
	int wiek;
};

void wczytajZPliku(vector<Student>& baza) {
	cout << "Podaj nazwe pliku: ";
	string nazwaPliku;
	cin >> nazwaPliku;
	ifstream plik(nazwaPliku);
	if (!plik) {
		cout << "Nie mozna otworzyc pliku!" << endl;
		return;
	}
	baza.clear();
	Student s;
	while (plik >> s.imie >> s.nazwisko >> s.wiek) {
		baza.push_back(s);
	}
	cout << "Wczytano baze z pliku." << endl;
}

void zapiszDoPliku(const vector<Student>& baza) {
	cout << "Podaj nazwe pliku: ";
	string nazwaPliku;
	cin >> nazwaPliku;
	ofstream plik(nazwaPliku);
	if (!plik) {
		cout << "Nie mozna otworzyc pliku do zapisu!" << endl;
		return;
	}
	for (size_t i = 0; i < baza.size(); i++) {
		plik << baza[i].imie << " " << baza[i].nazwisko << " " << baza[i].wiek << "\n";
	}
	cout << "Zapisano baze do pliku." << endl;
}

void dodajStudenta(vector<Student>& baza) {
	Student s;
	cout << "Podaj imie: ";
	cin >> s.imie;
	cout << "Podaj nazwisko: ";
	cin >> s.nazwisko;
	cout << "Podaj wiek: ";
	cin >> s.wiek;
	baza.push_back(s);
	cout << "Dodano nowy rekord." << endl;
}

void wyswietlBaze(const vector<Student>& baza) {
	if (baza.empty()) {
		cout << "Baza jest pusta." << endl;
		return;
	}
	cout << "\n--- ZAWARTOSC BAZY ---" << endl;
	for (size_t i = 0; i < baza.size(); i++) {
		cout << i + 1 << ". " << baza[i].imie << " " << baza[i].nazwisko << ", wiek: " << baza[i].wiek << endl;
	}
}

void usunStudenta(vector<Student>& baza) {
	if (baza.empty()) {
		cout << "Baza jest pusta, nie ma co usunac." << endl;
		return;
	}
	int indeks;
	cout << "Podaj numer rekordu do usuniecia: ";
	cin >> indeks;
	if (indeks < 1 || indeks > (int)baza.size()) {
		cout << "Niepoprawny numer!" << endl;
		return;
	}
	baza.erase(baza.begin() + (indeks - 1));
	cout << "Usunieto rekord nr " << indeks << "." << endl;
}

void wyszukajStudenta(const vector<Student>& baza) {
	if (baza.empty()) {
		cout << "Baza jest pusta, nic nie wyszukasz." << endl;
		return;
	}
	int wyborPola;
	cout << "\nWybierz pole do wyszukiwania:" << endl;
	cout << "1. Imie" << endl;
	cout << "2. Nazwisko" << endl;
	cout << "3. Wiek (jako tekst)" << endl;
	cout << "Twoj wybor: ";
	cin >> wyborPola;
	if (wyborPola < 1 || wyborPola > 3) {
		cout << "Niepoprawny wybor pola!" << endl;
		return;
	}
	string fraza;
	cout << "Podaj fraze do wyszukania: ";
	cin >> fraza;
	cout << "\n--- WYNIKI WYSZUKIWANIA ---" << endl;
	bool znaleziono = false;
	for (size_t i = 0; i < baza.size(); i++) {
		string pole;
		if (wyborPola == 1) {
			pole = baza[i].imie;
		}
		else if (wyborPola == 2) {
			pole = baza[i].nazwisko;
		}
		else {
			pole = to_string(baza[i].wiek);
		}
		if (pole.find(fraza) != string::npos) {
			cout << i + 1 << ". " << baza[i].imie << " " << baza[i].nazwisko << ", wiek: " << baza[i].wiek << endl;
			znaleziono = true;
		}
	}
	if (!znaleziono) {
		cout << "Brak wynikow spelniajacych kryteria." << endl;
	}
}

int main() {
	vector<Student> baza;
	int wybor;
	do {
		cout << "\n========= MENU =========" << endl;
		cout << "1. Wczytaj baze z pliku" << endl;
		cout << "2. Zapisz baze do pliku" << endl;
		cout << "3. Dodaj nowy rekord" << endl;
		cout << "4. Wyswietl baze" << endl;
		cout << "5. Usun rekord" << endl;
		cout << "6. Wyszukaj w bazie" << endl;
		cout << "7. Wyjscie" << endl;
		cout << "Wybierz opcje: ";
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
			dodajStudenta(baza);
			break;
		case 4:
			wyswietlBaze(baza);
			break;
		case 5:
			usunStudenta(baza);
			break;
		case 6:
			wyszukajStudenta(baza);
			break;
		case 7:
			cout << "Koniec programu." << endl;
			break;
		default:
			cout << "Niepoprawna opcja." << endl;
		}
	} while (wybor != 7);
	return 0;
}

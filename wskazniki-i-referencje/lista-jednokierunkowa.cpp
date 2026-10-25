#include <iostream>
#include <string>
using namespace std;

struct gracz {
	string id;
	string nick;
	int level;
	char plec;
	gracz* nastepny;
};

void dodawanieElementu(gracz*& glowa) {
	gracz* nowy = new gracz;
	cout << "Podaj id: ";
	cin >> nowy->id;
	cout << "Podaj nick: ";
	cin >> nowy->nick;
	cout << "Podaj level: ";
	cin >> nowy->level;
	cout << "Podaj plec (m/k): ";
	cin >> nowy->plec;
	nowy->nastepny = nullptr;
	if (glowa == nullptr) {
		glowa = nowy;
	}
	else {
		gracz* temp = glowa;
		while (temp->nastepny != nullptr) {
			temp = temp->nastepny;
		}
		temp->nastepny = nowy;
	}
}

void wyswietlanieElementow(const gracz* glowa) {
	if (glowa == nullptr) {
		cout << "Lista jest pusta." << endl;
		return;
	}
	const gracz* temp = glowa;
	while (temp != nullptr) {
		cout << temp->id << " " << temp->nick << " " << temp->level << " " << temp->plec << endl;
		temp = temp->nastepny;
	}
}

void usuwanieElementu(gracz*& glowa) {
	if (glowa == nullptr) {
		cout << "Nie ma czego usuwac." << endl;
	}
	else if (glowa->nastepny == nullptr) {
		delete glowa;
		glowa = nullptr;
		cout << "Usunieto jedyny element listy." << endl;
	}
	else {
		gracz* temp = glowa;
		while (temp->nastepny->nastepny != nullptr) {
			temp = temp->nastepny;
		}
		delete temp->nastepny;
		temp->nastepny = nullptr;
		cout << "Usunieto element z konca listy." << endl;
	}
}

void zwolnijListe(gracz*& glowa) {
	while (glowa != nullptr) {
		gracz* nastepny = glowa->nastepny;
		delete glowa;
		glowa = nastepny;
	}
}

int main() {
	gracz* glowa = nullptr;
	int wybor;
	do {
		cout << "\nMenu" << endl;
		cout << "1. Dodaj gracza na koniec" << endl;
		cout << "2. Usun gracza z konca" << endl;
		cout << "3. Wyswietl wszystkich graczy" << endl;
		cout << "0. Wyjscie" << endl;
		cout << "Twoj wybor: ";
		if (!(cin >> wybor)) {
			break;
		}
		switch (wybor) {
		case 1:
			dodawanieElementu(glowa);
			break;
		case 2:
			usuwanieElementu(glowa);
			break;
		case 3:
			cout << "\nLISTA GRACZY:" << endl;
			wyswietlanieElementow(glowa);
			break;
		case 0:
			cout << "Zamykanie programu." << endl;
			break;
		default:
			cout << "Nie ma takiej opcji." << endl;
		}
	} while (wybor != 0);
	zwolnijListe(glowa);
	return 0;
}

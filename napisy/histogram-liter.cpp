#include <iostream>
#include <string>
using namespace std;

int main() {
	const int LICZBA_LITER = 26;
	string tekst;
	int liczniki[LICZBA_LITER] = { 0 };
	cout << "Wpisz tekst: ";
	getline(cin, tekst);
	for (size_t i = 0; i < tekst.length(); i++) {
		char znak = tekst[i];
		if (znak >= 'A' && znak <= 'Z') {
			znak += 'a' - 'A';
		}
		if (znak >= 'a' && znak <= 'z') {
			liczniki[znak - 'a']++;
		}
	}
	for (int i = 0; i < LICZBA_LITER; i++) {
		if (liczniki[i] > 0) {
			cout << (char)('a' + i) << " ";
			for (int j = 0; j < liczniki[i]; j++) {
				cout << "#";
			}
			cout << endl;
		}
	}
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Podaj liczbe elementow tablicy: ";
	cin >> n;
	if (n <= 0) {
		cout << "Liczba elementow musi byc dodatnia!" << endl;
		return 1;
	}
	vector<int> tab(n);
	cout << "Podaj " << n << " liczb calkowitych:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}
	cout << "Liczby, ktore wystapily tylko raz:" << endl;
	for (int i = 0; i < n; i++) {
		int licznik = 0;
		for (int j = 0; j < n; j++) {
			if (tab[i] == tab[j]) {
				licznik++;
			}
		}
		if (licznik == 1) {
			cout << tab[i] << " ";
		}
	}
	cout << endl;
	return 0;
}

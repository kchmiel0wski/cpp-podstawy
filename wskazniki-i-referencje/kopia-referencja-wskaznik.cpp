#include <iostream>
using namespace std;

void zmianaPrzezKopie(int a) {
	cout << "F przed, wartosc a: " << a << endl;
	a += 10;
	cout << "F po, wartosc a: " << a << endl;
}

void zmianaPrzezReferencje(int& a) {
	cout << "F przed, wartosc a: " << a << endl;
	a += 10;
	cout << "F po, wartosc a: " << a << endl;
}

void zmianaPrzezWskaznik(int* a) {
	cout << "F przed, wartosc a: " << *a << endl;
	*a += 10;
	cout << "F po, wartosc a: " << *a << endl;
}

void podstawyWskaznikow(int& a, int* wsk) {
	cout << "PODSTAWY WSKAZNIKOW" << endl;
	cout << "a: " << a << ", adres a: " << &a << endl;
	cout << "*wsk: " << *wsk << ", wsk: " << wsk << endl;
	*wsk = *wsk + 7;
	cout << "Po zmianie przez wskaznik:" << endl;
	cout << "a: " << a << ", adres a: " << &a << endl;
	cout << "*wsk: " << *wsk << ", wsk: " << wsk << endl;
}

int main() {
	int a = 10;
	int* wsk = &a;

	podstawyWskaznikow(a, wsk);

	cout << "\nKOPIA" << endl;
	cout << "M przed, wartosc a: " << a << endl;
	zmianaPrzezKopie(a);
	cout << "M po, wartosc a: " << a << endl;

	cout << "\nREFERENCJA" << endl;
	cout << "M przed, wartosc a: " << a << endl;
	zmianaPrzezReferencje(a);
	cout << "M po, wartosc a: " << a << endl;

	cout << "\nWSKAZNIK" << endl;
	cout << "M przed, wartosc a: " << a << endl;
	zmianaPrzezWskaznik(wsk);
	cout << "M po, wartosc a: " << a << endl;
	return 0;
}

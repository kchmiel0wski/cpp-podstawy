#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const double PI = 3.14159265358979;
	double r;
	cout << "Podaj promien: ";
	cin >> r;
	double objetosc = (4.0 / 3.0) * PI * pow(r, 3);
	cout << "Objetosc kuli wynosi: " << objetosc << endl;
	return 0;
}

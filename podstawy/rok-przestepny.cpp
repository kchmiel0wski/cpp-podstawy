#include <iostream>
using namespace std;

int main() {
	int rok;
	cout << "Podaj rok: ";
	cin >> rok;
	if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) {
		cout << "Rok jest przestepny" << endl;
	}
	else {
		cout << "Rok nie jest przestepny" << endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	string zdanie1 = "Pomyliles z gwiazdami ";
	string zdanie2 = "odbitymi na powierzchni stawu ";
	string zdanie = zdanie1 + zdanie2;
	cout << zdanie1 << zdanie2 << '\n' << zdanie << endl;
	zdanie1.insert(10, "niebo ");
	cout << zdanie1 << zdanie2 << endl;
	zdanie1.replace(0, 9, "Polaczyles");
	cout << zdanie1 << zdanie2 << endl;
	zdanie2.erase(24, 5);
	cout << zdanie1 << zdanie2 << endl;
	zdanie2.insert(24, "lustra");
	cout << zdanie1 << zdanie2 << endl;
	return 0;
}

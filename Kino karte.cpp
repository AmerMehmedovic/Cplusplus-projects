#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Trebate kupiti kartu za kino " << endl;
	cout << "Unesite svoje godine: " << endl;
	cin >> age;
	if (age <= 3) {
		cout << "Free";
	}
	else if (age >= 4 && age <= 6) {
		cout << "Discounted";
	}
	else {
		cout << "Normal";
	}

		return 0;
}
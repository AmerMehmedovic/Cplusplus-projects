#include <iostream>

using namespace std;

int main() {

	double n1, n2, n3;

	cout << "Unesite tri broja: " << endl;

	cin >> n1 >> n2 >> n3;

	if (n1 >= n2 && n1 >= n3) {

		cout << n1 << " Je najveci broj" << endl;
	}
	else if (n2 >= n1 && n2 >= n3) {

		cout << n2 << " Je najveci broj" << endl;
	}
	else {

		cout << n3 << " Je najveci broj" << endl;
	}





	return 0;
}
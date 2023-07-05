#include <iostream>
using namespace std;

int main() {
	int choice;
	cout << "Dosli ste u kafic i hocete naruciti kafu" << endl;
	cout << "Unesite broj od 1 do 4. 1-Espresso,2-Amerikano,3-Cappucino,4-Latte: " << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Espresso" << endl;
			break;
	case 2:
		cout << "Amerikano" << endl;
			break;
	case 3:
		cout << "Cappucino" << endl;
			break;
	case 4:
		cout << "Latte" << endl;
			break;
	}
	
	return 0;
}
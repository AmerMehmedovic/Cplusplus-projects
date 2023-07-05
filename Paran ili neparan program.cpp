#include <iostream>

using namespace std;

int main() {
	int n;
	
	cout << "Unesite neki broj: " << endl;
	cin >> n;

	if (n % 2 == 0) {
		cout << n << " je paran";
	}
	else 
		cout << n << " je neparan";
	
	
	return 0;
}
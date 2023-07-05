#include <iostream>
using namespace std;

int main() 
{
	int n;
	cout << "Unesite broj n: " << endl;
	cin >> n;

	float suma = 0;
	for (int i = 1; i <= n; i++) 
	{
		suma += 1 / pow((2 * i + 1), 2);
	}
	cout << "Iznos sume je: " << suma << endl;











	return 0;
}
#include <iostream>
using namespace std;
const int vel = 10;
int main() {
	float Niz[vel];
	float suma = 0.0f;
	for (int i = 0; i < vel; i++) {
		Niz[i] = pow(1.5,i);
		cout << Niz[i]<<" ";
		suma += Niz[i];
	}
	cout << "Suma je: " << suma;

















	return 0;

}
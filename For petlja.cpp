#include <iostream>

using namespace std;

bool jeProst(int);
int main() 
{

	for (int i = 1; i <= 2000; i++)
	{
		if (jeProst(i))
			cout << "Broj " << i << " je prost!" << endl;
	}

	cout << endl;



	return 0;
}

bool jeProst(int br) 
{
	if (br == 0 || br == 1)
		return false;

	for (int i = 2; i < br; i++) 
	{
		if (br % i == 0)
			return false;
	}
	return true;
}
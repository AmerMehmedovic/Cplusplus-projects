   //Povsina trougla  

      #include <iostream>
using namespace std;

int main() {
    float širina;
    float visina;
    cout << "Unestite sirinu trokuta:" << endl;
    cin >> širina;
    cout << "Unesite visinu trokuta:" << endl;
    cin >> visina;
    cout << "Povrsina trokuta je:" << (širina * visina) /pow(2, 2)<< endl;


    return 0;
}
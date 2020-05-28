#include <iostream>
#include <string>

using namespace std;

void ultimaPrimeraLetra() {

    string palabra;
    int num;

    cout << endl;
    cout << "Ingresa una palabra" << endl;
    cout << "===================" << endl;
    cout << endl;

    cout << "Palabra: ";
    cin >> palabra;
    cout << endl;
    cout << "===================" << endl;
    cout << endl;

    num = palabra.length();

    if (palabra.at(0) == palabra.at(num - 1)) {
        cout << "La palabra ingresada inicia y termina con la misma letra" << endl;
        cout << endl;
    } else {
        cout << "La palabra ingresada no inicia y no termina con la misma letra" << endl;
        cout << endl;
    }


}

int main() {

    ultimaPrimeraLetra();

    return 0;
}
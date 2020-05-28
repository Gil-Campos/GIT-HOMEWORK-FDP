#include <iostream>
#include <string>

using namespace std;

void chequeoPalabra() {

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

    if ((num > 10) && (num % 2 == 0)) {
        cout << "La palabra es mayor a 10 letras y es par" << endl;
        cout << endl;
    } else if ((num > 10) && (num % 2 != 0)) {
        cout << "La palabra es mayor a 10 letras y es impar" << endl;
        cout << endl;
    } else if ((num < 10) && (num % 2 == 0)) {
        cout << "La palabra es menor a 10 letras y es par" << endl;
        cout << endl;
    } else if ((num < 10) && (num % 2 != 0)) {
        cout << "La palabra es menor a 10 letras y es impar" << endl;
        cout << endl;
    } else {
        cout << "La palabra es igual a 10 letras y es par" << endl;
        cout << endl;
    }
    
}

int main() {

    chequeoPalabra();

    return 0;
}
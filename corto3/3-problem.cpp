#include <iostream>

int checkAño(int); 

using namespace std;

int añoBisiesto() {

    int año;

    cout << "Por favor ingresa el año que quieras verificar: ";
    cin >> año;
    cout << endl;

    while(1) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(123, '\n');
            cout << "ERROR: solo numeros entero debe ser ingresado: ";
            cin >> año;
        } else {
            break;
        }
    }

    checkAño(año);

    return 0;
}

int checkAño(int valor) {
    if (valor % 400 == 0) {
        cout << "El año si es bisiesto" << endl;
    } else if ((valor % 4 == 0) && (valor % 100 != 0)) {
        cout << "El año si es bisiesto" << endl;
    } else {
        cout << "El año no es bisiesto" << endl;
    }

    return 0;
}

int main() {

    añoBisiesto();

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

void numeroDivisible() {

    int divisor, dividendo;

    cout << endl;
    cout << "Por favor ingresa un numero entero" << endl;
    cout << "==================================" << endl;
    cout << endl;

    cout << "Ingresa el divisor: ";
    cin >> divisor;
    cout << endl;

    cout << endl;
    cout << "Ingresa el dividendo: ";
    cin >> dividendo;
    cout << endl;
    cout << "==================================" << endl;

    if (dividendo % divisor == 0) {
        cout << endl;
        cout << "El numbero " << dividendo << " si es divisible entre " << divisor << endl;
        cout << endl;
    } else {
        cout << endl;
        cout << "El numbero " << dividendo << " no es divisible entre " << divisor << endl;
        cout << endl;
    }
}

int main() {

    numeroDivisible();

    return 0;
}
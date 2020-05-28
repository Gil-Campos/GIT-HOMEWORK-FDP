#include <iostream>
#include <string>

using namespace std;

void positiveNegativeNum() {

    float num;

    cout << endl;
    cout << "Ingresa un numero entero" << endl;
    cout << "========================" << endl;
    cout << endl;

    cout << "Valor numerico: ";
    cin >> num;
    cout << "========================" << endl;
    cout << endl;

    if (num >= 1) {
        cout << num << " es positivo" << endl;
        cout << endl;
    } else if ( num <= -1) {
        cout << num << " es negativo" << endl;
        cout << endl;
    } else {
        cout << "el numero es 0" << endl;
        cout << endl;
    }
} 

int main() {

    positiveNegativeNum();

    return 0;
}
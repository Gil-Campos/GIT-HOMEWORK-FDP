#include <iostream>
#include <string>

using namespace std;

void parImpar() {

    int num;

    cout << endl;
    cout << "Ingresa un numero entero" << endl;
    cout << "=================================" << endl;
    cout << endl;

    cout << "Valor numerico: ";
    cin >> num;
    cout << endl;
    cout << "=================================" << endl;
    cout << endl;

    if (num % 2 == 0) {
        cout << num << " si es un valor par" << endl;
        cout << endl;
    } else {
        cout << num << " no es un valor par" << endl;
        cout << endl;
    }

}

int main() {

    parImpar();

    return 0;
}
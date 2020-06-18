#include <iostream>

using namespace std;

int añoBisiesto();
bool calcAño(int);

int añoBisiesto() {
    int año;
    bool chequeo;

    cout << "Ingresa el año a chequear: ";
    cin >> año;
    cout << endl;

    chequeo = calcAño(año);

    //Check para ver el valor que retorno la funcion y se le asigno a la variable.
    if (chequeo) {
        cout << endl;
        cout << "El año si es bisiesto.";
        cout << endl;
    } else {
        cout << endl;
        cout << "El año no es bisiesto.";
        cout << endl;
    }

    return 0;
}

//Funcion que regresa un bool dependiendo si el año es bisiesto o no.
bool calcAño(int aa) {

    if (aa % 400 == 0) {
        return true;
    } else if ((aa % 4 == 0) && (aa % 100 != 0)) {
        return true;
    } else {
        return false;
    }
    
}

int main() {

    añoBisiesto();

    return 0;
}
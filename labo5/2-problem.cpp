#include <iostream>
#include <ctime>
#include <cstdlib>

void checkPrediction(int, int);

using namespace std;

void randomNumber() {

    srand(time(0));

    int numeroSecreto, numeroPrueba;
    int count = 1;

    numeroSecreto = rand() % 100 + 1;

    cout << "Adivina el valor del numero, entra tu propio valor entero!" << endl;

    while (!(cin >> numeroPrueba)) {
    cout << "ERROR: un numero entero debe ser ingresado: ";
    cin.clear();
    cin.ignore(123, '\n');
    }

    // Display the number the user has entered
    cout << endl;
    cout << "Tu numero entero es: " << numeroPrueba << endl;
    cout << "Este es el numero secreto " << numeroSecreto;

    checkPrediction(numeroPrueba, numeroSecreto);
    
}

void checkPrediction(int prediccion, int numSecreto) {
    cout << endl;
    cout << "PRINT DE FUNCION" << endl;
    cout << "Tu numero entero es: " << prediccion << endl;
    cout << "Este es el numero secreto " << numSecreto;
}

int main() {
    randomNumber();
    return 0;
}
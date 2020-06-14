#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void checkPrediction(int, int, int*);
void checkDataTypes(int);

void randomNumber() {

    srand(time(0));

    int numeroSecreto, numeroPrueba;
    int count = 1;

    numeroSecreto = rand() % 100 + 1;

    cout << "Adivina el valor del numero, entra tu propio valor entero! - Pon 000 para terminar el programa." << endl;

    //Bucle activo hasta llegar a 5 (es el maximo de intentos por usuario).
    while (count <= 5) {

        cout << "Ingresa un numero: ";
        cin >> numeroPrueba;

        //Chequeo de tipo de datos (se detendra el bucle al recibir un entero de lo contrario seguira preguntando).
        while(1) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(123, '\n');
                cout << "ERROR: un numero entero debe ser ingresado: ";
                cin >> numeroPrueba;
            } else {
                break;
            }
        }

        cout << "Numero secreto: " << numeroSecreto << endl;
        cout << endl;

        //Cheque si el usuario desea acabar el programa mediante el 000.
        if (numeroPrueba == 000) {
            cout << "Haz terminado el programa, vuelve pronto." << endl;
            count = 6;
        } else {
            cout << "Intento num: " << count << endl;
            checkPrediction(numeroPrueba, numeroSecreto, &count);
            count += 1;
        }

    }

    cout << "Gracias por jugar!";
    
}

void checkPrediction(int prediccion, int numSecreto, int *intento) {
    if (prediccion < 0 || prediccion > 100) {
        cout << "Te has salido del rango de valores, usa solo valores del 1 al 100" << endl;
        cout << endl;
    } else if (prediccion >= 1 && prediccion <= 100 && numSecreto < prediccion) {
        cout << "El numero secreto es menor a esa cantidad" << endl;
        cout << endl;
    } else if (prediccion >= 1 && prediccion <= 100 && numSecreto > prediccion) {
        cout << "El numero secreto es mayor a esa cantidad" << endl;
        cout << endl;
    } else if ( numSecreto == prediccion) {
        cout << "FELICIDADES! el numero secreto es igual a la prediccion" << endl;
        cout << endl; 
        /* 
        Si la prediccion del usuario es igual al numero secreto y no se a llegado a la cantidad necesaria para terminar 
        el bucle se le asigna 5 directamente a la varibal.
        */
        *intento = 5;  
    } else {
        cout << "Oops algo anda mal, relajate e intenta en un rato" << endl;
        cout << endl;
    }
    
}

int main() {
    randomNumber();
    return 0;
}
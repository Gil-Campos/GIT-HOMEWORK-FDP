#include <iostream>

using namespace std;

int MCD();
int calcMCD(int, int);

int MCD() {

    int firstNum, secondNum;

    cout << "Calcula el MCD de dos numeros" << endl;
    cout << endl;

    cout << "Primer numer: ";
    cin >> firstNum;
    cout << endl;

    cout << "Segundo numero: ";
    cin >> secondNum;
    cout << endl;

    //Chequeo para ver si los valores estan en el rango necesario
    if (firstNum != 0 && secondNum != 0) {
        
        //Se ve cual es el menor y el mayor para ver de que manera se ponen los parametros a la funcion.
        if (firstNum >= secondNum) {
            calcMCD(firstNum, secondNum);
        } else {
            calcMCD(secondNum, firstNum);
        }

    } else {
        cout << "Ambos valores tienen que ser enteros y distintos de cero." << endl;
        cout << endl;
    }
    
    return 0;

}

int calcMCD(int fNum, int sNum) {
    int firstNum = fNum;
    int secondNum = sNum;
    int residuo;

    do {
        residuo = firstNum % secondNum;

        if(residuo != 0) {
            firstNum = secondNum;
            secondNum = residuo;
        }

    } while (residuo != 0);
    
    cout << "El MCD es: " << secondNum << endl;
    cout << endl;

    return 0;
}

int main() {

    MCD();

    return 0;
}
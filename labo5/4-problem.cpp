#include <iostream>
#include <string>

using namespace std;

void date();
bool añoBisiesto(int);
void calcDate(int, int, int, bool);

string meses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

void date() {
    int dd, aa, mm;
    bool chequeoAa;

    cout << endl;
    cout << "Por favor ingresa el dia: ";
    cin >> dd;
    cout << endl;
    
    cout << "Por favor ingresa el numero del mes: ";
    cin >> mm;
    cout << endl;

    cout << "Por favor ingresa el año: ";
    cin >> aa;
    cout << endl;

    //Variable llama a funcion y el valor retornado de la funcion dira si es bisiesto o no.
    chequeoAa = añoBisiesto(aa);

    calcDate(dd, mm, aa, chequeoAa);
}

bool añoBisiesto(int aa) {
    if (aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0)) {
        return true;
    } else {
        return false;
    }
}

void calcDate(int dd, int mm, int aa, bool bisiesto) {
    int numberOfDays;
    int dia = dd + 1, mes = mm, año = aa;

    //Se asigna el valor de maximo de dias que tiene que tener el mes a usar.
    switch (mm) {
    case 1:
        numberOfDays = 31;
        break;
    case 2:
        numberOfDays = 28;
        break;
    case 3:
        numberOfDays = 31;
        break;
    case 4:
        numberOfDays = 30;
        break;
    case 5:
        numberOfDays = 31;
        break;
    case 6:
        numberOfDays = 30;
        break;
    case 7:
        numberOfDays = 31;
        break;
    case 8:
        numberOfDays = 31;
        break;
    case 9:
        numberOfDays = 30;
        break;
    case 10:
        numberOfDays = 31;
        break;
    case 11:
        numberOfDays = 30;
        break;
    case 12:
        numberOfDays = 31;
        break;
    default:
        break;
    }

    if (mm == 2 && bisiesto) {
        numberOfDays = 29;
    }

    //Se chequea que los valores esten en el rango de los numeros de dias en el mes solicitado y se ve que el mes no sea salga de 12.
    if (dd > 0 && dd <= numberOfDays && mm > 0 && mm <= 12) {

        //Se chequea si el dia + 1 pasa a la cantidad de dias en el mes, se pasa al siguiente mes.
        if (dia > numberOfDays) {
            dia = 1;
            mes += 1;
        }
        //Se chequea si el mes + 1 pasa a la cantidad de meses en el año, se pasa al siguiente año.
        if (mes > 12) {
            mes = 1;
            año += 1;
        }

        cout << "La fecha es: " << dia << "," << meses[mes - 1] << "," << año << endl;
        cout << endl;

    } else {
        cout << endl;
        cout << "Tienes un error en tu fecha por favor verifica tus valores." << endl;
        cout << endl;
    }
    
    
}

int main() {

    date();

    return 0;
}
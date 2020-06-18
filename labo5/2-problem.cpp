#include <iostream>

using namespace std;

int time();
int calcTime(int, int, int);

int time() {
    
    int hh, mm, ss;
    bool correctHh, correctMm, correctSs;

    cout << endl;
    cout << "Ingresa la hora: ";
    cin >> hh;
    cout << endl;

    cout << "Ingresa los minutos: ";
    cin >> mm;
    cout << endl;

    cout << "Ingresa los segundos: ";
    cin >> ss;
    cout << endl;

    //Operadores ternarios para chequear si los valores estan adentro del rango necesitado.
    correctHh = (hh >= 0 && hh < 24) ? true : false;
    correctMm = (mm >= 0 && mm < 60) ? true : false;
    correctSs = (ss >= 0 && ss < 60) ? true : false;

    if (correctHh && correctHh && correctSs) {
        calcTime(hh, mm, ss);
    } else {
        cout << "Revisa tus valores no estan correctos algunos." << endl;
        cout << endl;
    }

    return 0;
}

int calcTime(int hh, int mm, int ss) {
    int hour = hh;
    int minute = mm;
    int seconds = ss + 1;

    if (seconds == 60) {
        seconds = 0;
        minute += 1;
    }

    if (minute == 60) {
        minute = 0 ;
        hour += 1;
    }

    if (hour == 24) {
        hour = 0;
    }

    cout << endl;
    cout << "La hora mas un segundo es, " << hour << ":" << minute << ":" << seconds << endl;
    cout << endl;

    return 0;
}

int main() {

    time();

    return 0;
}
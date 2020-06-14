#include <iostream>
#include <string>

using namespace std;

void salarioCalc(float , float, int);

int salarioEmpleados() {

    int count = 1;
    int empleados;
    float horas, horasExtra;
    float horasT;
    float horasE;

    cout << "Por favor ingresa la cantidad de empleados: ";
    cin >> empleados;
    cout << endl;


    while (count <= empleados) {
        cout << "Ingresa horas trabajadas del empleado num " << count << ": ";
        cin >> horas;
        cout << endl;

        horasT = horas;

        cout << "Ingresa horas extraordinarias trabajadas: ";
        cin >> horasExtra;
        cout << endl;

        horasE = horasExtra;

        //funcion para recibir las horas y efectuar los calculos de los salarios para cada empleado.
        salarioCalc(horasT, horasE, count);

        cout << "=================================================" << endl;
        cout << endl;

        count += 1;

    }

    return 0;
}

void salarioCalc(float horasT, float horasE, int empleado) {

    float salarioReal, salarioTotal;

    salarioTotal = (horasT * 1.75) + (horasE * 2.50);

    //Chequeo de suma para ver si el salario aplica al impuesto de renta.
    if (salarioTotal > 500) {
        salarioReal = salarioTotal - (salarioTotal * 0.04) - (salarioTotal * 0.0625) - (salarioTotal * 0.1);
    } else {
        salarioReal = salarioTotal - (salarioTotal * 0.04) - (salarioTotal * 0.0625);
    }

    cout << "Empleado " << empleado << " salario total " << "$" << salarioTotal << " y salario real " << "$" << salarioReal << endl;
    cout << endl;
}

int main() {

    salarioEmpleados();

    return 0;
}
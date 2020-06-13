#include <iostream>
#include <string>

int salarioCalc(float [], float [], int);

using namespace std;

int salarioEmpleados() {

    int count = 0;
    int empleados;
    float horas, horasExtra;
    float *horasTrabajadas = new float[empleados];
    float *horasExtraordinarias = new float[empleados];

    cout << "Por favor ingresa la cantidad de empleados: ";
    cin >> empleados;
    cout << endl;


    while (count < empleados) {
        cout << "Ingresa horas trabajadas del empleado num " << count + 1 << ":" << endl;
        cin >> horas;
        cout << endl;

        horasTrabajadas[count] = horas;

        cout << "Ingresa horas extraordinarias trabajadas: " << endl;
        cin >> horasExtra;
        cout << endl;

        horasExtraordinarias[count] = horasExtra;

        cout << "=================================================" << endl;
        cout << endl;

        count += 1;
    }
    
    salarioCalc(horasTrabajadas, horasExtraordinarias, empleados); 

    return 0;
}

int salarioCalc(float horasT[], float horasE[], int size) {

    float salarioReal, salarioTotal;

    for (int i = 0; i < size; i++) {
        
        salarioTotal = (horasT[i] * 1.75) + (horasE[i] * 2.50);

        if (salarioTotal > 500) {
            salarioReal = salarioTotal - (salarioTotal * 0.04) - (salarioTotal * 0.0625) - (salarioTotal * 0.1);
        } else {
            salarioReal = salarioTotal - (salarioTotal * 0.04) - (salarioTotal * 0.0625);
        }

        cout << "Empleado " << i + 1 << " salario total " << "$" << salarioTotal << " y salario real " << "$" << salarioReal << endl;
        cout << endl;

    }
    
    return 0;
}

int main() {

    salarioEmpleados();

    return 0;
}
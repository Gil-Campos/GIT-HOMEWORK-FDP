#include <iostream>

using namespace std;
void tomarNotas();
void calcNota(float notasEstudiante[][5], int limit);

void tomarNotas() {
    int estudiantes, counterEs = 1, counterNo = 0;
    float notasEstudiantes[estudiantes][5], nota;

    cout << endl;
    cout << "Ingrese la cantidad de estudiantes a los que se le ingresaran las notas por favor: ";
    cin >> estudiantes;
    cout << endl;

    while (counterEs <= estudiantes) 
    {   
        cout << endl;
        cout << "Notas estudiante " << counterEs << ":" << endl;
        while (counterNo < 5)
        {
            cin >> nota;
            notasEstudiantes[counterEs - 1][counterNo] = nota;
            counterNo += 1;
            //cout << "Contador de notas: " << counterNo - 1 << endl;
        }

        counterEs += 1;
        //cout << "Contador de estudiantes: " << counterEs << endl;
        counterNo = 0;
    } 

    calcNota(notasEstudiantes, estudiantes); 

}

void calcNota(float notasEstudiante[][5], int limit) 
{
    float sum = 0;

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += (notasEstudiante[i][j] * 0.20);
        }

        if (sum >= 6.0)
        {
            cout << "El alumno " << i << " a aprobado la materia" << endl;
        } else {
            cout << "El alumno " << i << " es una deshonra a su familia." << endl;
        }
    } 

}

int main() {
    tomarNotas();
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

//Declaring functions


const int longCad = 20;

struct costoPorArticulo
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

int main() {

    int cantiProdComprados = 0, counter = 1;
    struct costoPorArticulo arr1[cantiProdComprados];

    cout << endl;
    cout << "Por favor ingresa la cantidad de articulos comprados:" << endl;
    cin >> cantiProdComprados;
    cin.ignore(123, '\n');
    cout << endl;

    while (counter <= cantiProdComprados)
    {
        cout << "-Nombre del articulo " << counter << ":" << endl;
        cin.getline(arr1[counter - 1].nombreArticul, longCad + 1, '\n'); 
        cout << endl;
        counter += 1;
    }

    for (int i = 0; i < cantiProdComprados; i++)
    {
        cout << arr1[i].nombreArticul;
    }  

    return 0;
}
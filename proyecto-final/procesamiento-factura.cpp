#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int longCad = 20;

struct costoPorArticulo
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

//Declaring functions
void IncorporandoDatos(int size, costoPorArticulo []);
void costoArticulos(int size, costoPorArticulo []);

void IncorporandoDatos(int size, costoPorArticulo arr2[]) 
{
    string nombreArt;

    for (int i = 0; i < size; i++)
    {   
        cout << endl; 
        cout << "---------------------------------------------" << endl;
        cout << "Nombre del producto " << i + 1 << ":" << endl;
        getline(cin, nombreArt, '\n');
        strncpy(arr2[i].nombreArticul, nombreArt.c_str(), longCad);
        arr2[i].nombreArticul[longCad] = '\0';
        cout << "Cantidad comprada:" << endl;
        cin >> arr2[i].cantidad;
        cout << "Precio del articulo:" << endl;
        cin >> arr2[i].costoPorArticulo;
        cout << "---------------------------------------------" << endl;
        cin.ignore(123, '\n');
    }
}

int main() {

    int cantiProdComprados;

    cout << endl;
    cout << "Por favor ingresa la cantidad de articulos comprados:" << endl;
    cin >> cantiProdComprados;
    cin.ignore(123, '\n');

    costoPorArticulo arr1[cantiProdComprados];

    IncorporandoDatos(cantiProdComprados, arr1);

    return 0;
}
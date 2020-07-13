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
void IncorporandoDatos(int, costoPorArticulo []);
void costoArticulos(int, costoPorArticulo []);
void factura(int, costoPorArticulo []);

void IncorporandoDatos(int size, costoPorArticulo arr2[]) 
{
    string nombreArt;

    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {   
        cout << endl; 
        cout << "Nombre del producto " << i + 1 << ":" << endl;
        getline(cin, nombreArt, '\n');
        strncpy(arr2[i].nombreArticul, nombreArt.c_str(), longCad);
        arr2[i].nombreArticul[longCad] = '\0';
        cout << "Cantidad comprada:" << endl;
        cin >> arr2[i].cantidad;
        cout << "Precio del articulo:" << endl;
        cin >> arr2[i].costoPorArticulo;
        cin.ignore(123, '\n');
    }
    cout << endl;
    cout << "---------------------------------------------" << endl;
}

void costoArticulos(int size, costoPorArticulo arr3[]) 
{
    for (int i = 0; i < size; i++)
    {
        arr3[i].precio = (float)arr3[i].cantidad * arr3[i].costoPorArticulo;
    }
    
}

void factura(int size, costoPorArticulo arr4[])
{
    cout << endl;
    cout << "Esta es la factura de tu compra" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "- " <<  arr4[i].cantidad << "x " << " " << arr4[i].nombreArticul << " $" << arr4[i].costoPorArticulo << endl;
    }
    
}

int main() {

    int cantiProdComprados;
    float gasto = 0;

    cout << endl;
    cout << "Por favor ingresa la cantidad de articulos comprados:" << endl;
    cin >> cantiProdComprados;
    cin.ignore(123, '\n');

    costoPorArticulo arr1[cantiProdComprados];

    IncorporandoDatos(cantiProdComprados, arr1);
    costoArticulos(cantiProdComprados, arr1);
    factura(cantiProdComprados, arr1);
    
    for (int i = 0; i < cantiProdComprados; i++)
    {
        gasto += arr1[i].precio;
    }

    cout << endl;
    cout << "Total gastado $" << gasto;
    cout << endl;

    return 0;
}
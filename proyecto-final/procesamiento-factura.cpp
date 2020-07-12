#include <iostream>
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

int main() {

    int cantiProdComprados;
    costoPorArticulo arr1[cantiProdComprados];

    cout << "Por favor pon la cantidad de articulos que has comprado:" << endl;
    cin >> cantiProdComprados;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;
void encryptData();

void encryptData() {

    int limit; 
    char arr1[limit];

    cout << endl;
    cout << "Cuantos caracteres tiene tu palabra u oracion (incluyendo espacios): ";
    cin >> limit;
    cin.ignore(123, '\n');
    cin.clear();
    cout << endl;

    cout << "tu palabra u oracion:" << endl;
    /*
    se le suma 1 al limite porque su declaracion equivale (int i = 0; i < limit - 1; i++), significando que i se queda un valor menos de las casillas 
    del arreglo arr1[i], no pudiendo usar todas las casillas del arreglo que necesitamos para poder meter todos los caracteres.
    */
    cin.getline(arr1, limit + 1);   
    cout << endl;

    for (int i = 0; i < limit; i++) {
        switch (arr1[i]) {
        case 'm':
            arr1[i] = '0';
            break;
        case 'u':
            arr1[i] = '1';
            break;
        case 'r':
            arr1[i] = '2';
            break;
        case 'c':
            arr1[i] = '3';
            break;
        case 'i':
            arr1[i] = '4';
            break;
        case 'e':
            arr1[i] = '5';
            break;
        case 'l':
            arr1[i] = '6';
            break; 
        case 'a':
            arr1[i] = '7';
            break;
        case 'g':
            arr1[i] = '8';
            break;
        case 'o':
            arr1[i] = '9';
            break;
        default:
            arr1[i] = arr1[i];
            break;
        }
    }

    for (int i = 0; i < limit; i++)
    {
        cout << arr1[i];
    }
      

}

int main() {
    encryptData();
    return 0;
}
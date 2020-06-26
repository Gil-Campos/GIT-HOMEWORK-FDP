#include <iostream>

using namespace std;

int checkArray();

int checkArray() {

    //Arreglo dado
    int arr1[10] = {1,5, 6, 1, 1, 9, 8, 1, 3, 1};
    //numero y contador para verificar cuantas veces se encuentra el entero en el arreglo
    int checkNum = 1, counter = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] == checkNum)
        {
            //Se guarda la cantidad de veces que el numero se encuentra en el arreglo.
            counter += 1;
        }
        
    }
    
    cout << "The number " << checkNum << " is " << counter << " times in the array.";

    return 0;

}

int main() {

    checkArray();

    return 0;
}
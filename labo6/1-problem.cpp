#include <iostream>
#include <array>

using namespace std;

int oddNumbers();

int oddNumbers() {
    int arr1[100], counter = 0, limit = 100;

    for (int i = 0; counter < limit; i++)
    {
        if (i % 2 != 0) {
            arr1[counter] = i;
            counter += 1;
        }
    }

    for (int i = 0; i < limit; i++)
    {
        cout << arr1[counter -= 1] << endl;
    }
    
    return 0;
    
}

int main() {

    oddNumbers();

    return 0;
}
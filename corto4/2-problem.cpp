#include <iostream>

using namespace std;
void estaturaAlumnos();
int calcMediaEstaturas(int estaturas[], int limit);

void estaturaAlumnos() {
    int arribaMedia = 0, abajoMedia = 0, igualMedia = 0;
    int media, estaturas[25], counter = 1, data;

    cout << "Por favor mete la estatura de cada estudiante en centimetros, otro unidad causara problema:" << endl;

    while (counter <= 25)
    {
        cin >> data;
        estaturas[counter - 1] = data;
        counter += 1;
    }
    

    media = calcMediaEstaturas(estaturas, 25);

    for (int i = 0; i < 25; i++) 
    {
        if (estaturas[i] < media) {
            abajoMedia += 1;
        } else if (estaturas[i] > media) {
            arribaMedia += 1;
        } else {
            igualMedia += 1;
        }
    }

    cout << endl;
    cout << "Hay " << arribaMedia << " estudiantes con una estatura arriba de la estatura media.";
    cout << endl;
    cout << "Hay " << abajoMedia << " estudiantes con una estatura abajo de la estatura media.";
    cout << endl;
    cout << "Hay " << igualMedia << " estudiantes con una estatura igual a la estatura media.";
}

int calcMediaEstaturas(int estaturas[], int limit) {
    int sum = 0;
    for (int i = 0; i < limit; i++) {
        sum += estaturas[i];
    }

    return sum / limit;
}

int main() {
    estaturaAlumnos();
    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void quadraticFormula(float a, float b, float c) {
    
    float negativeB = b * -1;
    float bSqr = b * b;
    float twoTimesA = a * 2;
    float fourTimesAC = 4 * a * c;
    float calcPositiveAnswer, calcNegativeAnswer;

    calcPositiveAnswer = (negativeB + sqrt(bSqr - fourTimesAC)) / twoTimesA;
    calcNegativeAnswer = (negativeB - sqrt(bSqr - fourTimesAC)) / twoTimesA;

    cout << "This is your x1 result: " << setprecision(4) << calcPositiveAnswer << "," << " This is your x2 result: " << setprecision(4) << calcNegativeAnswer;
}

int main() {

    float a, b, c;

    cout << endl;
    cout << "*This program works only with integers*" << endl;
    cout << "Please enter a, b and c to calculate the result of your equation: " << endl;

    cout << "a.";
    cin >> a;
    cout << endl;

    cout << "b.";
    cin >> b;
    cout << endl;

    cout << "c.";
    cin >> c;
    cout << endl;

    quadraticFormula(a, b, c);

    cout << endl;

    return 0;
}
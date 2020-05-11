#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string quadraticFormula(int a, int b, int c) {
    
    int negativeB = b * -1;
    int bSqr = b * b;
    int twoTimesA = a * 2;
    int fourTimesAC = 4 * a * c;
    int calcPositiveAnswer, calcNegativeAnswer;
    string positiveAnswer;
    string negativeAnswer;
    string result;

    calcPositiveAnswer = (negativeB + sqrt(bSqr - fourTimesAC)) / twoTimesA;
    calcNegativeAnswer = (negativeB - sqrt(bSqr - fourTimesAC)) / twoTimesA;

    positiveAnswer = to_string(calcPositiveAnswer);
    negativeAnswer = to_string(calcNegativeAnswer);

    result = "This is your x1 result: " + positiveAnswer + "," + " This is your x2 result: " + negativeAnswer;
    return result;
}

int main() {

    int a, b, c;
    string response;

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

    response = quadraticFormula(a, b, c);

    cout << response << endl;
    cout << endl;

    return 0;
}
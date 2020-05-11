#include <iostream>
#include <string>

using namespace std;

int main() {

    int a, b, c;
    int average;
    string response;

    cout << endl;
    cout << "*This program works only with integers*" << endl;
    cout << "Enter 3 numbers to get the average: " << endl;

    cin >> a;
    cin >> b;
    cin >> c;
      
    average = (a + b + c) / 3;
    response = to_string(average);

    cout << endl;
    cout << "This is your average: " << response << endl;
    cout << endl;

    return 0;
}
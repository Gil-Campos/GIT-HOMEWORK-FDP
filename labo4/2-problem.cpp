#include <iostream>

using namespace std;

float perimeter(float radius) {

    float pi = 3.14;
    int twoBy = 2;
    float calcOfPerimeter;

    calcOfPerimeter = twoBy * pi * radius;

    return calcOfPerimeter;
}

float area(float radius) {

    float pi = 3.14;
    float sqRadius = radius * radius;
    float calcArea;

    calcArea = pi * sqRadius;

    return calcArea;
}

int main() {

    float radius, perimeterResponse, areaResponse;
    
    cout << endl;
    cout << "*This program works only with integers*" << endl;
    cout << "Enter the radius of the circle, to calculate the area and the perimeter: " << endl; 
    cin >> radius;
    
    perimeterResponse = perimeter(radius);
    areaResponse = area(radius); 

    cout << endl;
    cout << "This is the perimeter of your circle: " << perimeterResponse << endl;
    cout << "This is the area of your circle: " << areaResponse << endl;
    cout << endl;

    return 0;
}
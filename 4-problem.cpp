#include <iostream>
#include <iomanip>

using namespace std;

float moneySpent(int quantity, string name, float price) {

    string product, result;

    float total = quantity * price;
    product = name;

    return total;
}

int main() {

    string product;
    float price, result;
    int quantity;

    cout << endl;
    cout << "Enter the name of the product you want to buy:" << endl;
    cin >> product;

    cout << endl;
    cout << "Enter the price of the product: " << endl;
    cin >> price;

    cout << endl;
    cout << "Enter the quantity of the product: " << endl;
    cin >> quantity;

    result = moneySpent(quantity, product, price);

    cout << "This is your total spent: " << setprecision(4) << result << endl;
    cout << endl;

    return 0;
}
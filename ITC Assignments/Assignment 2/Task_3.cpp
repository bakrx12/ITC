#include <iostream>
using namespace std;

int main()
{
    int value = 0;
    float price = 0.0;
    int quantity = 0;
    float cost = 0.0;
    float length = 0.0;

    cout << "Enter value: ";
    cin >> value;

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter cost: ";
    cin >> cost;

    cout << "Enter length: ";
    cin >> length;

    cout << "Value: " << value << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Cost: " << cost << endl;
    cout << "Length: " << length << endl;

    cout << "Multiplication: "
         << length * quantity << endl;

    cout << "Division: "
         << quantity / cost << endl;

    cout << "Tables needed: "
         << quantity / 4 << endl;

    cout << "Total cost: "
         << quantity * cost << endl;

    cout << "Average: "
         << (length + cost + quantity) / 3 << endl;

    /*
    I learned user input using cin
    and calculations using variables.
    */

    return 0;
}

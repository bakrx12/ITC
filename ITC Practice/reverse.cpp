#include<iostream>
using namespace std;
int main()
{   
    int integer= 0;
    float decimal = 0;

    cout << "Enter a integer: ";
    cin >> integer;
    cout << "Enter a decimal: ";
    cin >> decimal;

    if (integer <= 5 && integer >= 15)
    { cout << endl << "Integer is within 5 and 15"; }
    else
    { cout << endl << "Integer is NOT within 5 and 15"; }
    if (integer > 999 && integer <= 9999)
    { cout << endl << "Integer is exactly 4 digits"; }
    else
    { cout << endl << "Integer is NOT exactly 4 digits"; }
    if (decimal > 45)
    { cout << endl << "Decimal is more than 45"; }
    else
    { cout << endl << "Decimal is NOT more than 45"; }
    if (decimal > 0 && decimal <=9999)
    { cout << endl << "Mantissa of float is exactly 3 digits"; }
    else
    { cout << endl << "Mantissa of float is NOT exactly 3 digits"; }
}

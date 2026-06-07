/*
Task 3:

- read length, width, height, draw character, and x and y from user
if-else is used to decide which columns to fill in each row.

What I learned:
- nested loops to draw row by row and column by column
 */

#include <iostream>
using namespace std;

int main() {
    int length, width, height, x, y;
    char dc;

    //data
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter draw character: ";
    cin >> dc;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;


    // Shape 1: Vertical Line
    cout <<endl << "Vertical Line:" << endl;
    for (int row = 0; row < length; row++) {
        for (int s = 0; s < x; s++)
            cout << " ";
        cout << dc << endl;
    }

    // Shape 2: Filled Rectangle
    cout <<endl<< "Filled Rectangle:" << endl;
    for (int row = 0; row < length; row++) {
        for (int s = 0; s < x; s++)
            cout << " ";
        for (int col = 0; col < width; col++)
            cout << dc;
        cout << endl;
    }

    // Shape 3: Hollow Rectangle
    cout <<endl<< "Hollow Rectangle:" << endl;
    for (int row = 0; row < length; row++) {
        for (int s = 0; s < x; s++)
            cout << " ";
        for (int col = 0; col < width; col++) {
            if (row == 0 || row == length - 1 || col == 0 || col == width - 1)
                cout << dc;
            else
                cout << " ";
        }
        cout << endl;
    }

    // Shape 4: Right-angle Triangle
    // row 1 has 1 character, row 2 has 2, and so on
    cout << endl<< "Right-angle Triangle:" << endl;
    for (int row = 1; row <= height; row++) {
        for (int s = 0; s < x; s++)
            cout << " ";
        for (int col = 1; col <= row; col++)
            cout << dc;
        cout << endl;
    }

    // Shape 5: Equilateral Triangle
    // each row has (height - row) leading spaces and (2*row - 1) characters
    cout <<endl<< "Equilateral Triangle:" << endl;
    for (int row = 1; row <= height; row++) {
        for (int s = 0; s < x; s++)
            cout << " ";
        for (int sp = 0; sp < height - row; sp++)
            cout << " ";
        for (int col = 0; col < 2 * row - 1; col++)
            cout << dc;
        cout << endl;
    }

    return 0;
}

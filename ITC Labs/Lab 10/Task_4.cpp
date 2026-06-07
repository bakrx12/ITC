/*
Task 4:
- drawing letter shapes

What I learned:
- if-else conditions inside loops produce letter shapes.
 */

#include <iostream>
using namespace std;

int main() {
    int width, height, x, y;
    char dc;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter draw character: ";
    cin >> dc;
    cout << "Enter x (left offset): ";
    cin >> x;
    cout << "Enter y (top offset): ";
    cin >> y;

    int midRow = height / 2;
    int midCol = width / 2;

    for (int i = 0; i < y; i++)
        cout << endl;

    // Letter H: left col, right col, and middle row filled
    cout << "H:" << endl;
    for (int row = 0; row < height; row++) {
        for (int s = 0; s < x; s++) cout << " ";
        for (int col = 0; col < width; col++) {
            if (col == 0 || col == width - 1 || row == midRow)
                cout << dc;
            else
                cout << " ";
        }
        cout << endl;
    }

    // Letter X: 
    cout << "X:" << endl;
    for (int row = 0; row < height; row++) {
        for (int s = 0; s < x; s++) cout << " ";
        int d1 = row * (width - 1) / (height - 1);
        int d2 = (height - 1 - row) * (width - 1) / (height - 1);
        for (int col = 0; col < width; col++) {
            if (col == d1 || col == d2)
                cout << dc;
            else
                cout << " ";
        }
        cout << endl;
    }

    // Letter A:

    cout << "A:" << endl;
    for (int row = 0; row < height; row++) {
        for (int s = 0; s < x; s++) cout << " ";
        // right side: col == width-1-leftCol
        int leftCol  = (height - 1 - row) * midCol / (height - 1);

        // left side:  col == (height-1-row)*midCol/(height-1)
        int rightCol = width - 1 - leftCol;
        
        for (int col = 0; col < width; col++) {
            if (col == leftCol || col == rightCol)
                cout << dc;
            else if (row == midRow && col > leftCol && col < rightCol)
                cout << dc;
            //for empty space
            else
                cout << " ";
        }
        cout << endl;
    }

    // Letter V
    // left side:  col == row*midCol/(height-1)
    // right side: col == width-1-leftCol
    cout << "V:" << endl;
    for (int row = 0; row < height; row++) {
        for (int s = 0; s < x; s++) cout << " ";
        int leftCol  = row * midCol / (height - 1);
        int rightCol = width - 1 - leftCol;
        for (int col = 0; col < width; col++) {
            if (col == leftCol || col == rightCol)
                cout << dc;
            else
                cout << " ";
        }
        cout << endl;
    }

    // Letter N
    cout << "N:" << endl;
    for (int row = 0; row < height; row++) {
        for (int s = 0; s < x; s++) cout << " ";
        int diagCol = row * (width - 1) / (height - 1);
        for (int col = 0; col < width; col++) {
            if (col == 0 || col == width - 1 || col == diagCol)
                cout << dc;
            else
                cout << " ";
        }
        cout << endl;
    }

    // Letter T
    cout << "T:" << endl;
    for (int row = 0; row < height; row++) {
        for (int s = 0; s < x; s++) cout << " ";
        for (int col = 0; col < width; col++) {
            if (row == 0 || col == midCol)
                cout << dc;
            else
                cout << " ";
        }
        cout << endl;
    }

    // Letter M
    // left diagonal (rows 0 to midRow):  col == row*midCol/midRow
    // right diagonal (rows 0 to midRow): col == width-1-leftDiag
    cout << "M:" << endl;
    for (int row = 0; row < height; row++) {
        for (int s = 0; s < x; s++) cout << " ";
        int leftDiag  = -1;
        int rightDiag = -1;
        if (row <= midRow) {
            leftDiag  = row * midCol / midRow;
            rightDiag = width - 1 - leftDiag;
        }
        for (int col = 0; col < width; col++) {
            if (col == 0 || col == width - 1)
                cout << dc;
            else if (col == leftDiag || col == rightDiag)
                cout << dc;
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

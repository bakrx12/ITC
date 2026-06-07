/*
Task 2

 HOW CODE WORKS:
- Part 1: '#' both opens and closes the hidden section
- Part 2: '$' opens and '%' closes the hidden section

 What I learned:
 - read a full sentence
 */

#include <iostream>
using namespace std;

int main() {

    char ch;

    // 1. delimiter is #
    cout << "1. Sentence with hidden data between # characters:" << endl;

    cout << "Enter here: ";

    int inside = 0;

    cin.get(ch);
    while (ch != '\n') {
        if (ch == '#') {
            if (inside == 0) {
                inside = 1;
                cout << endl;
                cout << "[";
            }
            else {
                inside = 0;
                cout << "] ";
            }
        }
        else if (inside == 1) {
            cout << ch;
        }
        cin.get(ch);
    }

    cout << endl;

    //PART 2: '$' opens, '%' closes
    cout << "\n2. Sentence with hidden data between $ and % characters:" << endl;
 
    cout << "Enter here: ";

    int inside2 = 0;

    cin.get(ch);
    while (ch != '\n') {
        if (ch == '$') {
            inside2 = 1;
               cout << endl;
            cout << "[";
        }
        else if (ch == '%') {
            inside2 = 0;
            cout << "] ";
        }
        else if (inside2 == 1) {
            cout << ch;
        }
        cin.get(ch);
    }

    cout << endl;

    return 0;
}

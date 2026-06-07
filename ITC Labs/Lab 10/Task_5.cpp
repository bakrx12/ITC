/*
Task 5

How it workjs:
-reads full name from user
checks if there's any space in between the name
registers initial

What I learned:
- how to read characters
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Enter your full name: ";

    char ch;
    int newWord = 1;

    cout << "Initials: ";

    cin.get(ch);
    while (ch != '\n') {
        if (ch == ' ') {
            newWord = 1;
        }
        else if (newWord == 1) {
            cout << ch << " ";
            newWord = 0;
        }
        cin.get(ch);
    }

    cout << endl;

    return 0;
}

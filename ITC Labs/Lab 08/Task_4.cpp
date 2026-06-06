#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character for ASCII Code: ";
    cin >> ch;

    //converting ch into int to give ASCII value
    //works for uppercase, lowercase, and digital ch
    int asciiValue = ch; 

    cout << "The ASCII value of '" << ch << "' is: " << asciiValue << endl;

    return 0;
}

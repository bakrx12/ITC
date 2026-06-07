#include <iostream>
using namespace std;

/*
Task 1
HOW CODE WORKS:
 - read exactly 20 characters one by one using a for loop
 - check what type it is using if-else conditions
 - counters are incremented based on each count

What I learned:
- how to use char data type in C++.
- ASCII ranges for character
*/

int main() {
    int upperCount = 0;
    int lowerCount = 0;
    int punctCount = 0;
    int vowelCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    char ch;

    cout << "Enter 20 characters one by one (press Enter after each):" << endl;

    for (int i = 1; i <= 20; i++) {
        cout << "Character " << i << ": ";
        cin >> ch;

        // Check UPPERCASE
        if (ch >= 'A' && ch <= 'Z') {
            upperCount++;
        }
        // Check lowercase
        else if (ch >= 'a' && ch <= 'z') {
            lowerCount++;
        }
        // Check digit
        else if (ch >= '0' && ch <= '9') {
            digitCount++;
        }
        // Check punctuation
        else if (ch == ',' || ch == ';' || ch == '.' ||
                 ch == ':' || ch == '!' || ch == '?') {
            punctCount++;
        }
        // Check others
        else {
            otherCount++;
        }

        // Check vowels (both upper and lower case) separately ---
        // Vowels are: a, e, i, o, u  (A, E, I, O, U)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }
    cout << endl;
    cout << "Uppercase characters : " << upperCount  << endl;
    cout << "Lowercase characters : " << lowerCount  << endl;
    cout << "Punctuation characters: " << punctCount << endl;
    cout << "Vowel characters     : " << vowelCount  << endl;
    cout << "Digit characters     : " << digitCount  << endl;
    cout << "Other characters     : " << otherCount  << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Write a Complete C++ program to read a single character
    // and check its type and convert lowercase/uppercase.

    char character = '\0';

    cout << "Enter a character: ";
    cin >> character;

    // checks lowercase character

    if(character >= 'a' && character <= 'z')
    {
        cout << "Lowercase character\n";
        character = character - 32;

        cout << "Converted to Uppercase: ";
        cout << character << endl;
    }

    // checks uppercase character

    else if(character >= 'A' && character <= 'Z')
    {
        cout << "Uppercase character\n";

        character = character + 32;

        cout << "Converted to Lowercase: ";
        cout << character << endl;
    }

    // checks digit character

    else if(character >= '0' && character <= '9')
    {
        cout << "Digit character\n";
    }

    // checks vowel character
    // accounting for both upper and lower case 

    else if(character == 'a' || character == 'e' ||
            character == 'i' || character == 'o' ||
            character == 'u' || character == 'A' ||
            character == 'E' || character == 'I' ||
            character == 'O' || character == 'U')
    {
        cout << "Vowel character\n";
    }

    // checks punctuation character

    else if(character == ',' || character == ';' ||
            character == ':' || character == '?' ||
            character == '!')
    {
        cout << "Punctuation character\n";
    }

    // if none of the above

    else
    {
        cout << "None of the given types\nTry again.";
    }

    /*
    This code checks the type of a character
    and converts lowercase/uppercase characters.

    LEARNED::
    - char data type
    - ASCII conversion
    - if else statements
    - character comparisons
    */

    return 0;
}
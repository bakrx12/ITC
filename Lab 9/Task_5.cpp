#include <iostream>
using namespace std;

int main()
{
    //statement:
    //Read an English sentence from user
    //Count lowercase, uppercase, digits
    //vowels and punctuation characters
    //Convert lowercase to uppercase
    //uppercase to lowercase
    //remove digits and symbols

    char character = '\0';
    int lowercaseCount = 0;
    int uppercaseCount = 0;
    int digitCount = 0;
    int vowelCount = 0;
    int punctuationCount = 0;

    cout << "Enter sentence using - instead of spaces";
    cout << " and end with . (full stop)\n";

    // loop repeats until full stop

    while(character != '.')
    {
        cin >> character;

        // checks lowercase

        if(character >= 'a' && character <= 'z')
        {
            lowercaseCount++;

            if(character == 'a' || character == 'e' ||
               character == 'i' || character == 'o' ||
               character == 'u')
            {
                vowelCount++;
            }

            character = character - 32;
        }

        // checks uppercase

        else if(character >= 'A' && character <= 'Z')
        {
            uppercaseCount++;

            if(character == 'A' || character == 'E' ||
               character == 'I' || character == 'O' ||
               character == 'U')
            {
                vowelCount++;
            }

            character = character + 32;
        }

        // checks digits

        else if(character >= '0' && character <= '9')
        {
            digitCount++;

            character = '\0';
        }

        // symbols

        else if(character == '@' || character == '#' ||
                character == '$' || character == '%' ||
                character == '&')
        {
            character = '\0';
        }

        // punctuation check

        if(character == ',' || character == '.')
        {
            punctuationCount++;
        }

        // convert dash - to space

        if(character == '-')
        {
            character = ' ';
        }

        // display only valid characters

        if(character != '\0')
        {
            cout << character;
        }
    }

    cout << endl;

    cout << "Count of lowercase Characters is ";
    cout << lowercaseCount << endl;

    cout << "Count of UPPERCASE Characters is ";
    cout << uppercaseCount << endl;

    cout << "Count of Digit Characters is ";
    cout << digitCount << endl;

    cout << "Count of Vowels Characters is ";
    cout << vowelCount << endl;

    cout << "Count of Punctuation Characters is ";
    cout << punctuationCount << endl;

    /*
    This code reads an English sentence
    and performs counting and conversions.

    LEARNED:
    - while loop with characters
    - ASCII conversion for character
    - counting using variables (incrememt operator)
    */

    return 0;
}
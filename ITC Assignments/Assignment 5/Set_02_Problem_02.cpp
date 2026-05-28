#include <iostream>
using namespace std;

int main()
{
    char ch = '\0';

    int lowercase = 0;
    int uppercase = 0;
    int digits = 0;
    int vowels = 0;
    int punctuation = 0;

    cout << "Please Enter an English Sentence:\n";

    while(ch != '.')
    {
        cin >> ch;

        // lowercase

        if(ch >= 'a' && ch <= 'z')
        {
            lowercase++;

            if(ch == 'a' || ch == 'e' ||
               ch == 'i' || ch == 'o' ||
               ch == 'u')
            {
                vowels++;
            }

            ch = ch - 32;
        }

        // uppercase

        else if(ch >= 'A' && ch <= 'Z')
        {
            uppercase++;

            char small;

            small = ch + 32;

            if(small == 'a' || small == 'e' ||
               small == 'i' || small == 'o' ||
               small == 'u')
            {
                vowels++;
            }

            ch = small;
        }

        // digits

        else if(ch >= '0' && ch <= '9')
        {
            digits++;
            ch = '\0';
        }

        // remove symbols

        else if(ch == '@' || ch == '#' ||
                ch == '$' || ch == '%' ||
                ch == '&')
        {
            ch = '\0';
        }

        // punctuation

        if(ch == ',' || ch == '.')
        {
            punctuation++;
        }

        // underscore to space

        if(ch == '_')
        {
            ch = ' ';
        }

        if(ch != '\0')
        {
            cout << ch;
        }
    }

    cout << endl;

    cout << "Count of lowercase Characters is " << lowercase << endl;

    cout << "Count of UPPERCASE Characters is " << uppercase << endl;

    cout << "Count of Digit Characters is " << digits << endl;

    cout << "Count of Vowels Characters is " << vowels << endl;

    cout << "Count of Punctuation (, .) Characters is " << punctuation << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    char ch = '\0';

    int lowercase = 0;
    int uppercase = 0;
    int digits = 0;

    cout << "Enter Sentence:\n";
    cout << "Use _ instead of spaces and end with .\n";

    for( ; ch != '.' ; )
    {
        cin >> ch;

        if(ch >= 'a' && ch <= 'z')
        {
            lowercase++;
            ch = ch - 32;
        }

        else if(ch >= 'A' && ch <= 'Z')
        {
            uppercase++;
            ch = ch + 32;
        }

        else if(ch >= '0' && ch <= '9')
        {
            digits++;
            ch = '\0';
        }

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

    cout << lowercase << endl;
    cout << uppercase << endl;
    cout << digits << endl;

    return 0;
}

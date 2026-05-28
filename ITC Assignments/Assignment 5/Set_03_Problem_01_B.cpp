#include <iostream>
using namespace std;

int main()
{
    char ch = '\0';

    int lowercase = 0;
    int uppercase = 0;
    int digits = 0;

    for(int times = 10; times > 0; times--)
    {
        cout << "Enter a character: ";
        cin >> ch;

        if(ch >= 'a' && ch <= 'z')
        {
            lowercase++;
        }

        if(ch >= 'A' && ch <= 'Z')
        {
            uppercase++;
        }

        if(ch >= '0' && ch <= '9')
        {
            digits++;
        }
    }

    cout << "Lowercase: " << lowercase << endl;

    cout << "Uppercase: " << uppercase << endl;

    cout << "Digits: " << digits << endl;

    return 0;
}
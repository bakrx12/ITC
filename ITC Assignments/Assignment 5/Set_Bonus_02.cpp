#include <iostream>
using namespace std;

int main()
{
    char ch = '\0';
    char special;

    int hidden = 0;

    cout << "Please enter a special character: ";
    cin >> special;

    cout << "Enter sentence and end with .\n";

    cin >> noskipws;

    while(ch != '.')
    {
        cin >> ch;

        if(ch == special)
        {
            hidden++;

            if(hidden % 2 == 0)
            {
                cout << endl;
            }
        }

        if(hidden % 2 == 1)
        {
            if(ch == '-')
            {
                ch = ' ';
            }

            cout << ch;
        }
    }

    return 0;
}
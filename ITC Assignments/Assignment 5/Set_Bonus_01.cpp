#include <iostream>
using namespace std;

int main()
{
    char ch = '\0';

    int hidden = 0;

    cout << "Enter sentence and end with .\n";

    cin >> noskipws;

    while(ch != '.')
    {
        cin >> ch;

        if(ch == '#')
        {
            hidden++;

            if(hidden % 2 == 0)
            {
                cout << endl;
            }

            continue;
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
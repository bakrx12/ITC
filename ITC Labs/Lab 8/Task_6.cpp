#include <iostream>
using namespace std;

int main() 
{
    char ch;
    int sentnc = 1;
    // 1 means continue running, 0 means stop

    cout << "Use '-' instead of spaces and end with '.'";
    cout << "\nEnter English sentence: ";

    //while there isnt full stop, it runs
    while (sentnc == 1 && cin >> ch) 
    {
        // lowercase characters to uppercase
        if (ch >= 'a' && ch <= 'z') 
        {
            ch = ch - 32;
            //  ASCII table (elite ball knowledge)
            cout << ch;
        }
        // uppercase characters to lowercase
        else if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ch + 32;
            //  ASCII table (elite ball knowledge)
            cout << ch;
        }
        // '-' character to a space character ' '
        else if (ch == '-') 
        {
            cout << ' ';
        }
        // 4. If it's a full stop,
        else if (ch == '.') 
        {
            cout << ch;
            sentnc = 0; 
        }
        // Non-English characters are ignored automatically
    }

    cout << endl;
    return 0;
}

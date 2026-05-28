#include<iostream>

/*
Write a complete C++ program to read 10 characters from the user, count and display number of lowercase
English characters, number of uppercase English characters and number of digit characters
For example: if user entered these values: 3a B q 4 Q 6 x 9 U the program should display the following:
Number of lowercase English characters is 3
Number of uppercase English characters is 3
Number of digit English characters is 4
*/

using namespace std;

int main()
{
    char ch = '\0';
    int times = 10;
    int lowercase = 0;
    int uppercase = 0;
    int digits = 0;

    while(times > 0)
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

        times--;
    }

    cout << "Number of lowercase English characters is " << lowercase << endl;

    cout << "Number of uppercase English characters is " << uppercase << endl;

    cout << "Number of digit English characters is " << digits << endl;

    return 0;
}

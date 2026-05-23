#include <iostream>
using namespace std;

int main() {

    //reading value
    int amount;
    cout << "Enter amount of time to read value: ";
    cin >> amount;

    while (amount > 0)
    {
        char ch;
        cout << "Enter a character: ";
        cin >> ch;
        int asciiValue =ch; 
        int uperc =0, lowerc =0, nonE = 0, digit = 0;
        //ascii table  (elite ball knowledge)
        char lowerUper = asciiValue - 32;
        char uperLower = asciiValue + 32;

        if (asciiValue >= 65 && asciiValue <=90 )
        {
            uperc++;
            //only printing lowercase conversion
            //incase of uppercase english value
            cout << "\nLowercase conversion: ";
            cout << uperLower;
            
        }
        if (asciiValue >= 97 && asciiValue <=122 )
        {
            //only printing upercase conversion
            //incase of lowercase english value
            lowerc++;
            cout << "\nUpercase conversion: ";
            cout << lowerUper;
        }
        if (asciiValue >= 48 && asciiValue <=57 )
        {
            digit++;
        }
        if (asciiValue >= 0 && asciiValue <= 64 && asciiValue > 91 && asciiValue >= 96 && asciiValue <=123)
        {
            nonE++;
        }


        //printing all counted values
        cout <<endl;
        cout << "Count of Lowercase English characters: ";
        cout << lowerc;
        cout << "\nCount of Uppercase English characters: ";
        cout <<uperc;
        cout << "\nCount of Non-English characters: ";
        cout << nonE;
        cout << "\nCount of Digits: " <<digit <<endl;

    }
    

    return 0;
}

#include <iostream>
using namespace std;

//learning: 
//skills:
//experience: 

int main()
{
    int ya = 0, oi = 0;
    cout << "Enter first value: ";
    cin >> ya;
    cout << "Enter second value: ";
    cin >> oi;

    //checking positive and negative
    if (ya > 0 && oi < 0)
    {
        cout << ya << " is positive";
        cout << endl << oi << " is negative" <<endl;
    }
    if (oi > 0 && ya < 0)
    {
        cout << oi << " is positive";
        cout << endl << ya << " is negative"<<endl;
    }
    else if (ya > 0 && oi > 0)
    {
        cout << "Both " << ya << " and " << oi << " are positive" << endl;
    }
    else if (ya < 0 && oi < 0)
    {
        cout << "Both " << ya << " and " << oi << " are negative" << endl;
    }

    //checking even or odd
    if (ya % 2 == 0)
    {
        cout << endl << ya << " is even";
    }
    if (oi % 2 == 0)
    {
        cout << endl << oi << " is even";
    }
    else if (ya % 2 != 0)
    {
        cout << endl << ya << " is odd";
    }
    else if (oi % 2 != 0)
    {
        cout << endl << oi << " is odd";
    }

    //checking if odd and negative or positive
    if (ya % 2 != 0 && ya < 0)
    {
        cout << ya << " is odd and negative";
    }
    if (oi % 2 != 0 && oi < 0)
    {
        cout << oi << " is odd and negative";
    }
    if (ya % 2 != 0 && ya > 0)
    {
        cout << ya << " is odd and positive";
    }
    if (oi % 2 != 0 && oi > 0)
    {
        cout << oi << " is odd and positive";
    }

    //checking if even and negative

    if (ya % 2 == 0 && ya < 0)
    {
        cout << ya << " is even and negative";
    }
    if (oi % 2 == 0 && oi < 0)
    {
        cout << oi << " is even and negative";
    }
    if (ya % 2 == 0 && ya > 0)
    {
        cout << ya << " is even and positive";
    }
    if (oi % 2 == 0 && oi > 0)
    {
        cout << oi << " is even and positive";
    }


    return 0;
}

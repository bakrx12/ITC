#include<iostream>
using namespace std;
int main()
{   
    //pattern practice

    int choice = 0, n =0;
    cout << "This program offers multiple patterns: ";
    cout << "\n1. Square (filled)";
    cout << "\n2. Increasing Triangle";
    cout << "\n3. Decreasing Triangle";
    cout << "\n4. Right sided Increasing Triangle";
    cout << "\n5. Right sided Decreasing Triangle";

    cout << "\n\nEnter choice: ";
    cin >> choice;


    //keep this in mind:
    //we always print from left to right

    char ch;
    cout << "Enter character: ";
    cin >> ch;
    cout << "Enter number/length: ";
    cin >> n;
    cout << endl;

    //square or rectangle (filled)
    if (choice == 1)
    {
        for (int i = 0; i<=n-1; i++)
        {
            for (int j = 0; j<=n; j++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }

    //increasing triangle
    else if (choice == 2)
    {
        for (int i = 0; i<n; i++)
        {
            for (int j = 0; i>j; j++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }

    //decreasing triangle
    else if (choice == 3)
    {
        for (int i =0; i<=n; i++)
        {
            for (int j=i; j<=n; j++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }

    //right sided increasing triangle
    else if (choice == 4)
    {
        for (int i = 0; i<=n; i++)
        {
            for (int j=i; j<=n;j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }

    //right sided decreasing triangle
    else if (choice == 5)
    {
        for (int i = 0; i<=n; i++)
        {
            for (int j=0; j<=i;j++)
            {
                cout << " ";
            }
            for (int j = i; j <= n; j++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }
}

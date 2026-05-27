#include <iostream>
using namespace std;

int main()
{
    int marks =0;

    cout << "Enter marks: ";
    cin >> marks;

    if(marks >= 0 && marks <= 100)
    {
        if(marks < 40)
        {
            cout << "Grade F" << endl;
        }
        else if(marks <= 60)
        {
            cout << "Grade C" << endl;
        }
        else if(marks <= 80)
        {
            cout << "Grade B" << endl;
        }
        else
        {
            cout << "Grade A" << endl;
        }
    }
    else
    {
        cout << "Invalid Marks,\nTry again!" << endl;
    }

    return 0;
}

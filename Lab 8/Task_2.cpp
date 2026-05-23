#include<iostream>
using namespace std;

int main()
{
    //initliazing
    int times=0, marks=0, scale=10, base=50;
    //asking user for repition value
    cout << "How many times you want to repeat?\nEnter: ";
    cin >> times;

    //making sure positive value
    if (times > 0)
    {
        //loop
        while (times > 0)
        {
            //part a
            cout << "Enter marks: ";
            cin >> marks;

            //part b, c, d
            //doing as required to value of marks
            //also showing the user what's beign done
            if (marks < base)
            {
                marks = marks + scale;
                cout << "Added " << scale << "to marks value";
                cout << endl << "Updated value of Marks: " << marks;
            }
            else if (marks > base)
            {
                marks = marks - scale;
                cout << "Subtracted " << scale << "to marks value";
                cout << endl << "Updated value of Marks: " << marks;
            }
            else if (marks == base)
            {
                scale = 5;
                cout << "Set scale to 5!\nUpdated value of Scale: " << scale;
            }

            if (marks < 0 || marks > 100)
            {
                cout << endl;
                cout << "Negative  or  OVER,  try  again";
                times--;
            }
            else if (marks < 50 )
            {
                cout << endl << "Grade is F";
                times--;
            }
            else if (marks > 50 && marks < 70)
            {
                cout << endl << "Grade is C";
                times--;
            }
            else if (marks > 70 && marks < 80)
            {
                cout << endl << "Grade is B";
                times--;
            }
            else if (marks > 90)
            {
                cout << endl << "Grade is A";
                times--;
            }
        }
    }
    //if user doesn't enter positive value
    else if (times < 0)
    {
        cout << "Invalid value, Try again with positive no. of times";
    }
}

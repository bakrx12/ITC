//biSmIlLaH
#include <iostream>
using namespace std;

//Learning: if else practice
//Expeience: moderately ez 
//skills:

int main()
{
    int i = 0, like = 0, boiz = 0;
    cout << "Enter first value: ";
    cin >> i;
    cout << "Enter second value: ";
    cin >> like;
    cout << "Enter third value: ";
    cin >> boiz;



    //logic for asscending order and discending order

    if (i < like && i < boiz)
    {
        if (like < boiz)
        {
            cout << endl<< "Asscending order: ";
            cout << endl<< i <<endl<< like << endl << boiz;
            cout << endl<< "Descending order: ";
            cout << endl<< boiz << endl << like << endl << i;
        }
    }
    else if (i > like && i > boiz)
    {
        if (like > boiz)
        {
            cout << endl << "Asscending order: ";
            cout << endl << boiz << endl << like << endl << i;
            cout << endl << "Disscending order: ";
            cout << endl << i << endl << like << endl << boiz;
        }
    }
    else if (like < i && like < boiz)
    {
        if (boiz > i)
        {
            cout << endl<< "Asscending order: ";
            cout << endl<< like <<endl<< i << endl<<boiz;
            cout << endl << "Disscending order: ";
            cout << endl<<boiz << endl<< i << endl<< like;
        }
    }
    else if (boiz < i && boiz < like)
    {
        if (i > like)
        {
            cout << endl<< "Asscending order: ";
            cout << endl<< boiz <<endl<< like <<endl<< i;
            cout << endl << "Disscending order: ";
            cout << endl<< i << endl << like << endl << boiz;
        }
    }

    return 0;
}


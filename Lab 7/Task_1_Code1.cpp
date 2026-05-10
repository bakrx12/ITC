#include <iostream>
using namespace std;

//rewriting code
//chaing repition to while

int main()
{
    int value = 0, max = 0;
    int iteration = 6;

    //originaly it was repeating 6 times so..

    while (iteration > 0)
    {
        cout << "Enter an Integer: ";
        cin >> value;

        if (max > value)
        {
            value = max;
        }
        iteration--;
        cout << endl;
    }

    cout << "Maximum value: " << value;

    return 0;
}

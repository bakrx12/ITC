#include <iostream>
using namespace std;

int main()
{
    int x=0;
    int y=0;
    int length =0;

    cout << "Enter top right x coordinate: ";
    cin >> x;

    cout << "Enter top right y coordinate: ";
    cin >> y;

    cout << "Enter length: ";
    cin >> length;

    int left;
    int bottom;

    left = x - length;
    bottom = y - length;

    // quadrant

    if(left > 0 && bottom > 0)
    {
        cout << "Square in first quadrant" << endl;
    }
    else if(x < 0 && bottom > 0)
    {
        cout << "Square in second quadrant" << endl;
    }
    else if(x < 0 && y < 0)
    {
        cout << "Square in third quadrant" << endl;
    }
    else if(left > 0 && y < 0)
    {
        cout << "Square in fourth quadrant" << endl;
    }
    else
    {
        cout << "Square not completely in one quadrant" << endl;
    }

    // origin

    if(left <= 0 && x >= 0 && bottom <= 0 && y >= 0)
    {
        cout << "Origin is inside square" << endl;
    }
    else
    {
        cout << "Origin is not inside square" << endl;
    }

    // x = 0

    if(left <= 0 && x >= 0)
    {
        cout << "Square cuts x = 0" << endl;
    }
    else
    {
        cout << "Square does not cut x = 0" << endl;
    }

    // y = 0

    if(bottom <= 0 && y >= 0)
    {
        cout << "Square cuts y = 0" << endl;
    }
    else
    {
        cout << "Square does not cut y = 0" << endl;
    }

    // both

    if(left <= 0 && x >= 0 &&
       bottom <= 0 && y >= 0)
    {
        cout << "Square cuts both axes" << endl;
    }
    else
    {
        cout << "Square does not cut both axes" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int length = 0;
    int width =0;
    int height =0;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;

    // Larger value

    if(length > width)
    {
        cout << "Length is larger" << endl;
    }
    else
    {
        cout << "Width is larger" << endl;
    }

    // Smaller value

    if(height < width)
    {
        cout << "Height is smaller" << endl;
    }
    else
    {
        cout << "Width is smaller" << endl;
    }

    // Equality

    if(length == height)
    {
        cout << "Length and height are equal" << endl;
    }
    else
    {
        cout << "Length and height are not equal" << endl;
    }

    // Height smallest

    if(height < length && height < width)
    {
        cout << "Height is smallest" << endl;
    }
    else
    {
        cout << "Height is not smallest" << endl;
    }

    // Length largest

    if(length > width && length > height)
    {
        cout << "Length is largest" << endl;
    }
    else
    {
        cout << "Length is not largest" << endl;
    }

    /*
    I learned decision making
    using if and if else statements.
    */

    return 0;
}

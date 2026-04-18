#include <iostream>
using namespace std;

int main()
{
    float x = 0, y = 0;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    
    //checking if on orign, or intercept
    if (x == 0 && y == 0)
    {
        cout << "(" << x << ", " << y << ") are on origin";
    }
    if (x == 0 && y != 0)
    {
        cout << "(" << x << ", " << y << ") are on y-axis";
    }
    if (y == 0 && x != 0)
    {
        cout << "(" << x << ", " << y << ") are on x-axis";
    }
    if (x > 0 && y > 0)
    {
        cout << "(" << x << ", " << y << ") are in first quadrant";

    }
    if (x < 0 && y > 0)
    {
        cout << "(" << x << ", " << y << ") are on second quadrant";
    }
    if (x > 0 && y > 0)
    {
        cout << "(" << x << ", " << y << ") are on fourth quadrant";
    }
    if (x < 0 && y < 0)
    {
        cout << "(" << x << ", " << y << ") are on third quadrant";
    }
    return 0;
}

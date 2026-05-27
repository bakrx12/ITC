#include <iostream>
using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;

    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;

//finding middle integer
//considering each possibilities
    if((a > b && a < c) || (a < b && a > c))
    {
        cout << "Middle integer is: " << a;
    }
    else if((b > a && b < c) || (b < a && b > c))
    {
        cout << "Middle integer is: " << b;
    }
    else
    {
        cout << "Middle integer is: " << c;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter 4 integers: ";
    cin >> a >> b >> c >> d;

    int largest =0;
    int smallest=0;

    // largest

    largest = a;

    if(b > largest)
    {
        largest = b;
    }

    if(c > largest)
    {
        largest = c;
    }

    if(d > largest)
    {
        largest = d;
    }

    // smallest

    smallest = a;

    if(b < smallest)
    {
        smallest = b;
    }

    if(c < smallest)
    {
        smallest = c;
    }

    if(d < smallest)
    {
        smallest = d;
    }
  
  //middle

    cout << "Middle integers are: ";

    if(a != largest && a != smallest)
    {
        cout << a << " ";
    }

    if(b != largest && b != smallest)
    {
        cout << b << " ";
    }

    if(c != largest && c != smallest)
    {
        cout << c << " ";
    }

    if(d != largest && d != smallest)
    {
        cout << d << " ";
    }

    return 0;
}

#include <iostream>
using namespace std;

// rewrite, replace repition with while loop

int main()
{
    int value = 0, max = 0;
    int iteration = 6;

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



/*
#include <iostream>
using namespace std;
int main()
{
 int value = 0;
 int max = 0.0;
 cout << "Enter an Integer: ";
 cin >> value;
 if(max < value)
 {
 max = value;
 }
 cout << "Enter an Integer: ";
 cin >> value;
 if(max < value)
 {
 max = value;
 }
 cout << "Enter an Integer: ";
 cin >> value;
 if(max < value)
 {
 max = value;
 }
cout << "Enter an Integer: ";
 cin >> value;
 if(max < value)
 {
 max = value;
 }
cout << "Enter an Integer: ";
 cin >> value;
 if(max < value)
 {
 max = value;
 }
cout << "Enter an Integer: ";
 cin >> value;
 if(max < value)
 {
 max = value;
 }
 cout << "Maximum is " << max << endl;
return 0;
}
*/

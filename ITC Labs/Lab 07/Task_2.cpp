#include <iostream>
using namespace std;

int main()
{
    int times = 0, number = 0;
    float average = 0;
    cout << "Enter times of repetition: ";
    cin >> times;
    int max = 0, min = times;
    // we are supposed to ask user for how much repition

    if (times != 0)
    {
        while (times > 0)
        {
            cout << "Enter number: ";
            cin >> number;

            if (number > max)
            {
                max = number;
            }
            
            if (number < min)
            {
                min = number;
            }

            times--;
        }
        
        cout << "Average: " << (max + min) / 2 << endl;
        cout << "Maximum: " << max << endl;
        cout << "Minimum: " << min << endl;
    }
    else
    {
        cout << "Invalid times of repition\n";
    }

}

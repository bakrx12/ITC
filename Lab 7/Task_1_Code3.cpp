#include <iostream>
using namespace std;

//replacing repition with while loop

int main()
{
    int n = 11;
    int trial = 2;
    int iteration = 8;

    while (iteration > 0)
    {
        if (n % trial != 0)
        {
            trial++;
        }

        if (trial >= n / 2)
        {
            cout << "SUCCESS\n";
        }
        else
        {
            cout << "FAILURE\n";
        }
        
    }
    return 0;
   
}

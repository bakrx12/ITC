#include<iostream>
using namespace std;

/* Please write a complete C++ program that reads a +ve integer from the user
and checks and display if that number is a perfect square.
An integer is a perfect square is that number is square of another integer
e.g. 4,9 ^ 16 are perfect squares but 3 5 & 7 are not */

int main()
{
    int integer = 0;
    cout << "Enter an postive integer: ";
    cin >> integer;

    if (integer >= 0)
        {
            int iteration = 0;
            while(iteration*iteration < integer)
            {
                iteration++;
            }
            
            if (iteration * iteration == integer)
            {
                cout << integer << " is a perfect square";
            }
            else
            {
                cout << integer << " is NOT a perfect square";
            }
        }

        
    else
        {
            //condition only runs when user enters non positive number
            cout << "Invalid Integer." << endl << "Try again with positive integer";
        }
    return 0;
}

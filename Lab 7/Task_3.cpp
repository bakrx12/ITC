#include <iostream>
using namespace std;

/*
Write a Complete C++ program to read 10 integers from the user, calculate e and display the following:
1. Number of values that are odd
2. Number of values that are even
3. Number of values that are negative
4. Number of values that are positive
5. Number of values that are odd and negative
6. Number of values that are odd and positive
7. Number of values that are even and negative
8. Number of values that are even and positive
9. Sum of values that are odd and positive
10. Sum of values that are even and negative
*/

int main()
{
    //no of iteration, and number from user
    int iterate = 10, num = 0;

    while (iterate >= 0)
    {
        cout <<"Enter number: ";
        cin >> num;

        //checking conditions

        if (num % 2 == 0)
        {
            cout <<endl << num << " is even";
        }
        else if (num % 2 != 0)
        {
            cout << endl << num << " is odd";
        }
        else if (num > 0)
        {
            cout << endl << num << " is positive";
        }
        else if (num < 0)
        {
            cout << endl << num << " is negative";
        }
            cout << endl;

        //even and +ve

        if (num % 2 == 0)
        {
            {
                if (num > 0)
                {
                    cout << endl << num << " is Even and Positive";
                }
            }
        }

        //odd and -ve
        else if (num % 2 != 0)
        {
            {
                if (num < 0)
                {
                    cout << endl << num << " is Odd and Negative";
                }
            }
        }

        //Even and +ve

        if (num % 2 != 0)
        {
            {
                if (num > 0)
                {
                    int temp = 0;
                    temp = temp + num;
                    cout << endl << num << " is Odd and Positive";
                    cout << endl << "Sum of Odd and Possitive: " << temp;
                    
                }
            }
        }

        //odd and -ve
        if (num % 2 == 0)
        {
            {
                if (num < 0)
                {
                    int temp = temp + num;
                    cout << endl << num << " is Even and Negative";
                    cout << endl << "Sum of Odd and Possitive: " << temp;
                }
            }
        }
                    cout << endl << endl;
    }
}

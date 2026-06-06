#include<iostream>
using namespace std;
int main()
{

    //taking postive value from user

    int value = 0;

    cout << "Enter an Integer: ";
    cin >> value;

    if (value >= 0)
    //as we know for sure, 1 2 3 are prime so we are setting this for it

    {
        if (value == 1 || value == 2 || value == 3)
            {
                cout << value << " is prime number" <<endl;
                system("pause");
            }
        int times = 3, check = value/2;

        //condition to check for values greater than 3 if its prime
        //only checking less than value given by user

        while (times <= value)
        {

            if (value % check == 0)
            {
                cout <<endl<< value << " is NOT a prime number" <<endl;

                //since we only need to find one counterexample for it to be prime
                //pausing the code, no need to continue the loop

                system("pause");
                times++;

            }
            else
            {
                //if condition doesnt pass, our number will surely be prime

                cout << value << " is prime number" <<endl;
                system("pause");
            }

        }
    }
    else
    {
        //if the given value by user wasnt positive 
        cout << "Try again with positive integer";
    }
    return 0;
}

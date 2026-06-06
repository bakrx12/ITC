#include<iostream>
using namespace std;

int main()
{
    //intialiing values as given
    int savedID= 12345, savedPassword= 67397, ID= 0, password= 0;
    int times = 0;
    //loop
    while (times < 1 )
    {
        //asking user for ID, and password
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter Password: ";
        cin >> password;

        //checking if the ID and password matches to Saved ID/password
        if (savedID == ID && savedPassword == password)
        {
            cout << "SUCCESS\n\n";
            times = 0;
        }

        //incase value doesn't match
        else
        {
            cout << "FAILURE\n\n";
        }
    }
}

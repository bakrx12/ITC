#include <iostream>
using namespace std;

//learning experience: ez if else, even me dum dum can do it
//accquired skills:    the use of if else

int main()
{
    //variables
    int value1 = 0;
    int value2 = 0;
    int large = 0;
    cout << "Enter first value: ";
    cin >> value1;
    cout << "Enter second value: ";
    cin >> value2;
    large = value2;

    //condition for if valu 1 is greater then value 2

    if (value1 > value2)
    {
        large = value1;
        cout << "Largest value is: " << large << endl;
    }


    else if (value1 == value2)
    //condition for if both value are same
    {
        cout << "Both values are same" << endl;
    }

    else
    {
        cout << "Largest value is: " << large << endl;
    }

    int small, value3;
    cout << endl << "Enter third value: ";
    cin >> value3;
    small = value3;

    if (value2 < small && value1 < small)
    {
        //possibility where smallest value is value1
        small = value1;
        cout << "Smallest value among three is: " << small << endl;
    }
    else if (value1 < small && value2 < small)
    {
       //posibiliyy where small is actually value3 
        cout << "Smallest value among three is: " << small << endl;
    }
    else if (value1 == value2 && value1 == value3)
    {
        //possibilty where same values are given
        cout << "Repeated values given." << small << endl;
    }
    else 
    {
        //left-off possibilty: where value1 is smallest
        cout << "Smallest value is: " << small << endl; 
    }

 //also give largest among three

    large = value3;
    if (value2 > large && large < value1)
    {
        //posibility where value3 is largest
        cout << "Largest value among three is " << large << endl;
    }
    else if (value2 > large && value1 > large)
    {
        //possibility where value2 is largest
        cout << "Largest value among three is " << large << endl;
    }
    else if (value1 == value2 == value3)
    {
        cout <<"Repeated values are given" <<endl;
    }
    else
    {
        cout << "largest value among three is " << large << endl;
    }

    

    return 0;
         

    //ikhtetaam
}
#include<iostream>
using namespace std;

int main()
{

    int integer = 0;
    cout << "Enter an postive integer: ";
    cin >> integer;

    if (integer >= 0)
        {
            //part one:
            //perfect square

            int iteration = 0;
            while(iteration*iteration < integer) 
            {
                iteration++;
            }
            
            if (iteration * iteration == integer)
            {
                cout << integer << " is a perfect square";
                cout << endl;
            }
            else
            {
                //telling which one is nearest perfect square
                //if we minus iteration we get closest perfect square
                cout << integer << " is NOT a perfect square";
                cout <<endl;
                int nearestSR=0;
                nearestSR = iteration - 1;
                cout << "Nearest square root: " <<nearestSR;
                cout << endl<<endl;
            }

            //PART TWO:
            //PRIME NUMBER

            int times = 4, check = integer / 2;

            if (integer == 1 || integer == 2 || integer == 3)
            {
                cout << endl << integer << " is prime number";
            }
            else 
            {
                while (times >= 0 && check > 1)
                {
                    if (integer % check == 0)
                    {
                        cout << endl << integer << " is NOT a prime number";
                        cout << endl << "Exact Divisor: " << check << endl;
                        
                        //since we only need to find one counterexample for it to be prime
                        //pausing the code, no need to continue the loop
                        times = -1 ; 
                    }
                    check--; 
                }

                if (times != -1)
                {
                    cout << endl << integer << " is prime number";
                    cout << "\nClosest Divisor: " << integer/2 << endl;
                }
            }
            
            //part threee: pallindrome


                int original = integer;
                int reverse = 0;

                while (original > 0)
                {
                    //loop: 1
                    //integer = 123
                    //digit = 3
                    //reverse = 0 + 3 = 3
                    //original 12
                    int digit = original % 10;
                    reverse = reverse * 10 + digit;
                    original = original / 10;
                }

                if (reverse == integer)
                {
                    cout <<endl;
                    cout << integer << " is a Palindrome Number." << endl;
                }
                else
                {
                    cout<<endl;
                    cout << integer << " is NOT a Palindrome Number." << endl;
                }
                
                //part four: mystic number

                int mystic = integer, intgCount = 0;
                while (mystic > 0)
                {
                    intgCount++;
                    mystic = mystic / 10;
                }

                cout << "\nMystic Number requirements:\n";
                cout << "No. of Digit: " << intgCount << endl;

                if (intgCount % 2 == 0 && intgCount > 0)
                {
                    cout << "SUCCESS! " << intgCount << " is Even\n";
                    
                    // Calculate 10^((intgCount / 2) - 1)
                    int mChkr1 = 1;
                    int counter = 0;
                    int targetPower = (intgCount / 2) - 1;
                    
                    while (counter < targetPower) 
                    {
                        mChkr1 *= 10;
                        counter++;
                    }
                    
                    int mChkr2 = mChkr1 * 10;
                    // drops one more digit for the second middle
                    //1221
                    int middle1 = (integer / mChkr1) % 10;
                    int middle2 = (integer / mChkr2) % 10;

                    if (middle1 == middle2)
                    {
                        cout << "Middle digits are same\n";
                        cout << "SUCCESS! Found same: " << middle1 << "\n";
                    }
                    else
                    {
                        cout << "Middle digits are NOT same (" << middle2 << " and " << middle1 << ")\n";
                        cout << "NOT A MYSTIC NUMBER!\n";
                    }
                }
                else
                {
                    cout << "NOT A MYSTIC NUMBER! Odd Number or Zero\n";
                }
            
        }
    else
        {
            //condition only runs when user enters non positive number
            cout << "Invalid Integer." << endl << "Try again with positive integer";
        }
}

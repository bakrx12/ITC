#include <iostream>
using namespace std;
//cjhanging repition to while loop

int main()
{
    int result = 0, n = 0, iteration = 0;
        //originaly it was repeating 10 times so..
    cout << "Enter an Integer for multiplication table: ";
    cin >> n;

    while (iteration <= 10)
    {
        result = n * iteration;
        cout << n << " x " << iteration << " = " << result <<endl;
        iteration++;
    }
}

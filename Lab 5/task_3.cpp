//bismillah
#include <iostream>
using namespace std;

//learning experience:	ez input from user
//accquired skills:    taking input from user and printing output (as given in pdf)

int main()
{
	//variabe declraration
	int X, Y, Z;
	
	//asking from user for values
	cout << "Enter value of X: ";
	cin >> X;
	cout << "Enter value of Y: ";
	cin >> Y;
	cout << "Enter value of Z: ";
	cin >> Z;

	//printing expressions
	cout << endl << "X * Y * Z = " << X * Y * Z << endl;
	cout << "2 * ( Y + Z) + 2 * ( X + Z) + 2 * ( X + Z) = " << 2 * (Y + Z) + 2 * (X + Z) + 2 * (X + Z) << endl;
	cout << "2 * ( Y + Z) + ( Y - Z)/Z * 100.0 = " << 2 * (Y + Z) + (Y - Z) / (Z * 100.0) << endl;
	return 0;
}
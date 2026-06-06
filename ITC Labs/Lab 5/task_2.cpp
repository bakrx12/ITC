//bismillah
#include <iostream>
using namespace std;

//learning skills: we already learntg to intialize and declare
				// practice of same concept as graded lab BUT it is with ERROR
//accquired skills:	intentional error, debugging, and use of float data type

int main()
{
	//initating variabvles
	int X = 30;
	float Y = 25.0;
	float Z = 5.5;
	int P = 21.12;
	int Q = 0.25;

	//reusing variables for new values
	X = (X + Y) - (X - Z) / (Y - Z) * (P * Q / X);
	Y = X - Y * Z / P - Q % P * X - Q - Y - X - Z;
	Z = P - Q * X + Y * Z / P - Q % X;
	P = P * Q % X * Y / Z * Q % X * Y / P - P * Q - X * Y / Z * Q + X * Y / P;
	Q = P - Q % X + Y / Z * Q % X - Y / P - P * Q / X * Y / Z * Q / X - Y / P;

	//print :3
	cout << "(X + Y) - (X - Z) / (Y - Z) * (P * Q / X) = " << X << endl;
	cout << "X - Y* Z / P - Q % P * X - Q - Y - X - Z = " << Y << endl;
	cout << "P - Q * X + Y * Z / P - Q % X = " << Z << endl;
	cout << "P * Q % X * Y / Z * Q % X * Y / P - P * Q - X * Y / Z * Q + X * Y / P = " << P << endl;
	cout << "P - Q % X + Y / Z * Q % X - Y / P - P * Q / X * Y / Z * Q / X - Y / P = " << Q << endl;

	//issues: compiler is not running the code, because of errror associated with float data type and operand "%"

	return 0;

}
#include<iostream>
using namespace std;

int main()
{
	int l = 0, g = 0, b = 0, t = 0;
	cout << "Enter first value: ";
	cin >> l;
	cout << "Enter second value: ";
	cin >> g;
	cout << "Enter third value: ";
	cin >> b;
	cout << "Enter fourth value: ";
	cin >> t;

	if (l > g && l > b && l > t)
	{
		cout << endl << "Largest value is " << l;
	}
	else if (g > l && g > b && g > t)
	{
		cout << endl << "Largest value is " << g;
	}
	else if (b > l && b > g && b > t)
	{
		cout << endl << "Largest value is " << b;
	}
	else if (t > l && t > g && t > b)
	{
		cout << endl << "Largest value is " << t;
	}

	//another variable
	int q = 0;
	cout << endl<<"Enter fifth value: ";
	cin >> q;

	if (q > l && q > g && q > b && q > t)
	{
		cout << endl << "Largest value is " << q;
	}
	else
	{
		cout << endl << "Largest value is not fifth value";
	}
	return 0;
}

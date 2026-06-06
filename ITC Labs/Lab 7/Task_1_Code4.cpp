#include <iostream>
using namespace std;
int main()

//changing repition with while loop

{
	int value = 0;
	int digit = 0;
	cout << "Enter a 7-digit Integer: ";
	cin >> value;
	int iteration = 0;

	while (iteration < 7)
	//originally repeating for 7, so changed it with while
	{
		digit = value % 10;
		value = value / 10;
		iteration++;
		cout << digit << endl;
	}


	return 0;
}

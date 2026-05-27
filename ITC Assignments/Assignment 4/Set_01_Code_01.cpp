#include<iostream>
using namespace std;

int main()
{
    int number = 5; 
    int result = 1;
    int i = 0;

    while (i < 5)
    {
        result = result * number; 
        number--; 
    }
}

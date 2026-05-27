#include<iostream>
using namespace std;
//set one code three

int main()
{
    int number = 9346 
    int M = number; 
    int digit = 0; 
    int result = 0;
    int i = 0;

    digit = M % 10; 
    result = result * 10 + digit; 

    while (i < 2)
    {
        M = M /10;  
        digit = M % 10; 
        result = result * 10 + digit; 

    }
}

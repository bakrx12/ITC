#include <iostream>
using namespace std;

int main()
{
    //statement:
    //A car dealer sells City, Civic, Sportage, Yaris and Elantra.
    //Write a C++ program to calculate total profit or loss.

    int totalCars = 5;
    int currentCar = 1;
    float salePrice = 0;
    float costPrice = 0;
    float totalSale = 0;
    float totalCost = 0;
    float profitOrLoss = 0;

    cout << "Enter details of 5 cars\n";

    //loop repeats for all cars

    while(currentCar <= totalCars)
    {
        cout << "Enter sale price of car ";
        cout << currentCar << ": ";
        cin >> salePrice;

        cout << "Enter cost price of car ";
        cout << currentCar << ": ";
        cin >> costPrice;

        totalSale = totalSale + salePrice;
        totalCost = totalCost + costPrice;

        currentCar++;
    }

    profitOrLoss = totalSale - totalCost;

    cout << "Total Sale: ";
    cout << totalSale << endl;

    cout << "Total Cost: ";
    cout << totalCost << endl;

    if(profitOrLoss >= 0)
    {
        cout << "Profit: ";
        cout << profitOrLoss << endl;
    }
    else
    {
        cout << "Loss: ";
        cout << profitOrLoss << endl;
    }

    /*
    This code calculates total profit or loss for a car dealer.

    LEARNED:
    - while loop
    - if else statements
    - calculations of profit/loss
    - repeated input (with while loop)
    */

    return 0;
}
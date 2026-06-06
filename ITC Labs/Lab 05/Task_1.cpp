
#include <iostream>
using namespace std;

//learning experience: original instructions were leading for profit to display -16%,
//                     i debugged it

int main()
{
    //awwal task    
    int quantity = 30;
    float weight = 2.5;
    float price = 100.0;
    float cost = 120.0;
    float totalPrice = 0.0;
    float totalCost = 0.0;
    int profit = 0;

    totalPrice = quantity * weight * price;
    cout << "Total price: " << totalPrice << endl;
    totalCost = quantity * weight * cost;
    cout << "Total cost: " << totalCost << endl;
    profit = (totalPrice - totalCost) / totalCost * 100;
    cout << "Total profit: " << profit << endl;

    cout << "For quantity " << quantity << ", weight " << weight << ", price of ";
    cout << price << " and cost of " << cost << ", the percent profit is " << profit;
    cout << "%" << endl;
    return 0;
}


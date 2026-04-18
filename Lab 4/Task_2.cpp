//bismillah hirama nirajeem
//Lab 4 Task 1 by AbuBakr
//Roll No. L1S26BSCS0052
#include<iostream>
using namespace std;

int main()
{
    //pehle sare variables initialize krwa die
    //jeisa ke hamein pdf me kaha gya tha 😉
    int price = 30;
    float cost = 25.0;
    float profit = 0.0;
    float newPrice = 0.0;
    float newProfit = 0.25;

    //formula (ye bhi diya hua tha pdf mein hi)
    profit = (price - cost)/cost*100;

    //sari game tou idhar ki hai
    //values lagyi jidhar ki thi aur unko print krwa dia
    cout << "For price of " << price << " and cost of " << cost << ", the percent profit is " << profit << "%" << endl;

    newPrice = (1 + newProfit) * cost;
    cout << "For new profit of " << price << " and cost of " << cost << ", the new price should be " << newPrice << endl;
    cout << "Increase in Profit = " << profit - newProfit << endl;
    
    return 0;
}

//bismillah hirama nirajeem
//Lab 4 Task 1 by AbuBakr
//Roll No. L1S26BSCS0052
#include<iostream>
using namespace std;

//learning experience: given profit formula is wrong in pdf 😡
//skills accquired: profit formula

int main()
{
    //given data likh rha
    float sellCity = 6.0; //6 milulus ki honda city
    float sellCIvic = 1.2; //1.2 milulu ki honda civic
    float profitCity = 10;
    float LossCivic = 10;
    float dealerSL = 5; //in a week (bara pakka dealer ay)
    float total = 0.0;

    //profit/loss ka formula lagane laga idhar ab
 

    total = sellCity*profitCity;
    cout << "Profit for civic: " << total << " million" << endl;
    total = sellCIvic*LossCivic;
    cout << "Loss for civic: " << total << " million"<< endl;

    // dealer profit

    total = dealerSL*sellCity;
    cout << "Dealer Profit for selling 5 city: " << total << " million" <<endl;
    total = dealerSL*sellCIvic;
    cout << "Dealer Loss for selling 5 civic: " << total << " million" <<endl;

    // total total total

    total =  (dealerSL*sellCity) - (dealerSL*sellCIvic) ;
    cout << "Total weekly: " << total << " million" << endl;

    // for profit of 10
    //since profit of 10 is beign already made by selling honda
    //and city uska bechara ka loss krwa ri ha
    cout << "For profit of " << profitCity << "%, dealer need to sell 1 city 0 civic ";
    //zero civic sense

}
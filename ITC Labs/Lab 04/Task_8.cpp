//bismillah hirama nirajeem
//Lab 4 Task 1 by AbuBakr
//Roll No. L1S26BSCS0052

#include<iostream>
using namespace std;

//learning expeience: copy pasting and doing cin
//skill required: cin cout

int main()
{

        //task 4 with cin and cout

    int length = 0;
    int width = 0;
    int depth = 0;
    int costConcrete = 0;
    int paniRate = 0;
    int costElectrcity = 50;

    cout << "Enter value of length: ";
    cin >> length;
    cout << "Enter value of width: ";
    cin >> width;
    cout << "Enter value of depth: ";
    cin >> depth;
    cout << "Enter cost of concrete: ";
    cin >> costConcrete;
    cout << "Enter rate of water: ";
    cin >> paniRate;
    cout << "Enter electricity cost: ";
    cin >> costElectrcity;

    int buildingQeemat = 0.0;
    int bijliQeemat = 0.0;
    int totalQeemat = 0.0;
    int volume = length * width * depth;
    cout <<  endl << "Volume: " << volume << endl;
    int areaPool = (2*(length*depth)) + (2*(width*depth)) + length*width;

    buildingQeemat = areaPool*costConcrete;
    cout << "Building/Construction cost: " << buildingQeemat << endl;

    bijliQeemat = (volume/paniRate)*costElectrcity;
    cout << "Electricity cost: " << bijliQeemat << endl;

    totalQeemat = buildingQeemat + bijliQeemat;
    cout << "Total cost: " << totalQeemat << endl;


        //task 5 with cin and cout

    system("pause");

    float plLength = 50.0;
    float plwidth = 25.0;
    float plDepth = 5.0;
    float plPumpRate = 10.0;
    float vol = 0;
    float leakRate = 0.5;
    float qeematLeak1 = 0.0;
    float qeematLeak50 = 0.0;
    float qeematPerH = 2.0;


    cout << "Enter value of pool's length: ";
    cin >> plLength;
    cout << "Enter value of pool's width: ";
    cin >> plwidth;
    cout << "Enter value of pool's depth: ";
    cin >> plDepth;
    cout << "Enter value of pool's pump rate: ";
    cin >> plPumpRate;
    cout << "Enter value of pool's leak rate: ";
    cin >> leakRate;


    vol = plDepth*plLength*plwidth;
    cout <<  endl << "Volume: " << vol << " meters per cube" << endl;

    float fillPool = vol/plPumpRate;
    cout << "Empty pool to 100%: " << fillPool << " ghante" << endl;

    float fill50 = leakRate*fillPool;
    cout << "25% to 75% (basically 50%): " << fill50 << " ghante" << endl;

    float leakfil100 = vol / (plPumpRate - leakRate);
    cout << "Empty to 100% w leak: " << leakfil100 << " ghante" << endl;
    float leakfill50 = vol  / (plPumpRate - leakRate);
    cout << "50% with leak: " << leakfill50 << " ghante" << endl;;

    qeematLeak1 = qeematPerH*leakfil100;
    qeematLeak50 = qeematPerH*leakfill50;
    cout << "Cost to fill Empty pool with leak: " << qeematLeak1 << " rs" << endl;
    cout << "Cost to fill 25% to 75% w leak: " << qeematLeak50 << " rs" << endl; 

    //task 6

    float sellCity = 6.0; //6 milulus ki honda city
    float sellCIvic = 1.2; //1.2 milulu ki honda civic
    float profitCity = 10;
    float LossCivic = 10;
    float dealerSL = 5; //in a week (bara pakka dealer ay)

    cout << "A car dealer sells Honda city for price (in miill): ";
    cin >> sellCity;
    cout << "A car dealer sells Honda civic for price (in mill): ";
    cin >> sellCIvic;
    cout << "Enter profit/loss for selling city: ";
    cin >> profitCity;
    cout << "Enter profit/loss for  selling civic: ";
    cin >> LossCivic;
    cout << "How much car does dealer sells: ";
    cin >> dealerSL;


    
    float total = 0.0;

    total = sellCity*profitCity;
    cout << endl <<"Profit for civic: " << total << " million" << endl;
    total = sellCIvic*LossCivic;
    cout << "Loss for civic: " << total << " million"<< endl;

    total = dealerSL*sellCity;
    cout << "Dealer Profit for selling 5 city: " << total << " million" <<endl;
    total = dealerSL*sellCIvic;
    cout << "Dealer Loss for selling 5 civic: " << total << " million" <<endl;

    total =  (dealerSL*sellCity) - (dealerSL*sellCIvic) ;
    cout << "Total weekly: " << total << " million" << endl;

    cout << "For profit of " << profitCity << "%, dealer need to sell 1 city 0 civic ";

    //task 7

     float KBprofit =0.10;
    float monitorProfit =0.20;
    float hddProfit = 0.05;
    float ramLoss = 0.05;
    float mouseLoss = 0.010;
    float net = 0.0;
    float KBsell = 10;
    float MONITORsell = 5;
    float HDDsell = 20;
    float RAMsell = 5;
    float MOUSEsell = 50;
    float profitNet = 0.0;
    float lossNet = 0.0;

    cout << "How much keyboard sell: ";
    cin >> KBsell;
    cout << "how much mouse sell: ";
    cin >> MOUSEsell;
    cout << "How much RAM sell: ";
    cin >> RAMsell;
    cout << "How much Monitors sell: ";
    cin >> MONITORsell;
    cout << "How much hard disk sell: ";
    cin >> HDDsell;
    cout << endl << "Profit/ Loss for selling Keyboard: ";
    cin >> KBprofit;
     cout << endl << "Profit/ Loss for selling Mouse: ";
    cin >> mouseLoss;
     cout << endl << "Profit/ Loss for selling RAM: ";
    cin >> ramLoss;
     cout << endl << "Profit/ Loss for selling hard disk: ";
    cin >> hddProfit;
     cout << endl << "Profit/ Loss for selling Monitor: ";
    cin >> monitorProfit;


    profitNet = (KBprofit)*KBsell  + (monitorProfit*MONITORsell) + (hddProfit*HDDsell);
    cout << endl << "Profit of keyboard, hdd and monitor: " << profitNet << endl;
    lossNet = ((RAMsell*(ramLoss))) + (MOUSEsell*(mouseLoss));
    cout << "Loss of mouse and ram: " << lossNet << endl;
    net = profitNet - lossNet;
    cout << "Net Profit: " << net << endl;

    return 0;

}
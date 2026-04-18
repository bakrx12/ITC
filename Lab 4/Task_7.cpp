//bismillah hirama nirajeem
//Lab 4 Task 1 by AbuBakr
//Roll No. L1S26BSCS0052
#include<iostream>
using namespace std;
int main()
{

//learning experience:  did it in 11 minutes, with the help of spotify
//skills required:      formula of profit percentages which i leanred and forgor in matric/inter

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

    profitNet = (KBprofit)*KBsell  + (monitorProfit*MONITORsell) + (hddProfit*HDDsell);
    cout << "Profit of keyboard, hdd and monitor: " << profitNet << endl;
    lossNet = ((RAMsell*(ramLoss))) + (MOUSEsell*(mouseLoss));
    cout << "Loss of mouse and ram: " << lossNet << endl;
    net = profitNet - lossNet;
    cout << "Net Profit: " << net << endl;

}

//pata ni sahi h k ni (me at 4AM)
//gemini, and opus said LESGOOOO (me at 6AM)
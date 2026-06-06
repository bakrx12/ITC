//bismillah hirama nirajeem
//Lab 4 Task 1 by AbuBakr
//Roll No. L1S26BSCS0052
#include<iostream>
using namespace std;

//learning experience:  formula galat tha, mera sarr kha lia is task ne
//skills required:      i learned how to google it

int main()
{
    int length = 50;
    int width = 25;
    int depth = 2;
    int costConcrete = 100;
    int paniRate = 5;
    int costElectrcity = 50;
    int buildingQeemat = 0.0;
    int bijliQeemat = 0.0;
    int totalQeemat = 0.0;

    //volume formula (diya hua ha pdf file me)
    int volume = length * width * depth;
    cout << "Volume: " << volume << endl;
    //ye jis pr mene itna sar khapaya ye diya ni hua pdf me 😠
    int areaPool = (2*(length*depth)) + (2*(width*depth)) + length*width;

    //banane ki qeemat
    buildingQeemat = areaPool*costConcrete;
    cout << "Building/Construction cost: " << buildingQeemat << endl;

    //bijli ki qeemat
    bijliQeemat = (volume/paniRate) * costElectrcity;
    cout << "Electricity cost: " << bijliQeemat << endl;

    //total qeemat
    totalQeemat = buildingQeemat + bijliQeemat;
    cout << "Total cost: " << totalQeemat << endl;

    return 0;

}
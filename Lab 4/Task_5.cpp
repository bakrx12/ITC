//bismillah hirama nirajeem
//Lab 4 Task 1 by AbuBakr
//Roll No. L1S26BSCS0052
#include<iostream>
using namespace std;

//learning expeirence: its pretty ez once u understand problem
//skills accquired: patience

int main()
{
    //given data likh raha hu
    float plLength = 50.0;
    float plwidth = 25.0;
    float plDepth = 5.0;
    float plPumpRate = 10.0;
    float vol = 0;
    float leakRate = 0.5;
    float qeematLeak1 = 0.0;
    float qeematLeak50 = 0.0;
    float qeematPerH = 2.0;

    //ab ayega na maza (volume ka formula lgya)
    vol = plDepth * plLength * plwidth;
    cout << "Volume: " << vol << " meters per cube" << endl;

    //full fill (matlb 100%) leak bina
    float fillPool = vol / plPumpRate;
    cout << "Empty pool to 100%: " << fillPool << " ghante" << endl;

    //25% bhara hue pool ko 75% krna ab
    //blud just say 0% se 50% jana (inna confuse kisliye? 😪)
    float fill50 = (leakRate * fillPool);
    cout << "25% to 75% (basically 50%): " << fill50 << " ghante" << endl;

    //leak k sath ab (dimagh kha lia is ne, multiply krwai ja rha tha me)
    float leakfil100 = vol / (plPumpRate - leakRate);
    cout << "Empty to 100% w leak: " << leakfil100 << " ghante" << endl;
    float leakfill50 = vol / (plPumpRate - leakRate);
    cout << "50% with leak: " << leakfill50 << " ghante" << endl;;

    //qeematein
    qeematLeak1 = qeematPerH*leakfil100;
    qeematLeak50 = qeematPerH*leakfill50;
    cout << "Cost to fill Empty pool with leak: " << qeematLeak1 << " rs" << endl;
    cout << "Cost to fill 25% to 75% w leak: " << qeematLeak50 << " rs" << endl; 

    return 0;
}
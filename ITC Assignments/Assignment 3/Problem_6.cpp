#include <iostream>
using namespace std;

int main()
{
    float kingKongHeight =0.0;
    float kingKongWeight =0.0;

    float gorillaHeight=0.0;
    float gorillaWeight=0.0;

    float gorillaFood=0.0;
    float gorillaArea=0.0;

    cout << "Enter King Kong height: ";
    cin >> kingKongHeight;

    cout << "Enter King Kong weight: ";
    cin >> kingKongWeight;

    cout << "Enter Gorilla height: ";
    cin >> gorillaHeight;

    cout << "Enter Gorilla weight: ";
    cin >> gorillaWeight;

    cout << "Enter Gorilla food per day: ";
    cin >> gorillaFood;

    cout << "Enter Gorilla area radius: ";
    cin >> gorillaArea;

    float vegetationRequired =0.0;
    float areaRequired =0.0;

    vegetationRequired =
        (kingKongWeight / gorillaWeight) *
        gorillaFood;

    areaRequired =
        (kingKongWeight / gorillaWeight) *
        gorillaArea;

    cout << "Vegetation Required: "
         << vegetationRequired << endl;

    cout << "Area Required: "
         << areaRequired << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    float rectangleLength = 0.0;
    float rectangleWidth = 0.0;

    float radius = 0;

    int cafeteriaFood=0;

    int ucpStudents=0;

    float poolLength=0.0;
    float poolWidth=0.0;
    float poolDepth=0.0;

    cout << "Enter rectangle length: ";
    cin >> rectangleLength;

    cout << "Enter rectangle width: ";
    cin >> rectangleWidth;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter cafeteria food per day: ";
    cin >> cafeteriaFood;

    cout << "Enter UCP students: ";
    cin >> ucpStudents;

    cout << "Enter pool length: ";
    cin >> poolLength;

    cout << "Enter pool width: ";
    cin >> poolWidth;

    cout << "Enter pool depth: ";
    cin >> poolDepth;

    cout << "Rectangle Area: "
         << rectangleLength * rectangleWidth << endl;

    cout << "Swimming Pool Volume: "
         << poolLength * poolWidth * poolDepth << endl;

    cout << "Circle Diameter: "
         << 2 * radius * 3.14 << endl;

    cout << "Days Needed: "
         << ucpStudents / cafeteriaFood << endl;

    cout << "Circle Area: "
         << radius * radius * 3.14 << endl;

    /*
    I learned input, output,
    calculations and variable usage.
    */

    return 0;
}

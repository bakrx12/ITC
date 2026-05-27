#include <iostream>
using namespace std;

int main()
{
    // Question 1

    int rectangleLength = 5;
    int rectangleWidth = 10;

    float radius = 5.5;

    int cafeteriaFood = 500;

    int ucpStudents = 12000;

    float poolLength = 22.5;
    float poolWidth = 18.98;
    float poolDepth = 4.5;

    // Question 2

    cout << "Area of Rectangle: "
         << rectangleLength * rectangleWidth << endl;

    cout << "Volume of Swimming Pool: "
         << poolLength * poolWidth * poolDepth << endl;

    cout << "Diameter of Circle: "
         << 2 * radius * 3.14 << endl;

    cout << "Days needed for cafeteria: "
         << ucpStudents / cafeteriaFood << endl;

    cout << "Area of Circle: "
         << radius * radius * 3.14 << endl;

    /*
    I learned calculations of area,
    volume and circle formulas using variables.
    */

    return 0;
}

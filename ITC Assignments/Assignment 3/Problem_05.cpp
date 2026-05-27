#include <iostream>
using namespace std;

int main()
{
    float cubeSide =0.0;
    float cylinderLength =0.0;
    float cylinderRadius =0.0;
    float sphereRadius=0.0;

    cout << "Enter cube side: ";
    cin >> cubeSide;

    cout << "Enter cylinder length: ";
    cin >> cylinderLength;

    cout << "Enter cylinder radius: ";
    cin >> cylinderRadius;

    cout << "Enter sphere radius: ";
    cin >> sphereRadius;

    float cubeSurface =0.0;
    float cylinderSurface=0.0;
    float sphereSurface=0.0;

    cubeSurface = 6 * cubeSide * cubeSide;

    cylinderSurface =
        (44 / 7.0) *
        cylinderRadius *
        cylinderRadius *
        cylinderLength;

    sphereSurface =
        (88 / 7.0) *
        sphereRadius *
        sphereRadius *
        sphereRadius;

    cout << "Cube Surface Area: "
         << cubeSurface << endl;

    cout << "Cylinder Surface Area: "
         << cylinderSurface << endl;

    cout << "Sphere Surface Area: "
         << sphereSurface << endl;

    return 0;
}

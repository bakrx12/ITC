//bismillah
#include <iostream>
using namespace std;

//learning experience: sara kuch exact viese kiya jesa bola
//accquired skills:    practiced how to take input from user

int main()
{
    //given data part1
    int length, width, height;
    cout << "Enter length of room: ";
    cin >> length;
    cout << "Enter width of room: ";
    cin >> width;
    cout << "Enter height of room: ";
    cin >> height;
    cout << endl << "Size of the room:" << endl;
    cout << "Length: " << length << endl << "Width: " << width << endl << "Height: " << height << endl;

    //given data part2 (qeematein)
    int costPaint, costTiles, costPanel;
    cout << endl << "Enter cost of paint: ";
    cin >> costPaint;
    cout << "Enter cost of tiles: ";
    cin >> costTiles;
    cout << "Enter cost of panel: ";
    cin >> costPanel;
    cout << endl << "Cost of paint: " << costPaint << endl << "Cost of tiles: " << costTiles << endl << "Cost of panel: " << costPanel << endl;

    //given data part3 (jaggah vagera)
    int surfaceArea = 0;
    int areaFloor = 0;
    int areaC = 0;

    //given data part4 (formula)
    surfaceArea = 2 * ((height * length) + (width * height));
    areaFloor = length * width;
    areaC = length * width;
    cout << endl << "Surface area of walls: " << surfaceArea << endl;
    cout << "Area of floor: " << areaFloor << endl;
    cout << "Area of ceiling: " << areaC << endl;

    //qeemato ka hisab kitab
    int totalPaint = costPaint * areaC;
    int totalTiles = costTiles * areaFloor;
    int totalPanel = costPanel * surfaceArea;
    int totalCost = 0;
    totalCost = totalPaint + totalTiles + totalPanel;
    cout << endl << "Total cost: " << totalCost << " rs";
    return 0;




}

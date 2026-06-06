#include <iostream>
using namespace std;

//find unknown points of rectangle if top left point is given

//learning: no learning :< sir told us what to do
//skill: W practice 
//experience: L

int main()
{
    //take it from user
    int length = 0, width = 0, x1 = 0, y1= 0;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    //known points of top left
    cout << "Enter x cordinate of top left: ";
    cin >> x1;
    cout << "Enter y cordinate of top left: ";
    cin >> y1;

    //printing all other points including one known point
    cout << endl << "All cordinates of rectangle: " <<endl;
    
    cout << "Top left: (" << x1 + length << ", " << y1 << ")";
    cout << endl << "Bottom Left: ";
    cout << "(" << x1 << ", " << y1 - width << ")";
    cout << endl<<"Bottom right: ";
    cout << "(" << x1 + length << ", " << y1 - width << ")" <<endl;

    //ikhtetam

    return 0;
}

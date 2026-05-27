#include <iostream>
using namespace std;

int main()
{
    int l1 = 0, w1 =0;
    int l2 = 0, w2 = 0;
    int l3 =0, w3 =0;

    cout << "Enter length and width of first rectangle: ";
    cin >> l1 >> w1;

    cout << "Enter length and width of second rectangle: ";
    cin >> l2 >> w2;

    cout << "Enter length and width of third rectangle: ";
    cin >> l3 >> w3;

    int area1 = l1 * w1;
    int area2 = l2 * w2;
    int area3 = l3 * w3;

    int peri1 = 2 * (l1 + w1);
    int peri2 = 2 * (l2 + w2);
    int peri3 = 2 * (l3 + w3);

    cout << "Area 1: " << area1 << endl;
    cout << "Area 2: " << area2 << endl;
    cout << "Area 3: " << area3 << endl;

    cout << "Perimeter 1: " << peri1 << endl;
    cout << "Perimeter 2: " << peri2 << endl;
    cout << "Perimeter 3: " << peri3 << endl;

    // Ascending Areas

    if(area1 <= area2 && area1 <= area3)
    {
        if(area2 <= area3)
        {
            cout << area1 << " " << area2 << " " << area3 << endl;
        }
        else
        {
            cout << area1 << " " << area3 << " " << area2 << endl;
        }
    }
    else if(area2 <= area1 && area2 <= area3)
    {
        if(area1 <= area3)
        {
            cout << area2 << " " << area1 << " " << area3 << endl;
        }
        else
        {
            cout << area2 << " " << area3 << " " << area1 << endl;
        }
    }
    else
    {
        if(area1 <= area2)
        {
            cout << area3 << " " << area1 << " " << area2 << endl;
        }
        else
        {
            cout << area3 << " " << area2 << " " << area1 << endl;
        }
    }

    // Descending Perimeters

    if(peri1 >= peri2 && peri1 >= peri3)
    {
        if(peri2 >= peri3)
        {
            cout << peri1 << " " << peri2 << " " << peri3 << endl;
        }
        else
        {
            cout << peri1 << " " << peri3 << " " << peri2 << endl;
        }
    }
    else if(peri2 >= peri1 && peri2 >= peri3)
    {
        if(peri1 >= peri3)
        {
            cout << peri2 << " " << peri1 << " " << peri3 << endl;
        }
        else
        {
            cout << peri2 << " " << peri3 << " " << peri1 << endl;
        }
    }
    else
    {
        if(peri1 >= peri2)
        {
            cout << peri3 << " " << peri1 << " " << peri2 << endl;
        }
        else
        {
            cout << peri3 << " " << peri2 << " " << peri1 << endl;
        }
    }

    /*
    I learned calculations,
    comparisons and nested if statements.
    */

    return 0;
}

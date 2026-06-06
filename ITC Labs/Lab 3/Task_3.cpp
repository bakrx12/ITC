#include<iostream>
using namespace std;

int main()
{
    //given data
    double length = 50, width = 25, radius = 2, side = 10;
    double costGrass = 5, costTiles = 25, costConcrete = 10;
    double pi = 3.14;

    //calculating area using formulas
    double muqamalArea = length*width; 
    double circleArea = pi * radius * radius; 
    double squareArea = side * side;
    double grassArea = muqamalArea - (circleArea + squareArea);

    //calculating cost
    //given in problem statement
    double muqamalCost = (circleArea * costTiles) + (squareArea * costGrass) + (grassArea * costGrass);

    //printing result
    system("color 0a");
    cout << "Total cost: " << muqamalCost << " rs" << endl;
}

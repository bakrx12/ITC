//bismillah hirama nirajeem
//Lab 4 Task 1 by AbuBakr
//Roll No. L1S26BSCS0052
#include <iostream>
using namespace std;

int main() {
    //jaggah vagera
    float pgSide = 10.0;
    float lengthCourt = 5.0;
    float widthCourt = 4.0;
    float radius = 4.0;
    float basePool = 5.0;
    float heightPool = 4.0;

    //isko initialize isliye karwaya zero value k sath
    //kyunke sir ki hidayat thi, seedha intitiliaze ni krwana
    float areaPlayground = 0.0;
    float areaCourt = 0.0;
    float areaExercise = 0.0;
    float areaPool = 0.0;

    // qeematein 
    float costGrass = 2.0;
    float costTiles = 25.0;
    float costRateCement = 10.0;
    float costRatePool = 100.0;
    
    
    // jaggah k formulas
    areaPlayground = pgSide * pgSide;
    areaCourt  = lengthCourt * widthCourt;
    areaExercise = radius * radius * 3.14;
    areaPool = 0.5 * basePool * heightPool;

    // hamare pas pg ka area h, us se hum grass ka total area niklenge 
    // (Total playground area - andrron lahore)
    float areaGrass = areaPlayground - (areaCourt + areaExercise + areaPool);

    // sarri qeematein aik jagah pr
    float costCourt = areaCourt * costTiles;
    float costExercise = areaExercise * costRateCement;
    float costPool = areaPool * costRatePool;
    costGrass = areaGrass * costGrass;

    // qeematein nikal raha hu
    cout << "Cost for Tiles: " << costCourt << " rs. " << endl;
    cout << "Cost for Cement: " << costExercise << endl;
    cout << "Cost for Pool: " << costPool << " rs." << endl;
    cout << "Cost for Grass: " << costGrass << " rs. " << endl;

    // muqamal qeematein
    float muqamalCost = costCourt + costExercise + costPool + costGrass;
    cout << "Total: " << muqamalCost << " rs. " << endl;

    return 0;
}
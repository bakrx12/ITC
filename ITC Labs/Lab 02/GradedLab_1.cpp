#include<iostream>
using namespace std;
//Roll No       L1S26BSCS0052
//Name          AbuBakr Aslam

//Store values in variable then replace with expressions to print 

int main() {

    //variable initialize krwa rha hu
    int M = 75;
    int N = 20;
    float R = 12.75;
    float S = 4.5;
    double T = 8.256;

    //hisaab kitaab
    //expressions pdf me diye hue hn
    float expr1 = M + N * 2 - R / S;
    float expr2 = M % N + (int)R * 2 - (int)S;
    float expr3 = M / N + R * S - M % N;
    float expr4 = (M + N + (int)R) / (int)S;
    float expr5 = M * N % (int)R + S * 3 - N;

    //print krwa raha hu vo expression
    //jis hidayat se pdf me kaha gya hai
    cout << "M + N * 2 - R / S = " << expr1 << endl;
    cout << "M % N + (int)R * 2 - (int)S = " << expr2 << endl;
    cout << "M / N + R * S - M % N = " << expr3 << endl;
    cout << "(M + N + (int)R) / (int)S = " << expr4 << endl;
    cout << "M * N % (int)R + S * 3 - N = " << expr5 << endl;

    //skills accquired: initializing variable of diffferent datatypes, basic c++ operations, 
    //experience: programing a basic c++ program that prints expressions and format it as asked 
    return 0;
}

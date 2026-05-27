#include <iostream>
using namespace std;

int main()
{
    // Question 1

    int value = 5;
    float price = 5.5;
    int quantity = 25;
    float cost = 55.98;
    float length = 15.14;

    // Question 2

    int age = 20;
    float salary = 45000.5;
    int marks = 85;
    float temperature = 36.5;
    int days = 7;

    // Question 3

    float weightOfTable = 23.45;
    int numberOfStudents = 40;
    float costOfChair = 25.96;
    float ageOfPerson = 25.4;
    int quantityRequired = 35;

    // Question 4

    cout << "Multiply weight with quantity: "
         << weightOfTable * quantity << endl;

    cout << "Divide students with cost: "
         << numberOfStudents / costOfChair << endl;

    cout << "Tables needed: "
         << numberOfStudents / 4 << endl;

    cout << "Cost of all chairs: "
         << numberOfStudents * costOfChair << endl;

    cout << "Average: "
         << (weightOfTable + costOfChair + quantityRequired) / 3 << endl;

    /*
    I learned how to declare variables,
    initialize variables, perform calculations,
    and display output using cout.
    */

    return 0;
}

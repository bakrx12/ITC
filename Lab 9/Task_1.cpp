#include <iostream>
using namespace std;

int main()
{
    //statement:
    //Write a complete C++ program that calculates the CGPA of a student.
    //The program first reads the number of courses the student has taken
    //and then reads the grade points (GP) and credit hours (CH) of each course.

    int numberOfCourses = 0;
    int courseNumber = 1;
    float gradePoints = 0;
    int creditHours = 0;
    float totalPoints = 0;
    int totalCreditHours = 0;
    float cgpa = 0;

    cout << "Enter number of courses: ";
    cin >> numberOfCourses;

    // loop until all courses are entered

    while(courseNumber <= numberOfCourses)
    {
        cout << "Enter Grade Points for course ";
        cout << courseNumber << ": ";
        cin >> gradePoints;

        cout << "Enter Credit Hours for course ";
        cout << courseNumber << ": ";
        cin >> creditHours;

        totalPoints = totalPoints + (gradePoints * creditHours);
        totalCreditHours = totalCreditHours + creditHours;

        courseNumber++;
    }

    cgpa = totalPoints / totalCreditHours;

    cout << "CGPA is: ";
    cout << cgpa << endl;

    /*
    WHAT CODE DOES:
    The program reads student's number of courses,
    grade points and credit hours of each course.
    Then it calculates total points and CGPA.

    LEARNED:
    - how to use while loop
    - calculations using variables
    - input and output
    - repeated processing
    */

    return 0;
}

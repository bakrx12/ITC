#include<iostream>
using namespace std;
int main()
{   int i = 0, like = 0, boiz = 0;
    cout << "Enter three values: ";
    cin >> i >> like >> boiz;
    if (i == like || i == boiz || like == boiz) { cout << "Try Again, Same values dedected" << endl; }
    else if (i > like && i > boiz) { //i is largest
        if (like > boiz) {
           cout << "Ascending: " << boiz << " " <<  like << " " << i << endl << "Descending: " << i << " " << like << " " << boiz << endl; }
        else if (boiz > like) {
           cout << "Ascending: " << like << " " <<  boiz << " " << i << endl << "Descending: " << i << " " << boiz << " " << like << endl;  } }
    else if (like > i && like > boiz) { //like is largest
        if (i > boiz) {   
            cout << "Ascending: " << boiz << " " <<  i << " " << like << endl << "Descending: " << like << " " << i << " " << boiz << endl; }
        else if (boiz > i)  { 
            cout << "Ascending: " << i << " " <<  boiz << " " << like << endl << "Descending: " << like << " " << boiz << " " << i << endl; } }
    else if (boiz > i && boiz > like) { //boiz is largest
        if (i > like) {  
            cout << "Ascending: " << like << " " <<  i << " " << boiz << endl  << "Descending: " << boiz << " " << i << " " << like << endl;  }
        else if (like > i) { 
            cout << "Ascending: " << i << " " <<  like << " " << boiz << endl  << "Descending: " << boiz << " " << like << " " << i << endl;; } } }

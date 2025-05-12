// Grade Calculator
// Write a C++ program that takes a student’s marks as input 
//and calculates the grade based on if-else conditions. 
//Objective: Practice conditional statements (if-else). 

#include <iostream>
using namespace std;

int main() {
    int marks;

    // Taking input from the user
    cout << "Enter the student's marks (0-100): ";
    cin >> marks;

    // Calculating grade based on marks
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } 
    else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } 
    else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } 
    else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } 
    else if (marks >= 50) {
        cout << "Grade: D" << endl;
    } 
    else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}


// Variable Scope
//Write a program that demonstrates the difference between local and global variables in C++. 
// Use functions to show scope.
//  Objective: Reinforce the concept of variable scope. 
#include <iostream>
using namespace std;

int globalVar = 100;

void showScope() {
    int localVar = 50; 

    cout << "Inside function:" << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;
}

int main() {
    int localVar = 25;  

    cout << "Inside main:" << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;

   
    showScope();

    return 0;
}


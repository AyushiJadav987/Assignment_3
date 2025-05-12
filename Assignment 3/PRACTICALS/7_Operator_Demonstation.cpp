// Operator Demonstration 
//Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators.
// Perform operations using each type of operator and display the results. 

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "Sum: " << a + b << endl;

    // Relational Operator
    cout << "Is a greater than b? " << (a > b) << endl;

    // Logical Operator
    cout << "Logical AND (a > 5 && b < 5): " << (a > 5 && b < 5) << endl;

    // Bitwise Operator
    cout << "Bitwise AND (a & b): " << (a & b) << endl;

    return 0;
}


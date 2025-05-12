// Variables and Constants 
// Write a C++ program that demonstrates the use of variables and constants. 
// Create variables of different data types and perform operations on them. 

#include <iostream>
using namespace std;

int main() {
    
    int a = 5;
    float b = 3.5;
    
    const int MAX = 100;

    int sum = a + 10;
    float product = b * 2;

    cout << "Integer a: " << a << endl;
    cout << "Float b: " << b << endl;
    cout << "Constant MAX: " << MAX << endl;
    cout << "Sum of a and 10: " << sum << endl;
    cout << "Product of b and 2: " << product << endl;

    return 0;
}


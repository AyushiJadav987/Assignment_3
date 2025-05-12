//Type Conversion 
// Write a C++ program that performs both implicit and 
// explicit type conversions and prints the results.

#include <iostream>
using namespace std;

int main() {
    // Implicit Type Conversion
    int intVar = 10;
    double doubleVar = 3.14;
    
    // Implicit conversion 
    double resultImplicit = intVar + doubleVar;

    // Explicit Type Conversion (Casting)
    float floatVar = 5.75f;
    
    // Explicit conversion 
    int resultExplicit = static_cast<int>(floatVar); // floatVar is explicitly converted to int

    cout << "Implicit conversion result (int + double): " << resultImplicit << endl;
    cout << "Explicit conversion result (float to int): " << resultExplicit << endl;

    return 0;
}
 

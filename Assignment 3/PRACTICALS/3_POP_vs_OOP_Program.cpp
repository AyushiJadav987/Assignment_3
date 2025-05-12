// POP vs. OOP Comparison Program :
// Write two small programs: one using Procedural Programming (POP) to 
// calculate the area of a rectangle, and another using Object-Oriented Programming (OOP) 
// with a class and object for the same task. 

#include<iostream>
#include<string.h>
using namespace std;
// Using POP :(procedural language)
#include <iostream>
using namespace std;

int main() {
    int length, width, area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;

    cout << "Area of rectangle: " << area << endl;

    return 0;
}

//using OOP : (Object Orianted Language. 

#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    cout << "Enter length: ";
    cin >> rect.length;

    cout << "Enter width: ";
    cin >> rect.width;

    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}



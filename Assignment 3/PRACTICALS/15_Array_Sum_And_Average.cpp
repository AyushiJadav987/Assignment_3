// Array Sum and Average 
// Write a C++ program that accepts an array of integers, 
//calculates the sum and average, and displays the results. 
//Objective: Understand basic array manipulation.

#include <iostream>
using namespace std;

int main() {
    int numbers[5], sum = 0;
    float average;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        sum += numbers[i]; 
    }

    average = sum / 5.0; 

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
 

// Number Guessing Game
// Write a C++ program that asks the user to guess a number between 1 and 100.
// The program should provide hints if the guess is too high or too low.
// Use loops to allow the user multiple attempts. 
// Objective: Understand while loops and conditional logic.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed for random number generation
    srand(time(0));

    // Random number between 1 and 100
    int target = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100: ";

    // Loop to allow multiple attempts
    while (true) {
        cin >> guess;
        attempts++;

        // Check the user's guess
        if (guess < target) {
            cout << "Too low! Try again: ";
        } 
        else if (guess > target) {
            cout << "Too high! Try again: ";
        } 
        else {
            cout << "Congratulations! You guessed the correct number " << target << " in " << attempts << " attempts." << endl;
            break; 
        }
    }

    return 0;
}
 

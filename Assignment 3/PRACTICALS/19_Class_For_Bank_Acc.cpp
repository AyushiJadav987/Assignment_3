// Class for Bank Account 
// Create a class BankAccount with data members like balance and member functions like depositand withdraw.
//  Implement encapsulation by keeping the data members private.
// Objective: Understand encapsulation in classes.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() { balance = 0.0; }

    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) { balance -= amount; }
    void displayBalance() { cout << "Balance: " << balance << endl; }
};

int main() {
    BankAccount account;

    account.deposit(500);
    account.withdraw(200);
    account.displayBalance();

    return 0;
}
 

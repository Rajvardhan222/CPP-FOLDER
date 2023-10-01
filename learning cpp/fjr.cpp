#include <iostream>
using namespace std;

class BankAccount {
    // Define private data members for account number and balance
    int balance;
public:
    static int accountnum; // Declare the static member variable
    // Constructor to initialize the account with an account number and initial balance
    void initial() {
        accountnum++;
        balance = 0;
    }

    // Member functions to deposit and withdraw money
    void deposit() {
        cout << "Enter the amount to deposit: ";
        int deposit;
        cin >> deposit;
        balance = balance + deposit;
    }

    void withdrawt() {
        cout << "Enter the amount to withdraw: ";
        int withdraw;
        cin >> withdraw;
        balance = balance - withdraw;
    }

    // Member function to display the account details
    void accdetail() {
        int id = accountnum;
        cout << "The account number is " << id << endl;
    }

    // Declare the friend function for transferring money between two accounts
    friend void transfer1(BankAccount acc1, BankAccount acc2);
};

// Define the static member variable outside of the class
int BankAccount::accountnum = 0;

// Define the friend function to transfer money between two accounts
void transfer1(BankAccount acc1, BankAccount acc2) {
    int tram;
    cout << "Enter the amount to transfer: ";
    cin >> tram;
    acc1.balance -= tram; // Corrected to use the -= operator
    acc2.balance += tram; // Corrected to use the += operator
}

int main() {
    // Create two BankAccount objects and initialize them
    BankAccount acc1, acc2;
    acc1.initial();
    acc2.initial();
    acc1.accdetail();
    acc2.accdetail();

    // Deposit and withdraw money from the accounts
    acc1.deposit();
    acc2.deposit();
    acc1.withdrawt();
    acc2.withdrawt();

    // Use the friend function to transfer money between the accounts
    transfer1(acc1, acc2);
    // Display the account details and transaction results
    acc1.accdetail();
    acc2.accdetail();

    return 0;
}
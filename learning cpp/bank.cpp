#include <iostream>
using namespace std;

class BankAccount
{
    // Define private data members for account number and balance
    int balance;
    static int accountnum;

public:
    // Constructor to initialize the account with an account number and initial balance
    void initial()
    {int id;
        accountnum++;
     id=accountnum;
        balance = 0;
        friend void idgetter();
    }

    // Member functions to deposit and withdraw money
    void deposit()
    {
        cout << "Enter the amount to deposit";
        int deposit;
        cin >> deposit;
        balance = balance + deposit;
    }
    void withdrawt()
    {
        cout << "Enter the amount to withdraw";
        int withdraw;
        cin >> withdraw;
        balance = balance - withdraw;
    }

    // Member function to display the account details
    void accdetail()
    {
        //int id = accountnum;
        cout << "The account number is " ;
        
        cout<<"and balance is "<<balance;

    }

    // Declare the friend function for transferring money between two accounts
    // friend void transfer1(BankAccount acc1,BankAccount acc2);
    friend void transfer1(BankAccount acc1, BankAccount acc2);
};
int BankAccount::accountnum = 1;
// Define the friend function to transfer money between two accounts
void transfer1(BankAccount acc1, BankAccount acc2)
{
    int tram;

    cout << "Enter the amount to transfer";
    cin >> tram;
    acc1.balance -= tram; // Corrected to use the -= operator
    acc2.balance += tram; // Corrected to use the += operator
}

int main()
{
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

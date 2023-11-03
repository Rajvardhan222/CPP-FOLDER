#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    int accno;
    string name;
    char acctype;

public:
    Account(char type) : acctype(type) {} // Constructor to initialize acctype

    void getdetail()
    {
        cout << "Welcome to ICICI BANK !!!" << endl
             << "Please Enter your Name: ";
        cin >> name;
        cout << "WELCOME " << name << " to ICICI BANK. Your account type is " << acctype << endl;
        cout << "Enter your phone no (YOUR PHONE NO IS ACCOUNT NO): ";
        cin >> accno;
    }

    virtual void depo() = 0;        // Virtual function for deposit
    virtual void withdrawn() = 0;   // Virtual function for withdrawal
    virtual void chqp() = 0;        // Virtual function for checking minimum balance
    virtual void calcint() = 0;     // Virtual function for calculating interest
};

class Saving_acc : public Account
{
protected:
    double bal = 0;
    double interest = 0.02;

public:
    Saving_acc() : Account('s') {} // Constructor to set account type to 's'

    void depo()
    {
        double amount;
        cout << "Enter an amount to deposit in the account: ";
        cin >> amount;
        bal += amount;
        cout << "Your current balance is " << bal << " rupees, and " << amount << " rupees is successfully added." << endl;
    }

    void withdrawn()
    {
        double amount;
        cout << "Enter an amount to withdraw from the account: ";
        cin >> amount;
        if (amount <= bal)
        {
            bal -= amount;
            cout << "Your current balance is " << bal << " rupees, and " << amount << " rupees is successfully withdrawn." << endl;
        }
        else
        {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    void calcint()
    {
        double interestAmount = bal * interest;
        bal += interestAmount;
        cout << "For 1 year, an interest of " << interestAmount << " rupees has been credited to your account." << endl;
    }

    void chqp()
    {
        if (bal <= 100)
        {
            bal -= 10;
            cout << "Rupees 10 charged for not maintaining the minimum balance. Your current balance is " << bal << endl;
        }
    }
};

class Curr_acc : public Account
{
protected:
    double bal = 0;

public:
    Curr_acc() : Account('c') {} // Constructor to set account type to 'c'

    void depo()
    {
        double amount;
        cout << "Enter an amount to deposit in the account: ";
        cin >> amount;
        bal += amount;
        cout << "Your current balance is " << bal << " rupees, and " << amount << " rupees is successfully added." << endl;
    }

    void withdrawn()
    {
        double amount;
        cout << "Enter an amount to withdraw from the account: ";
        cin >> amount;
        if (amount <= bal)
        {
            bal -= amount;
            cout << "Your current balance is " << bal << " rupees, and " << amount << " rupees is successfully withdrawn." << endl;
        }
        else
        {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    void chqp()
    {
        if (bal <= 100)
        {
            bal -= 10;
            cout << "Rupees 10 charged for not maintaining the minimum balance. Your current balance is " << bal << endl;
        }
    }
};

int main()
{
    char acctype;
    cout << "Enter your account type (c for current, s for saving): ";
    cin >> acctype;

    Account *account;

    if (acctype == 'c')
    {
        account = new Curr_acc();
    }
    else if (acctype == 's')
    {
        account = new Saving_acc();
    }
    else
    {
        cout << "Invalid account type. Please enter 'c' for current or 's' for saving." << endl;
        return 1; // Exit with an error code
    }

    account->getdetail();
cjh
    // Perform account operations
    account->depo();r
    account->withdrawn();
    account->chqp();
    account->calcint();

    delete account; // Clean up dynamically allocated memory

    return 0;
}

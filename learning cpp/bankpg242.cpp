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
    void getdetail()
    {
        cout << "WElcome to ICICI BANK !!!" << endl
             << "Please Enter your Name   " << endl;
        cin >> name;
        cout << "WELCOME " << name << " to ICICI BANK please select your account type  [current a/c--c],[saving a/c--s]" << endl;
        cin >> acctype;
        cout << "Enter your phone no ---NOTE:: [YOUR PHONE NO IS ACCOUNT NO]" << endl;
        cin >> accno;
    }
};
class saving_acc : public Account
{
protected:
    float bal = 0;

public:
    void depo()
    {
        int a;
        cout << "Enter a amount to deposit in the account" << endl;
        cin >> a;
        bal += a;
        cout << "Your current balance is " << bal << " and ruppees " << a << " is successfully added" << endl;
    }
    void withdrawn()
    {
        int a;
        cout << "Enter a amount to withdraw from the account" << endl;
        cin >> a;
        bal -= a;
        cout << "Your current balance is " << bal << " and ruppees " << a << " is successfully withdrawn" << endl;

        calcint();
    }
    float interest = 0.02;
    void calcint()
    {
        int a;
        a = bal * interest;
        bal += a;
        cout << "Your current balance is " << bal << " rupees " << a << " has been given for 1 year interest" << endl;
    }
};
class Curr_acc : public Account
{
protected:
    float bal = 0;

public:
    void depo()
    {
        int a;
        cout << "Enter a amount to deposit in the account" << endl;
        cin >> a;
        bal += a;
        cout << "Your current balance is " << bal << " and ruppees " << a << " is successfully added" << endl;
    }
    void withdrawn()
    {
        int a;
        cout << "Enter a amount to withdraw from the account" << endl;
        cin >> a;
        bal -= a;
        cout << "Your current balance is " << bal << " and ruppees " << a << " is successfully withdrawn" << endl;
    }
    void chqp()
    {
        if (bal <= 100)
        {
            bal += 10;
            cout << "rupees " << 10 << " charged for not maintaining minimum balance"<<" your current balance is "<<bal << endl;
        }
    }
};
int main()
{
    cout << "enter your account type"<<endl<<"current[c]-----Saving";
    char acctypep;
    cin >> acctypep;
  
    if (acctypep == 'c')
    {   
    
        Curr_acc p;
        p.getdetail();
        p.depo();
        p.withdrawn();
        p.chqp();
    }
    else
    {
        saving_acc p;
        p.getdetail();
        p.depo();
        p.withdrawn();
    }
 

    return 0;
}
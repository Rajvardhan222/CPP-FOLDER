#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Login
{
    string name;
    string passward;

public:
    
    void register1()
    {   cout << "Enter the name or user id :";
        cin >> name;
        cout << "Enter the passward :";
        cin >> passward;
        ofstream regf("login.txt", ios::app);
        regf << name << endl
             << passward<<endl;
        regf.close();
        cout << "You are successfuly regestered" << endl;
    }
    void login1(bool &islogin)
    {
        string nametemp;
        string passtemp;
        cout << "Enter the name which you used while regestring : " << endl;
        cin >> nametemp;
        cout << "Enter the password : " << endl;
        cin >> passtemp;

        ifstream logfile("login.txt");
        while (!logfile.eof())
        {
            getline(logfile, name);
            
            getline(logfile, passward);
            
            if (name == nametemp && passward == passtemp)
            {
                islogin = true;
                break;
            }
        }
        logfile.close();
    }
};
void menu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Regester" << endl
         << "2. Login" << endl
         << "3. Exit" << endl<<
         "************************"<<endl;
}

int main()
{
    Login u1;
    menu();
    int userin;
    cin >> userin;
    bool islogin = false;
    switch (userin)
    {
    case 1:
        u1.register1();

        break;
    case 2:
        u1.login1(islogin);
        if (islogin == true)
        {
            cout << "you are logged in " << endl;
        }
        else
        {
            cout << "you entered detail dosent mached our database<<endl";
        }

        break;

    default:
        cout << "incorrect no exiting..." << endl;
        break;
    }

    return 0;
}
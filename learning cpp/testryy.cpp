#include <iostream>
#include <fstream>
using namespace std;
class People
{
public:
    string name;
    int age;
     int srno = 1;

    void getName()
    {
        srno++;
        cout << "Enter the name of the person :";
        cin >> name;
        cout << "Enter the age of that person :";
        cin >> age;
    }
    void putName()
    {
        cout << srno << "     " << name << "       " << age << endl;
    }
};
int main()
{
    People p;
    ofstream outwrite("people.txt", ios::app);
    p.getName();
    outwrite << p.srno << " " << p.name << " " << p.age << endl;
    outwrite.close();
    cout << "Do you want to enter the detail of other person(y/n)?" << endl;
    char choose;
    cin >> choose;
    while (choose == 'y' || choose == 'Y')
    {
        p.getName();
        ofstream openfile("people.txt", ios::app);
        openfile << p.srno << " " << p.name << " " << p.age << endl;

        openfile.close();
        cout << "Do you want to enter the detail of other person(y/n)?" << endl;
        cin >> choose;
    }
    ifstream infile("people.txt", ios::app);
    while (infile >> p.srno >> p.name >> p.age)
    {
        p.putName();
    }
    infile.close();

    return 0;
}
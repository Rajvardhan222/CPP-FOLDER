#include <iostream>
using namespace std;
class DB;
class DM
{
    // meters and centemeters
    int met, cen;

public:
    void getval()
    {
        cout << "Enter the value of the in DM";
        cin >> met >> cen;
} friend void add(DM a, DB b);
    };

class DB
{
    // feet and inches
    int feet, inch;

public:
    void getval2()
    {
        cout << "Enter the value of the in DS";
        cin >> feet >> inch;
    }
        friend void add(DM a, DB b);
};
void add(DM a, DB b)
{
    int add;
    add=(a.met/1000)+(b.feet*3,280);
    cout<<"The addition value of "<<a.met<<" and "<<b.feet<<" is "<<add<<" in KM";
}

int main()
{
    DM obj1;
    DB obj2;
    obj1.getval();
    obj2.getval2();
    add(obj1, obj2);

    return 0;
}
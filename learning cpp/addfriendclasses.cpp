#include <iostream>
using namespace std;
class xyz;
class abc
{
    int a;

public:
    void geta()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
    }
    friend void sum(abc a, xyz m);
};
class xyz
{
    int a;

public:
    void geta()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
    }
    friend void sum(abc a, xyz m);
};
void sum(abc a, xyz m)
{
    int c;
    c = a.a + m.a;
    cout<<c;
}

int main()
{
    abc s;
    xyz d;
    s.geta();
    d.geta();
    sum(s, d);
    return 0;
}
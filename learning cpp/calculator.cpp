#include <iostream>
#include<cmath>
using namespace std;
class Simplecalc
{
protected:
    float a, b;
    char opp;

public:
    void input()
    {
        cout << "Enter the number and than (+,-,*,/) and than another number " << endl;
        cin >> a >> opp >> b;

       calsi();
    }
    void calsi();
};
void Simplecalc::calsi()
{
    switch (opp)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        break;
    }
}
class Scincalc{
    public:
    int par;
    public:
    void cosis(){
        cout<<"ENter tha value"<<endl;   
        cin>>par;     
        cout<<cos((par*3.14)/180);
    }

};
int main()
{
    Simplecalc abj;
    abj.input();
    Scincalc g;
    g.cosis();

    return 0;
}

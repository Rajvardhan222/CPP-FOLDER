#include <iostream>
using namespace std;
class person
{

    string name;
    int age;

public:
    person() {}

    person(string a, int b)
    {
        name = a;

        age = b;
    }
    void getperson()
    {cout<<"person detail:"<<endl;
        cout << "The name of the person is " << name << " and age is " << age << endl;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};
class student : public person
{
    int id;

public:
    student() {}

    student(string a, int b, int idval)
    {
        person(a, b);
        id = idval;
    }
    void getstudent()
    {   cout<<"student detai:"<<endl;
        cout << "The name of the student is " << getname() << " and age is " << getage() << "and id is " << id << endl;
    }
};
int main()
{
    string a;
    int b, idval;
    int count;
    // person p[count];
    cout << "Enter the no of how many person detail are you entering" << endl;
    cin >> count;
    person p[count];

    for (int i = 0; i < count; i++)
    {
        cout << "Enter the name and then age of the person" << endl;
        cin >> a >> b;
        p[i] = person(a, b);
        // person p[i].a;
        // person p[i]=(a,b);
    }
    int counts;
    cout << "Enter the no of how many student detail are you entering" << endl;
    cin >> counts;
    student s[counts];
    for (int i = 0; i < counts; i++)
    {

        cout << "Enter the name , age and id of the student" << endl;
        cin >> a >> b >> idval;
        s[i] = student(a, b, idval);
    }
    for (int i = 0; i < count; i++)
    {
        p[i].getperson();
    }
    for (int i = 0; i < counts; i++)
    {
        s[i].getstudent();
    }

    return 0;
}
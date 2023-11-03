#include<iostream>
using namespace std;
class Student{
    string name;
    int mark;
    public:
    Student(){string a;
        int b;
        cout<<"Enter the name and marks of the student"<<endl;
        cin>>a>>b;
        name=a;
        mark=b;
    }
    void printDetail(){
        cout<<"The marks of "<<name<<" is "<<mark<<"/100"<<endl;
    }
};
int main(){
    Student* student=new Student[3];
    for (int i = 0; i < 3; i++)
    {
       student[i].printDetail();
    }
    
return 0;
}
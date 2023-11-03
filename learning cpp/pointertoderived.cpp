#include<iostream>
using namespace std;
class Student{
    public:
    int age;
    void getch(){
        cin>>age;
    }
    void printage(){
        cout<<"The age of student is "<<age;
    }
};
class derived :public Student{
    public:
    int a;
    
};
int main(){
    Student* pointer;
    derived obj;
    pointer=&obj;
    (*pointer).getch();
     (*pointer).printage();
return 0;
}
#include<iostream>
using namespace std;
class A{
    int a;
    public:
   virtual void display(){}
};
class B: public A{
    int b;
    public:
    void display(){
        cout<<"displaying class B";
    }
};
class C: public A{
    int b;
    public:
    void display(){
        cout<<"displaying class C";
    }
};
int main(){
    C obj;
A* pointertoderivedclass;
pointertoderivedclass=&obj;
pointertoderivedclass->display();
return 0;
}
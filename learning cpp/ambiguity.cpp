#include<iostream>
using namespace std;
class A{
public:
void get(){
    cout<<"hello";
}
};
class B{
public:
void get(){
    cout<<"Hi";
}
};
class D: public A,public B{
    public:
void get(){
    A::get();
    cout<<"Namaste";
}
};
int main(){
    D d1;
    d1.get();
return 0;
}
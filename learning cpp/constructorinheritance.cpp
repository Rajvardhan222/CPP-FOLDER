#include<iostream>
using namespace std;
class A{
int a;
public:
A(){
    a=10;
    cout<<"con1 run"<<endl;
}
};
class B{
int b;
public:
B(){
    b=11;
    cout<<"con2 run"<<endl;
}
};
class D:public B,public A{
    int d;
    public:
    D(){
        d=12; cout<<"con3 run"<<endl;
    }
};
int main(){
D n;
   

return 0;
}
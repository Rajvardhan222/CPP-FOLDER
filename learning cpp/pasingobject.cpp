#include<iostream>
using namespace std;
class add{
    int a,b,c;
    public:
    void fun1(){
        cout<<"enter the value of a";
        cin>>a;
    }
    void fun2(){
        cin>>b;
    }
    int fun3(add a1,add b1){
        int c=a1.a+b1.b;
        cout<<c;
    }
};
int main(){
add g,n,m;
g.fun1();
n.fun2();
m.fun3(g,n);

return 0;
}
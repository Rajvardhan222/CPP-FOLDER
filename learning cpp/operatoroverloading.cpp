#include<iostream>
using namespace std;
class Add{
    public:
    int a;
    Add(){
        cout<<"Enter the value";
        int j;
        cin>>j;
        a=j;
    }
    Add operator+(Add obj2){
        Add objz;
        objz.a=a+obj2.a;
        return objz;
    }

};

int main(){
    Add obj1,obj2,obj3;
    obj3=obj1+obj2;
    cout<<endl<<obj3.a;

return 0;
}
#include<iostream>
using namespace std;
class Number{
    int a,b;
    public:
    void geta(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;

    }
     friend void add(Number obj1,Number obj2);
};
void add(Number obj1,Number obj2){
        int c;
        c=obj1.a+obj2.a;
        cout<<c;
}
int main(){
Number obj1 ,obj2;
obj1.geta();
obj2.geta();
add(obj1,obj2);
return 0;
}
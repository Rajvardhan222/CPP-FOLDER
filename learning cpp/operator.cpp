#include<iostream>
using namespace std;
class space{
    int a,b,c;
    public:
    void getdata(int a1,int b1,int c1){
         a=a1;
         b=b1;
         c=c1;
    }
    int  display(){
        cout<<"the value of a is"<<a;
        cout<<"the value of b is"<<b;
        cout<<"the value of c is"<<c;
    }
    space operator+(space d){
        space dd;
        dd.a = a + d.a; // You need to set values for a and b as well
        dd.b = b + d.b;
        dd.c = c + d.c;
        return dd;
    }

};
int main(){
    space aa,bb,cc;
    aa.getdata(4,4,5);
     bb.getdata(4,4,5);
     
    cc=aa+bb;
    cout<<cc.display();
return 0;
}
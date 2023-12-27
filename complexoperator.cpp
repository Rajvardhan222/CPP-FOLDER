#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int r = 0, int i= 0){
        a=r;
        b=i;
    }
    void setComplex(int r, int i){
         a=r;
         b=i;
    }
    void getComplex(){
        cout<<a<<b;

    }
    void display(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    Complex operator+(Complex obj){
        Complex obj1;
        obj1.a = a+obj.a;
        obj1.b = b + obj.b;
        return obj1;


    }
    Complex operator-(Complex obj){
        Complex obj1;
        obj1.a = a-obj.a;
        obj1.b = b - obj.b;
        return obj1;


    }
    Complex operator*(Complex obj){
        Complex obj1;
        obj1.a = a*obj.a;
        obj1.b = b * obj.b;
        return obj1;


    }
    Complex operator/(Complex obj){
        Complex obj1;
        obj1.a = a/obj.a;
        obj1.b = b / obj.b;
        return obj1;


    }
};
int main(){
Complex ob1,ob2,ob3,ob4,ob5,ob6;
ob1.setComplex(10,50);
ob2.setComplex(19,55);
ob4 = ob1+ob2;
ob3 = ob1-ob2;
ob5 = ob1*ob2;
ob6 = ob1/ob2;

ob4.display();
ob3.display();
ob5.display();
ob6.display();
return 0;
}
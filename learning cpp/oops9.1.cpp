#include<iostream>
using namespace std;
class Shape{public:
        double l,b;
        
     void   get_data(){
            double a,b1;
            cin>>a>>b1;
            l=a;
            b=b;
        }
       virtual int displayArea(){

        }
};
class Triangle:public Shape{
        public:
       int displayArea(double l,double b){
            return 0.5*l*b;
        }
};
class Rectangle: public Shape{
        public:
        int displayArea(double l,double b){
            return l*b;
        }
};
int main(){
    Shape s1;
    s1.get_data();
    cout<<"you want area of triangle or rectangle";
    char j;
    cin>>j;
    if (j=='t')
    {
        cout<<s1.displayArea();
    }
    else{
        cout<<s1.displayArea();
    }
    

return 0;
}
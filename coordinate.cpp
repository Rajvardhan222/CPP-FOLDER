#include<iostream>
#include<cmath>
using namespace std;
class coordinate{
    int a,b;
    public:
    coordinate(){
        cout<<"Enter the value of both the coordinate first for x and then for y"<<endl;
        cin>>a>>b;
    }
    void putdata(){
        cout<<"The value of point a is ("<<a<<","<<b<<")"<<endl;
    }
    void putdata1(){
        cout<<"The value of point b is ("<<a<<","<<b<<")"<<endl;
    }
   friend void distance(coordinate obj1,coordinate obj2);
};
void distance(coordinate obj1,coordinate obj2){
  int numa,numb;
  numa=obj2.a-obj1.a;
  numb=obj2.b-obj1.b;
   int numfin=(numa*numa)+numb*numb;
   cout<<endl<<"The distance between two given coordinate is "<<sqrt(numfin);
}

int main(){
coordinate cord1 ,cord2;
cord1.putdata();
cord2.putdata1();
distance(cord1,cord2);

return 0;
}
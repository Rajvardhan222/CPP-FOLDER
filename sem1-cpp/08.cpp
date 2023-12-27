#include<iostream>
using namespace std;
class Period{
    int h,m;
    public:
   void getPeriod(int hr,int min){
        h = hr;
        m = min;
    }
    friend Period addPeriod(Period a,Period b);
  int  getPeriod(){
        cout<<h<<" Hours and "<<m<<" minutes."<<endl;
    }
};
Period addPeriod(Period a,Period b){
    int hour,min,allmin;
    Period p;
   allmin = (a.h)*60+(b.h)*60+(a.m)+(b.m);
   hour = allmin/60;
   min = allmin%60;
   p.h = hour;
   p.m = min;
   return p;
    
}
int main(){
    Period p1,p2;
    p1.getPeriod(2,45);
    p2.getPeriod(3,30);
    Period p3 = addPeriod(p1,p2);
    p3.getPeriod();
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int q,m,f,avg;
    float per;
cout<<"Enter the marks of all three Subject"<<endl;
cin>>q>>m>>f;
avg = (q+m+f)/3;
per = (avg/100)*100;
if (per >= 90)
{
    cout<<"Grade A";
}
else if (per >= 70 && per <90)
{
    cout<<"Grade B";
}
else if (per >= 50 && per <70)
{
    cout<<"Grade C";
}
else if (per < 50)
{
    cout<<"Grade F";
}



return 0;
}
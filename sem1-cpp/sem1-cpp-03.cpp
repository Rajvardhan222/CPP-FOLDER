#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter the three number"<<endl;
cin>>a>>b>>c;
if(a > b && a > c){
    
       cout<<a<<" is the greatest of three";
    }
else if (b > a && b > c)
{
    
       cout<<b<<" is the greatest of three";
   
}
else if(c > a && c > b){
    cout<<c<<" is the greatest of three";
}


return 0;
}
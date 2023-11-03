#include<iostream>
using namespace std;
int main(){
long int a;
cin>>a;long 
long int b=a;
long int d=1;
--b;
while (b>0)
{
   
   long int c=a*b;
   --a;
   --a;
   d*=c;
   --b;
   --b;
}
cout<<d;
return 0;
}
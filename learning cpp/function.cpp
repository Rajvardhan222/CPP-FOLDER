#include<iostream>
using namespace std;
//function prototype
int sum(int,int);

int main(){
int num1,num2;//num1 and num2 are acctual parameters
num1=7;
num2=55;
cout<<sum(num1,num2);
return 0;
}
int sum(int a,int b){//a and b are formal parameters
int c=a+b;
return c;
}
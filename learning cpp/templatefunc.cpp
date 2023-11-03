#include<iostream>
using namespace std;
template <class t>
t mult(t a,t b){
        t c=a*b;
        return c;
}
int main(){

float a=mult(5.5,8.2);
cout<<a;
return 0;
}
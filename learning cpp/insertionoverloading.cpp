#include<iostream>
using namespace std;
class Test{
int a;
public:
Test(){
    a=0;
}
friend istream& operator>>(istream& b,Test& n);
friend ostream& operator<<(ostream& b,Test& n);
};
 istream& operator>>(istream& b,Test& n){
            b>>n.a;
            return b;
}
ostream& operator<<(ostream& b,Test& n){
    b<<n.a;
    return b;
}
int main(){
    Test aa;
    cin>>aa;
    cout<<aa;
return 0;
}
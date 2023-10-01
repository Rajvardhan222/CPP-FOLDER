#include<iostream>
using namespace std;
class bank{
    int balance;
    public:
    friend void pbalance(bank a1);
    void getbank(int a){

    }
};
void pbalance(bank a1){
    bank a2;
    a2=a1.balance;
}
int main(){
    bank k,b;
b=pbalance(6);
return 0;
}
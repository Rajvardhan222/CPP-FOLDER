#include<iostream>
using namespace std;
class code{
 int id;
 public:
 code(int a){
    id = a;
 }
 void display(){
    cout<<"The id is "<<id;
 }
};
int main(){
    code A(5);
    code B = A;
    B.display();
return 0;
}
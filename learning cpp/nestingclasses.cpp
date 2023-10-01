#include<iostream>
using namespace std;
class box{
int length,breadth,height;
public:
void getbox();
void setbox();

};
void box::setbox(){
    cout<<"Enter the value of the length breath and height of the box\n";
    cin>>length>>breadth>>height;
    
}
void box::getbox(){
cout<<"The volume of the box is ";
int volume=length*breadth*height;
cout<<volume;
}
int main(){
box box1;
box1.setbox();
box1.getbox();
return 0;
}
#include<iostream>
using namespace std;

class student{
    int percentage;
    public:
   void getper(){
        cout<<"Enter the value of the mark\n";
        cin>>percentage;
   }
   void printch(void){
    cout<<"\nThe value of marks or percentage of the student is "<<percentage;
   }
};


int main(){
student yashveer;
yashveer.getper();
yashveer.printch();

return 0;
}
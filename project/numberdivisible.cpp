#include<iostream>
using namespace std;
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int counter=0;
        while(N>0){
            int a=N%10;
            if(N%a==0){
                counter++;
            }
            N/=10;
            
        }
        return counter;
    }
};
int main(){
Solution s;
int c=s.evenlyDivides(2445);
cout<<c;
return 0;
}
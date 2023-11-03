#include<iostream>
#include<conio.h>
using namespace std;
class M{
    public:
    int a;
    M(){
        cin>>a;
      
    }
};
int main(){
   
        M* p=new M[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<(p[i]).a;
    }
    
    delete []p;
 for (int i = 0; i < 3; i++)
    {
        cout<<(p[i]).a;
    }

return 0;
}
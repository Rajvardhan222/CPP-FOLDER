#include <iostream>
using namespace std;
int main()
{int marks[5]={5,2,6,8,2};
int i=0;
while (i<5)
{
    cout<<marks[i]<<endl;
    i++;
}

   int* p=marks;
  // cout<<endl<<p;
    for (int j = 0; j < 5; j++)
    {            
        
        cout<<*(p+j)<<endl;
    }
    

    return 0;
}
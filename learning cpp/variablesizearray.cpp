#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int a,b;
    cin>>a>>b;
    int variarray[a][900000];
   // for (int i=0; i<a; i++) {
   //      variarray[i][10];
   // }
    
    for (int j = 0; j < a; j++)
    {   int n;
       cin >>n;
        for (int i = 0; i < n; i++)
        {
            cin>>variarray[j][i];
           
        }
        
    }
    for (int j = 0; j < b; j++)
    {   int q1,q2;
        cin>>q1>>q2;
        cout<<variarray[q1][q2];

    }
    
    
  
     
     
    return 0;
}

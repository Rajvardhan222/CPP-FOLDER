#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> v(2);
vector <char> symbol(1);
for (int i = 0; i < v.size(); i++)
{int a;
 cin>>a;
 v.push_back(a);
 for (int i = 0; i < symbol.size(); i++)
 {
   char a;
   symbol.push_back(a);
 }
 int j=0;
 if (symbol[j]=="+")
 {int x,y;
 x=v.[j];
 y=;
   cout<<x+y;

 }
 
}


return 0;
}
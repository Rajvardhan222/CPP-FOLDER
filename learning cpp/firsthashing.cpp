#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v1;
for (int i = 0; i < 5; i++)
{
   int a;
   cin>>a;
   v1.emplace_back(a);
  // v1.push_back(a);
}
int hashing[10]={0};
for (int  i = 0; i < 10; i++)
{
   hashing[v1[i]]+=1;
    
}

//feching
cout<<"feching "<<endl;
cout<<hashing[1];


return 0;
}
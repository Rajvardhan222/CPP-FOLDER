#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cin>>str;
int hashing[25]={0};
for (int i=0; i < str.length(); i++)
{
    hashing[str[i]-'a']++;
}
cout<<endl;
cout<<hashing['b'-'a'];
return 0;
}
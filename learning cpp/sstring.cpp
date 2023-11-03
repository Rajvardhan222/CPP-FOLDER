#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int num;
    string str;
    cin >> str;
    stringstream(str) >> num;
    cout<<(num+1);
    return 0;
}
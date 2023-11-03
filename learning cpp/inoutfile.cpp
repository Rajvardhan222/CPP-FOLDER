#include<iostream>
#include<fstream>
#include<string>
bool file_exists(const std::string& str)
{
    std::ifstream fs(str);
    return fs.is_open();
}
using namespace std;
int main(){
ofstream obj("this.txt");
obj<<"This is";
obj.close();
ifstream obj2("thisb.txt");
cout<<file_exists("thisb.txt");
string str;
getline(obj2,str);
cout<<str;
obj2.close();

return 0;
}
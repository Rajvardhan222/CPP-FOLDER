#include <iostream>
using namespace std;
class Multiply;
class Table
{
  int a, b;

public:
  void getnum()
  {
    cout << "Enter the value of the number to multiply NOTE you are secure\n";
    cin >> a >> b;
  }

  friend class Multiply;
};
class Multiply
{
public:
  int add(Table k)
  {
     return k.a+k.b;
  }
};
int main()
{
  Table p1;
  p1.getnum();
  Multiply j1;
  cout<<j1.add(p1);

  return 0;
}
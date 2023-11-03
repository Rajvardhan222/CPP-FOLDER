#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
   
    int b=1;
    for (int i = 0; i < row; i++)
    {
       for ( i = 1; b <= i; b++)
       {
        cout<<" *";
       }
       cout<<endl;
    }

    return 0;
}
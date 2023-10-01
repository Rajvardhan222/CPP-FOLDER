#include <iostream>
using namespace std;
int main()
{
    
    int a;
    a = 3;
    int *b = &a;
    cout << b;
    // cout<<&a;
    cout << endl
         << "the value at address a is" << *b;
    int **c = &b;
    cout << "the address of pointer b is " << c << endl;
    cout << "the value at pointer c is " << **c;
    cout << endl
         << "the value at pointer c is " << c;
    cout << endl
         << "the value at pointer c is " << b;
    cout << endl
         << "the value at pointer b is " << *b;
    return 0;
}
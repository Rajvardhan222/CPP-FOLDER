#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    static int m = 1;
    m++;
    return a * b + m;
}
int main()
{
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    cout << product(9, 8) << endl;
    return 0;
}
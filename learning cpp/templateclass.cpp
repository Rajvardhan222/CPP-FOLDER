#include <iostream>
#include <iomanip>
using namespace std;
template <class T>
class vectors
{
    T arr[3];

public:
    vectors(T a, T b, T c)
    {
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
    }
    T dotpointer(vectors v)
    {
        T dp = 0;
        for (int i = 0; i < 3; i++)
        {
            dp += arr[i] * v.arr[i];
        }

        return dp;
    }
};
int main()
{

    vectors<float> v1(2.3, 5.53, 8.53), v2(5.53, 8.53, 3.53);
    float c = v1.dotpointer(v2);
    cout << setprecision(2) << fixed << c;

    return 0;
}
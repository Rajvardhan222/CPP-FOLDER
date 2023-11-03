#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int **vararray = new int *[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vararray[i] = new int[n];
        for (int j = 0; j < a; j++)
        {
            cin >> vararray[i][j];
        }
    }
    for (int i = 0; i < q; i++)
    {
        int k, m;
        cin >> k >> m;
        cout << vararray[k][m] << endl;
    }
    for (int j = 0; j < n; j++)
    {
        delete[] vararray[j];
    }
    delete[] vararray;

    return 0;
}

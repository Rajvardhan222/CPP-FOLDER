#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    string unit;
    double a, b = 0;
    while (cin >> a >> unit)
    {
        if (unit != "cm" && unit != "in" && unit != "m" && unit != "feet")
        {
            cout << "Enter the correct value of unit" << endl;
            break;
        }

        if (unit == "cm" || unit == "in" || unit == "m" || unit == "feet")
        {
            if (unit == "in")
            {
                /* code */
                a = a * 2.54;
            }
            if (unit == "m")
            {
                /* code */
                a = a * 100;
            }
            if (unit == "feet")
            {
                /* code */
                a = a * 30;
            }
            if (unit == "cm")
            {
                a = a;
            }

            unit = "cm";
        }

        sum += a;

        if ((a - b) < 1 / 100)
        {
            cout << "The number is allmost same" << endl;
        }

        if (a > b)
        {
            cout << "\nthe smaller number so far is " << b << unit << endl;
            cout << "\nthe largest number so far is " << a << unit << endl;
            cout << "\ngreater value is :" << a;
            cout << "\nsmaller value is :" << b;
        }
        if (b > a)
        {
            cout << "\nThe smaller value so far is " << a << unit;
            cout << "\nThe largest value so far is " << b << unit;
            /* code */ cout << "\ngreater value is :" << b;
            cout << "\nsmaller value is :" << a;
        }
        b = a;

        cout << "the sum is " << sum;
    }

    return 0;
}

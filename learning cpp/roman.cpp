#include <iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int integer = 0;

        int size = s.size();
        char arr[size];
        for (int i = 0; i < size; i++) {
            arr[i] = s[i];
        }

        for (int i = 0; i < size; i++) {
            if (arr[i] == 'M') {
                integer += 1000;
            } else if (arr[i] == 'D') {
                integer += 500;
            } else if (arr[i] == 'C') {
                if ((i + 1) < size) {
                    if (arr[i + 1] == 'D') {
                        integer += 400;
                        i++;
                    } else if (arr[i + 1] == 'M') {
                        integer += 900;
                        i++;
                    } else {
                        integer += 100; // Default for 'C' when not followed by 'D' or 'M'
                    }
                } else {
                    integer += 100;
                }
            } else if (arr[i] == 'L') {
                integer += 50;
            } else if (arr[i] == 'X') {
                if ((i + 1) < size) {
                    if (arr[i + 1] == 'L') {
                        integer += 40;
                        i++;
                    } else if (arr[i + 1] == 'C') {
                        integer += 90;
                        i++;
                    } else {
                        integer += 10; // Default for 'X' when not followed by 'L' or 'C'
                    }
                } else {
                    integer += 10;
                }
            } else if (arr[i] == 'V') {
                integer += 5;
            } else if (arr[i] == 'I') {
                if ((i + 1) < size) {
                    if (arr[i + 1] == 'V') {
                        integer += 4;
                        i++;
                    } else if (arr[i + 1] == 'X') {
                        integer += 9;
                        i++;
                    } else {
                        integer += 1; // Default for 'I' when not followed by 'V' or 'X'
                    }
                } else {
                    integer += 1;
                }
            }
        }

        return integer;
    }
};
int main()
{
    Solution obj;
    int a = obj.romanToInt("III");
    cout << a;
    return 0;
}
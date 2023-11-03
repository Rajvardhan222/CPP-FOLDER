#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int counter = 0;
        int size = digits.size();
        if (digits[size - 1] < 9) {
            digits[size - 1] += 1;
        } else if ((digits[size - 1] == 9) && size > 1) {
            if (digits[0] == 9 && digits[size - 1] == 9) {
                for (int i = 0; i < size; i++) {
                    if (digits[i] == 9) {
                        counter++;
                    }
                }
                if (counter == size) {
                    digits.insert(digits.begin(), 1);
                    for (int i = 1; i < digits.size(); i++) {
                        digits[i] = 0;
                    }
                }
            } else if (digits[size - 2] != 9) {
                digits[0] += 1;
                digits[size - 1] = 0;
            }
        } else if (digits[size - 1] == 9) {
            digits[size - 1] = 0;
            vector<int>::iterator it;
            digits.insert(digits.begin(), 1);
        } else if (digits[size - 2] == 9 && digits[size - 1] == 9) {
            for (int s = size - 1; s >= 0; s--) {
                digits[s] += 1;
                if (digits[s] == 10) {
                    digits[s] = 0;
                } else if (digits[s] < 10) {
                    break; // Place the break statement here
                }
            }
        }
        return digits;
    }
};

int main() {
    vector<int> digits = {8, 9, 9, 9};
    Solution solution;
    vector<int> result = solution.plusOne(digits);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

#include<iostream>

using namespace std;

class OneDigitCounter {
private:
    int counter;

public:
    void setValue(int value) {
        counter = value;
    }

    void displayValue() {
        cout << "Counter value: " << counter << endl;
    }

    void incrementCounter() {
        counter++;
    }

    void decrementCounter() {
        counter--;
    }
};

int main() {
    OneDigitCounter myCounter;

    int initialValue;
    cout << "Enter initial value for the counter: ";
    cin >> initialValue;

    myCounter.setValue(initialValue);
    myCounter.displayValue();

    myCounter.incrementCounter();
    myCounter.displayValue();

    myCounter.decrementCounter();
    myCounter.displayValue();

    return 0;
}
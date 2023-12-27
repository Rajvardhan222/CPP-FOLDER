#include <iostream>

// Class with specified member functions, constructor, and destructor
class Counter {
private:
    int count;

public:
    // Constructor with default parameter zero
    Counter(int initialCount = 0) : count(initialCount) {
        std::cout << "Constructor called. Count set to: " << count << std::endl;
    }

    // Destructor function
    ~Counter() {
        std::cout << "Destructor called. Count: " << count << std::endl;
    }

    // Increment function
    void inc() {
        count++;
    }

    // Decrement function
    void dec() {
        count--;
    }

    // Display function
    void display() {
        std::cout << "Count: " << count << std::endl;
    }
};

// Class to overload unary ++ and unary --
class UnaryOperators {
private:
    int value;

public:
    UnaryOperators(int initialValue) : value(initialValue) {}

    // Overloading unary ++ operator (pre-increment)
    UnaryOperators operator++() {
        ++value;
        return *this;
    }

    // Overloading unary -- operator (pre-decrement)
    UnaryOperators operator--() {
        --value;
        return *this;
    }

    // Display function
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    // Using the Counter class
    Counter counter1(5);
    counter1.inc();
    counter1.display();
    counter1.dec();
    counter1.display();

    // Using the UnaryOperators class
    UnaryOperators uOperator(10);
    ++uOperator; // Calls overloaded ++ operator (pre-increment)
    uOperator.display();

    --uOperator; // Calls overloaded -- operator (pre-decrement)
    uOperator.display();

    return 0;
}

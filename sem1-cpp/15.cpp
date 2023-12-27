#include <iostream>

// Template class for swapping values
template <typename T>
class SwapExample {
public:
    // Member function to swap two values
    void swapValues(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    // Instantiate the template class with int type
    SwapExample<int> intSwapper;

    // Example with integers
    int num1 = 5, num2 = 10;
    std::cout << "Before swap - num1: " << num1 << ", num2: " << num2 << std::endl;

    // Call the swapValues function for integers
    intSwapper.swapValues(num1, num2);

    std::cout << "After swap - num1: " << num1 << ", num2: " << num2 << std::endl;

    return 0;
}

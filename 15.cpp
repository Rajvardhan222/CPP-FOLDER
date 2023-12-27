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
    int x = 5, y = 10;
    std::cout << "Before swap - x: " << x << ", y: " << y << std::endl;

    // Call the swapValues function for integers
    intSwapper.swapValues(x, y);

    std::cout << "After swap - x: " << x << ", y: " << y << std::endl;

    // Instantiate the template class with double type
    SwapExample<double> doubleSwapper;

    // Example with doubles
    double a = 3.14, b = 2.71;
    std::cout << "Before swap - a: " << a << ", b: " << b << std::endl;

    // Call the swapValues function for doubles
    doubleSwapper.swapValues(a, b);

    std::cout << "After swap - a: " << a << ", b: " << b << std::endl;

    return 0;
}

#include <iostream>

// Base class
class Shape {
public:
    // Virtual function for calculating square
    virtual double calculateSquare() const {
        std::cout << "Calculating square in base class." << std::endl;
        return 0.0;
    }
};

// Derived class 1
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Overriding the virtual function
    double calculateSquare() const override {
        std::cout << "Calculating square of Circle." << std::endl;
        return 3.14 * radius * radius;
    }
};

// Derived class 2
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Overriding the virtual function
    double calculateSquare() const override {
        std::cout << "Calculating square of Square." << std::endl;
        return side * side;
    }
};

int main() {
    // Using dynamic polymorphism with pointers
    Shape* shapePtr1 = new Circle(5.0);
    Shape* shapePtr2 = new Square(4.0);

    // Calling the overridden functions
    double square1 = shapePtr1->calculateSquare();
    double square2 = shapePtr2->calculateSquare();

    // Displaying the calculated squares
    std::cout << "Square of Circle: " << square1 << std::endl;
    std::cout << "Square of Square: " << square2 << std::endl;

    // Cleanup
    delete shapePtr1;
    delete shapePtr2;

    return 0;
}

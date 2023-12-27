#include<iostream>

using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }

    double calculateCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle myCircle;

    myCircle.setRadius(5.0);

    cout << "Radius: " << myCircle.getRadius() << endl;
    cout << "Area: " << myCircle.calculateArea() << endl;
    cout << "Circumference: " << myCircle.calculateCircumference() << endl;

    return 0;
}
#include <iostream>

class Base {
public:
    void action1() {
        std::cout << "public method in base class" << std::endl;
    }
};

class Derived1 : public Base {
public:
    void action2() {
        std::cout << "Derived Method" << std::endl;
    }
};

class Derived2 : public Derived1 {
public:
    void action3() {
        std::cout << "Derived 2 Method" << std::endl;
    }

    void derivedWalk() {
        action2();
        action1();
    }
};

int main() {
    Derived2 obj;
    obj.action1();
    obj.action3();
    obj.derivedWalk();
    return 0;
}

#include <iostream>

// Base class
class Base {
public:
    void publicMethod() {
        std::cout << "Public method in Base class\n";
    }

private:
    void privateMethod() {
        std::cout << "Private method in Base class\n";
    }
};

// Derived class 1 publicly inherits from Base
class Derived1 : public Base {
public:
    void derived1Method() {
        std::cout << "Derived1 method\n";
    }
};

// Derived class 2 privately inherits from Derived1
class Derived2 : private Derived1 {
public:
    void derived2Method() {
        // Access public methods of the Base class through Derived1
        publicMethod();  // Accessible
        // Access public methods of Derived1 directly
        derived1Method();  // Accessible

        std::cout << "Derived2 method\n";
    }
};

int main() {
    Derived2 obj;
    
    // Access public methods of the Base class
    obj.publicMethod();  // Accessible

    // Access public methods of Derived1 through Derived2
    // obj.derived1Method();  // Not accessible (private inheritance)

    // Access methods of Derived2
    obj.derived2Method();  // Accessible

    return 0;
}

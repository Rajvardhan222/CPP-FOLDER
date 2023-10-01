#include <iostream>
using namespace std;

class Complex {
    // Define private data members for real and imaginary parts
    int a,b;

public:
    // Define member functions to set real and imaginary parts
    void getcomples(int m1,int m2){
        cout<<"Enter the value of a and b"<<endl;
        a=m1;
        b=m2;
    }
    // Define a member function to display the complex number
    void printcomples(){
        cout<<"The comples number is "<<a<<" + "<<b<<"i"<<endl;
    }

    // Declare the friend function for adding two complex numbers
    friend Complex addcomplex(Complex x,Complex y);
};

// Define the friend function to add two complex numbers
Complex addcomplex(Complex x,Complex y){
Complex z;
z.getcomples((x.a+y.a),(x.b+y.b));
z.printcomples();
}


int main() {
    // Create two Complex objects and input their values from the user
    Complex obj1, obj2;
    obj1.getcomples(2,3);
    obj1.printcomples();
    obj2.getcomples(8,6);
    obj2.printcomples();
    addcomplex(obj1,obj2);



    // Use the friend function to add the two complex numbers

    // Display the result

    return 0;
}

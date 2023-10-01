#include<iostream>
using namespace std;
class Student {
private:
    string name;
    int age;

public:
    // Constructor to initialize the object
  
    //Student(string n, int a) ;
        Student(string n,int a){
            name=n;
            age=a;
        }
 
    // ...
    Student(Student& obj){
        cout<<"Copy constructor run"<<endl;
        name =obj.name;
        age=obj.age;
    }

    // Member function to display the student's information
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main(){
Student s1("raju",18),s2("yash",16);
s1.displayInfo();
Student s3 = s1;
s3.displayInfo();
return 0;
}
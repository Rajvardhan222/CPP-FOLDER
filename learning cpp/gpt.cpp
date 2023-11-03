#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
    string name;
    int age;
    int height;

public:
    void getdata() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the age of the student: ";
        cin >> age;
        cout << "Enter the height of the student: ";
        cin >> height;
    }

    void putdata() {
        cout << name << setw(10) << age << setw(10) << height << endl;
    }

    // Overload the << operator to save student data
    friend ostream& operator<<(ostream& os, const Student& student) {
        os << student.name << " " << student.age << " " << student.height;
        return os;
    }

    // Overload the >> operator to read student data
    friend istream& operator>>(istream& is, Student& student) {
        is >> student.name >> student.age >> student.height;
        return is;
    }
};

int main() {
    Student s[2];
    ofstream file("main.txt");

    for (int i = 0; i < 2; i++) {
        s[i].getdata();
        file << s[i] << endl; // Use the overloaded << operator to save data
    }

    file.close();

    ifstream infile("main.txt");
    cout << "**********Details***********" << endl;
    cout << "Name        age          height" << endl;

    for (int i = 0; i < 2; i++) {
        Student temp;
        // Use the overloaded >> operator to read data
        infile >> temp;
        temp.putdata();
    }

    infile.close();

    return 0;
}

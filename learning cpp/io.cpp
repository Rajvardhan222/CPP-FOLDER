#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Student{
        string name;
        int age;
        int height;
        public:
      
      void  getdata (){
            cout<<"Enter tha name of the student"<<endl;
            cin>>name;
            cout<<"Enter the age of the student"<<endl;
            cin>>age;
            cout<<"Enter the height of the student";
            cin>>height;
        }
        void putdata(){
           
            
            cout<<name<<setw(10)<<age<<setw(10)<<height<<endl;
        }
};
int main(){
            Student s[2];
            ofstream file("main.txt");
            for (int i = 0; i < 2; i++)
            {   s[i].getdata();
                file.write((char *)&s[i],sizeof(s[i]));

            }
            file.close();

            ifstream infile("main.txt");
             cout<<"**********Detail***********"<<endl;
             cout<<"Name        age          height"<<endl;
             for (int i = 0; i < 2; i++)
            {
                infile.read((char *)&s[i],sizeof(s[i]));
                s[i].putdata();

            }
            infile.close();
            


return 0;
}
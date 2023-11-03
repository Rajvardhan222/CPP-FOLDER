#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Lists
{
    string tasks; // stores the task of user
    int comp = 0; // task is completed or not
public:
    void gettasks()
    {
        cout << "Enter the task :) \n";

        getline(cin, tasks);
        
    }
    void writetask(){
        cin>>tasks;
    }
    string gettaskonly()
    {
        return tasks;
    }
    int getcomp(int& counter){return counter;}
};
int main()
{
    Lists u[25];
    cout << "Enter how many task you want to enter \n";
   int counter=0;
   
    
    
    int size=3;
    //cin >> size;
    for (int i = 0+counter; i < size; i++)
    {
        u[i].gettasks();
        ofstream out("task.txt", ios::app);
        out << u[i].gettaskonly();
        out << "\n";
        out<<u[i].getcomp(counter);
         out << "\n";
        out.close();
        counter++;
    }
    cout << "You task are saved "
         << "Do you want to review tham";
    char review='y';
   // cin >> review;
    if (review == 'y')
    {
        ifstream in("task.txt");
        string tasks;
        while (getline(in, tasks))
        {
            cout << tasks << endl;
        }
        cout << tasks;
        in.close();
    }

    else
    {
        cout << "Do you want to update a task if you have completed it";
    }
    

    return 0;
}
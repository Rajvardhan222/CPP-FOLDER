#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Lists
{
    string tasks; // stores the task of the user
    int comp = 0; // task is completed or not

public:
    void gettasks()
    {
        cout << "Enter the task: ";
        getline(cin, tasks);
    }

    string gettaskonly()
    {
        return tasks;
    }

    int getcomp()
    {
        return comp;
    }
};

int main()
{
    Lists u[25];
    int counter = 0;

    int size = 3;
    cout << "Enter how many task you want to enter: ";
    cin >> size;
    cin.ignore(); // Consume the newline character

    for (int i = 0 + counter; i < size; i++)
    {
        u[i].gettasks();
        ofstream out("task.txt", ios::app);
        out << u[i].gettaskonly()<<" "<<counter;
        out << "\n";
        out.close();
        counter++;
    }

    cout << "Your tasks are saved. Do you want to review them (y/n)? ";
    char review;
    cin >> review;
    cin.ignore(); // Consume the newline character

    if (review == 'y')
    {
        ifstream in("task.txt");
        string tasks;
        while (getline(in, tasks))
        {
            cout << tasks << endl;
        }
        in.close();
    }
    else
    {
        cout << "Do you want to update a task if you have completed it(y,n)?" << endl;
    }
    ifstream update("task.txt");
    string taskarr[25];
    int j=0;
    while (update)
    {       
   update>>taskarr[j];
        j++;
    }
for (int i = 0; i < j; i++)
{
        cout<<taskarr[i]<<endl;
}

   
    
    

    return 0;
}

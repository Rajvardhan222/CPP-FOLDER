#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
using namespace std;
class Task
{
public:
    int srno = 0;
    string tasks;
    string status;
    string garbej;
    string pnot, done;
    void getTask()
    {

        cout << "Enter the Task :";
        getline(cin, tasks);
        status = "Not Done";
    }
   void rintTask()
{
    cout << setw(10) << left << srno << setw(30) << left << tasks << setw(10) << left << status << endl;
}

    int rsrno()
    {
        return srno;
    }
};

int main()
{
    Task t;
    ifstream infile1("tasking.txt");

    while (infile1 >> t.srno)
    {
        infile1.ignore();
        getline(infile1, t.tasks);

        getline(infile1, t.status);
    }
    infile1.close();
    t.srno++;
    cout<<"Do you want to enter a task(y/n)?"<<endl;
    char taskenterfirst;
    cin>>taskenterfirst;
    if (taskenterfirst=='y')
    {
       
    
    
    ofstream outfile("tasking.txt", ios::app);
    t.getTask();
    outfile << t.srno << endl
            << t.tasks << endl
            << t.status << endl;
    char choose;
    cout << "Do you want to enter more task(y/n)?" << endl;
    cin >> choose;
    while (choose == 'y')
    {
        t.srno++;
        cin.ignore();
        t.getTask();
        outfile << t.srno << endl
                << t.tasks << endl
                << t.status << endl;
        cout << "Do you want to enter more task(y/n)?" << endl;
        cin >> choose;
    }
    outfile.close();
    }
    else {
    cout << "Do you want to review your task(y/n)?" << endl;
    char review;
    cin >> review;
    ifstream infile2("tasking.txt");
    if (review == 'y')
    {
        while (infile2 >> t.srno)
        {
            infile2.ignore();
            getline(infile2, t.tasks);

            getline(infile2, t.status);

            t.rintTask();
        }
    }
    infile2.close();

    cout << "Do you want to update a task(y/n)?" << endl;
    char update;
    cin >> update;
    
    while (update == 'y')
    {
        cout << "Enter the task no you want to update" << endl;
        int taskNoUpdate;
        cin >> taskNoUpdate;
        ifstream updatefile("tasking.txt");
        ofstream tempfile("temp.txt");
        while (updatefile >> t.srno)
        {
            if (t.srno == taskNoUpdate)
            {
                getline(updatefile, t.garbej);
                getline(updatefile, t.tasks);
                updatefile.ignore();
                updatefile >> t.pnot >> t.done;
                cout << "is this task done?" << endl;
                char taskd;
                cin >> taskd;
                if (taskd == 'y')
                {
                    tempfile << t.srno << endl
                             << t.tasks << endl
                             << t.done << endl;
                }
                else
                {
                    tempfile << t.srno << endl
                             << t.tasks << endl
                             << t.pnot << " " << t.done << endl;
                }
            }
            else
            {

                getline(updatefile, t.garbej);
                getline(updatefile, t.tasks);

                getline(updatefile, t.status);
                tempfile << t.srno << endl
                         << t.tasks << endl
                         << t.status << endl;
            }
        }
        tempfile.close();
        updatefile.close();
        cout << "Do you want to update a task again (y/n)?" << endl;
        cin >> update;
    }
    ifstream show("temp.txt");
  
        while (show >> t.srno)
        {
            show.ignore();
            getline(show, t.tasks);

            getline(show, t.status);

            t.rintTask();
        }
    show.close();
    
    }

    return 0;
}
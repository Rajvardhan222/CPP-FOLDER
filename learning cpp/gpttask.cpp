#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Task {
public:
    int srno;
    string tasks;
    string status="Not done";

    void getTasks(){
            cout<<"Enter the task"<<endl;
            getline(cin,tasks);

    }

    void printTask() {
        cout << srno << "   " << tasks << "    " << status << endl;
    }
};

vector<Task> tasks;

void loadTasks() {
    ifstream infile("tasking.txt");
    int srno;
    string tasks, status;
    while (infile >> srno) {
        getline(infile >> ws, tasks);
        getline(infile, status);
        tasks.push_back(Task(srno, tasks, status));
    }
}

void saveTasks() {
    ofstream outfile("tasking.txt");
    for (const Task& task : tasks) {
        outfile << task.srno << endl << task.tasks << endl << task.status << endl;
    }
}

int main() {
    loadTasks();

    // Implement the interactive menu for adding, modifying, and viewing tasks.
    // Update the 'tasks' vector accordingly.
    

    saveTasks();

    return 0;
}

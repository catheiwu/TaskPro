#include "../include/TaskList.h"
#include <iostream>
#include <string>

using namespace std;

//constructor
TaskList::TaskList(){

    TaskList* taskList;
}

//destructor
TaskList::~TaskList(){

    for (int i = 0; i < allTasks.size(); i++) {

        delete allTasks[i];
    }

    
    
}

int TaskList::sort(int userChoice){

    if (userChoice == 1) { // sort by priority
    
        for(int i = 0; i < allTasks.size() - 1; i++){
            for (int j = 0; j < allTasks.size() - i - 1; j++){
                if (allTasks[j].getPriority() > allTasks[j + 1].getPriority()){
                    int temp = allTasks[j];
                    allTasks[j] = allTasks[j+1];
                    allTasks[j + 1] = temp;
                }
            }

        }


    }
    else if (userChoice == 2) { // sort by deadline

        for(int i = 0; i < allTasks.size() - 1; i++){
            for (int j = 0; j < allTasks.size() - i - 1; j++){
                if (allTasks[j].getDdl() > allTasks[j + 1].getDdl()){
                    int temp = allTasks[j];
                    allTasks[j] = allTasks[j+1];
                    allTasks[j + 1] = temp;
                }
            }

        }
    }
    else {

        return -1;

    }

}

void TaskList::addTask() {

    string taskName;
    

    Task* newTask = new Task(taskName);
    allTasks.push_back(newTask);

    cout << "Task added successfully!" << endl;
}

void TaskList::addTask(MainTask* newTask) {

    string taskName = newTask->getName();
    

    Task* taskToAdd = new Task(taskName);
    allTasks.push_back(newTask);

    cout << "Task added successfully!" << endl;
}


int TaskList::deleteTask(int taskIndex){

    if (taskIndex < 1 || taskIndex > allTasks.size()) {

        cout << "Invalid task index. Please enter a valid index." << endl;

        return -1;
    }

    
    delete allTasks[taskIndex - 1];
    allTasks.erase(allTasks.begin() + taskIndex - 1);

    cout << "Task deleted successfully!" << endl;
}



int TaskList::updateDdl() {



}

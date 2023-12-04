#ifndef TASKLIST_H
#define TASKLIST_H

#include <string>
#include "Task.h"

using namespace std;

class TaskList
{
    private:
        vector<Task*> allTasks;
        
        

    public:
        TaskList* taskList;
        void sort();
        void addTask();
        void display();
        void deleteTask();
        int updateDdl();


};

#endif
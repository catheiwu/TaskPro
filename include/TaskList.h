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
        TaskList();
        ~TaskList();
        int sort(int userChoice);
        void addTask();
        int deleteTask(int taskIndex);
        int updateDdl();


};

#endif
#ifndef TASKLIST_H
#define TASKLIST_H

#include <string>
#include "Task.h"

using namespace std;

class TaskLlist
{
    private:
        Task[] allTasks;
        int length;
        void sort();

    public:
        TaskList* taskList;
        void addTask();
        void display();
        void deleteTask();

};

#endif
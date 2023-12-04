#ifndef TASKLIST_H
#define TASKLIST_H

#include <string>
#include <ctime>
#include "Task.h"
#include "MainTask.h"

using namespace std;

class TaskList
{
    private:
        vector<MainTask*> allTasks;
        struct tm* _addRecurring(time_t oldDeadLine, uint recurringDay);
    public:

        TaskList* taskList;
        TaskList();
        ~TaskList();
        vector<MainTask*> getAllTasks();
        int sort(int userChoice);
        int addTask();
        int addTask(MainTask* newTask);
        int deleteTask(int taskIndex);
        int updateDdl();


};

#endif
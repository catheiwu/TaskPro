#include "../include/TaskList.h"
#include "../include/MainTask.h"
#include "../include/helperFunctions.h"
#include "../include/dfs.h"
#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>
#include <algorithm>
#include <pthread.h>

using namespace std;

// constructor
TaskList::TaskList()
{
}

// destructor
TaskList::~TaskList()
{

    for (int i = 0; i < allTasks.size(); i++)
    {

        delete allTasks[i];
    }
}

int TaskList::sort(int userChoice)
{

    if (userChoice == 1)
    { // sort by priority



        for (int i = 0; i < allTasks.size() - 1; i++)
        {
            allTasks[i]->sort();
            for (int j = 0; j < allTasks.size() - i - 1; j++)
            {
                if (allTasks[j]->getPriority() > allTasks[j + 1]->getPriority())
                {
                    MainTask *temp = allTasks[j];
                    allTasks[j] = allTasks[j + 1];
                    allTasks[j + 1] = temp;
                }
            }
        }
        allTasks[allTasks.size() - 1]->sort();
        return 0;
    }
    else if (userChoice == 2)
    { // sort by deadline

        for (int i = 0; i < allTasks.size() - 1; i++)
        {
            for (int j = 0; j < allTasks.size() - i - 1; j++)
            {
                if (allTasks[j]->getDdl() > allTasks[j + 1]->getDdl())
                {
                    MainTask *temp = allTasks[j];
                    allTasks[j] = allTasks[j + 1];
                    allTasks[j + 1] = temp;
                }
            }
        }
        return 0;
    }
    else
    {

        return -1;
    }
}

int TaskList::addTask()
{

    MainTask *newTask = new MainTask();
    this->allTasks.push_back(newTask);

    return 0;
}

int TaskList::addTask(MainTask *newTask)
{

    // Task *taskToAdd = new MainTask(taskName);
    this->allTasks.push_back(newTask);

    return 0;
}

// int TaskList::deleteTask(int taskIndex)
// {

//     if (taskIndex < 1 || taskIndex > allTasks.size())
//     {
//         // cout << "Invalid task index. Please enter a valid index." << endl;
//         return -1;
//     }
//     delete allTasks[taskIndex - 1];
//     allTasks.erase(allTasks.begin() + taskIndex - 1);
//     // cout << "Task deleted successfully!" << endl;
//     return 0;
// }
int TaskList::deleteTask(int taskIndex)
{
    if (taskIndex < 1 || taskIndex > allTasks.size())
    {
        return -1;
    }

    // Delete the associated subtasks before deleting the main task
    MainTask* mainTaskToDelete = allTasks[taskIndex - 1];
    for (SubTask* subTask : mainTaskToDelete->getAllSubtasks())
    {
        delete subTask;
    }

    // Now delete the main task
    delete mainTaskToDelete;
    allTasks.erase(allTasks.begin() + taskIndex - 1);

    return 0;
}


// updateDdl when the program started and update very hour.
// make sure it's only called once.
// return the tid when successful, -1 when fail.
int TaskList::updateDdl()
{
    pthread_t threadID;
    int ret = pthread_create(&threadID, NULL,
                   _updateDdlHelper, this);
    if (ret != 0)
        {
           std::cout << "pthread_create error: error_code=" << ret << std::endl;
        }
    pthread_detach(threadID);
    return static_cast<uint> (threadID);
}

void* TaskList::_updateDdlHelper(void *arg)
{
    TaskList* parent = static_cast<TaskList*>(arg) ;
    while (true)
    {
        // get current time
        time_t time_current;
        time(&time_current);
        for (int i = 0; i < parent->allTasks.size(); i++)
        {
            MainTask *mt = parent->allTasks[i];
            // std::cout << "in loop " << i << std::endl;
            if (mt->isRecurring())
            {
                // std::cout << "isRecurring " << i << std::endl;

                if (mt->isDdlPassed()) // already passed, updating it
                {
                    // std::cout << "mt->isDdlPassed()" << i << std::endl;
                    time_t oldDeadLine = mt->getDdl();
                    // std::cout << "ddl before" << oldDeadLine << std::endl;
                    mt->editDdl(_addRecurring(oldDeadLine, mt->getRecurringEventTime()));
                    // std::cout << "ddl after" << mt->getDdl() << std::endl;
                }
                else // not marked passed but it could be.
                {
                    if (mt->getDdl() < time_current) // ddl already passed
                    {
                        // std::cout << " < time_current" << i << std::endl;
                        mt->editDdlPassed(true);
                        time_t oldDeadLine = mt->getDdl();
                        mt->editDdl(_addRecurring(oldDeadLine, mt->getRecurringEventTime()));
                    }
                }
            }
            else // not recurring, do nothing
            {
            }
        } // update all the tasks in list

        sleep(ONE_HOUR);
    }
}


vector<MainTask *> TaskList::getAllTasks()
{
    return this->allTasks;
}
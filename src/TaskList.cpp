#include "../include/TaskList.h"
#include "../include/MainTask.h"
#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>


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
            for (int j = 0; j < allTasks.size() - i - 1; j++)
            {
                if (allTasks[j]->getPriority() > allTasks[j + 1]->getPriority())
                {
                    MainTask* temp = allTasks[j];
                    allTasks[j] = allTasks[j + 1];
                    allTasks[j + 1] = temp;
                }
            }
        }
    }
    else if (userChoice == 2)
    { // sort by deadline

        for (int i = 0; i < allTasks.size() - 1; i++)
        {
            for (int j = 0; j < allTasks.size() - i - 1; j++)
            {
                if (allTasks[j]->getDdl() > allTasks[j + 1]->getDdl())
                {
                    MainTask* temp = allTasks[j];
                    allTasks[j] = allTasks[j + 1];
                    allTasks[j + 1] = temp;
                }
            }
        }
    }
    else
    {

        return -1;
    }
}

int TaskList::addTask()
{

    MainTask *newTask = new MainTask();
    allTasks.push_back(newTask);

    return 0;
}

int TaskList::addTask(MainTask *newTask)
{

    // Task *taskToAdd = new MainTask(taskName);
    allTasks.push_back(newTask);

    return 0;
}

int TaskList::deleteTask(int taskIndex)
{

    if (taskIndex < 1 || taskIndex > allTasks.size())
    {
        // cout << "Invalid task index. Please enter a valid index." << endl;
        return -1;
    }
    delete allTasks[taskIndex - 1];
    allTasks.erase(allTasks.begin() + taskIndex - 1);
    // cout << "Task deleted successfully!" << endl;
}

// updateDdl when the program started and update very hour.
// make sure it's only called once.
// return the pid when successful, -1 when fail.
int TaskList::updateDdl()
{
    int pid = 0;
    pid = fork();
    if (pid == -1)
    {
        std::cerr << "Error: fork error" << std::endl;
        return -1;
    }
    else if (pid == 0) // child process
    {
        while (true)
        {
            // get current time
            time_t time_current;
            time(&time_current);
            for (int i = 0; i < allTasks.size(); i++)
            {
                MainTask *mt = allTasks[i];
                if (mt->isRecurring())
                {
                    if (mt->isDdlPassed()) // already passed, updating it
                    {
                        time_t oldDeadLine = mt->getDdl();
                        mt->editDdl(_addRecurring(oldDeadLine, mt->getRecurringEventTime()));
                    }
                    else // not marked passed but it could be.
                    {
                        if (mt->getDdl() < time_current) // ddl already passed
                        {
                            mt->editDdlPassed(true);
                            time_t oldDeadLine = mt->getDdl();
                            mt->editDdl(_addRecurring(oldDeadLine, mt->getRecurringEventTime()));
                        }
                    }
                }
                else // not recurring, do nothing
                {

                }
            }// update all the tasks in list

            sleep(ONE_HOUR);


        }
    }
    else // parent prosess
    {
        std::cout << "pid" << std::endl;
        return pid;
    }
}

// get the old one ddl and return the newone
struct tm *TaskList::_addRecurring(time_t oldDeadLine, uint recurringDay)
{
    oldDeadLine += ONE_DAY * recurringDay;
    struct tm *newDdl = localtime(&oldDeadLine);
    return newDdl;
}

vector<MainTask*> TaskList::getAllTasks()
{
    return this->allTasks;
}
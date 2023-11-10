#include "../include/Task.h"
#include <ctime>
#include <unistd.h>

// ATTENTION, if use this, DeadLine *dl and Description *des should come from new.
Task::Task(DeadLine *dl, Description *des)
{
    if (dl == nullptr && des == nullptr)
    {
        Task();
    }
    else if (dl == nullptr || des == nullptr)
    {
        if (dl == nullptr)
        {
            ddl = new DeadLine();
            description = des;
        }
        else if (des == nullptr)
        {
            ddl = dl;
            description == new Description();
        }
        allSubtasks = nullptr;
        uint numSubtasks = 0;
    }
    else
    {
        ddl = dl;
        description = des;
        allSubtasks = nullptr;
        uint numSubtasks = 0;
    }
}

Task::Task()
{
    ddl = new DeadLine();
    description = new Description();
    allSubtasks = nullptr;
    uint numSubtasks = 0;
}

Task::~Task()
{
    if (ddl != nullptr)
    {
        delete ddl;
    }
    if (description != nullptr)
    {
        delete description;
    }
}

int Task::addSubTask(SubTask *newSubTask)
{
    numSubtasks++;
    if (allSubtasks!=nullptr)// not first subtask
    {
         delete [] allSubtasks;
    }
    allSubtasks = new SubTask[numSubtasks];
    SubTask[numSubtasks-1] = newSubTask;
   
    return 0;
}

void Task::editDdl(struct tm *newDdl)
{
    ddl->editDdl(newDdl);
}

std::string Task::getDdl()
{
    return ddl->getDdl();
}
void Task::editDescription(std::string newDescription)
{
    description->editDescription(newDescription);
}
std::string Task::getDescription()
{
    return description->getDescription();
}

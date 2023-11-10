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
    for (int i = 0, i < numSubtasks, i++)
    {
        delete allSubtasks[i];
    }
    if (allSubtasks != nullptr)
    {
        delete[] allSubtasks;
    }
}

// SubTask *newSubTask must can be freed.
int Task::addSubTask(SubTask *newSubTask)
{
    if (newSubTask == nullptr) // how to throw an exception?
    {
        std::cerr << "error: NULL SubTask pointer" << std::endl;
        return -1;
    }
    numSubtasks++;
    if (allSubtasks != nullptr) // not first subtask
    {
        delete[] allSubtasks;
    }
    allSubtasks = new SubTask *[numSubtasks];
    allSubtasks[numSubtasks - 1] = newSubTask;

    return 0;
}

int Task::deleteSubTask(int index)
{
    if (numSubtasks == 0)
    {
        std::cerr << "error: no subtask to delete" << std::endl;
        return -1;
    }
    if (index > numSubtasks - 1)
    {
        std::cerr << "error: invalid index" << std::endl;
        return -1;
    }

    temp = new SubTask *[numSubtasks - 1]; // smaller array
    //.what about [0]?
    for (int i = 0, i < index, i++) // copy left
    {
        temp[i] = allSubtasks[i];
    }
    for (int i = index + 1, i < numSubtasks, i++) // copy right
    {
        temp[i - 1] = allSubtasks[i];
    }
    delete allSubtasks[index];
    delete [] allSubtasks;
    allSubtasks = temp;
    numSubtasks--;
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

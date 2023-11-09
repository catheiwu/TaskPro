#include "../include/Task.h"
#include <ctime>
#include <unistd.h>
Task::Task(DeadLine *dl)
{
    ddl = dl;
}

Task::Task()
{
    ddl = nullptr;
}

Task::~Task()
{
    if (ddl != nullptr)
    {
        delete ddl;
    }


}

int Task::addSubTask(SubTask *newSubTask)
{
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
void Task::editDescription(string newS)
{
}
std::string Task::getDescription()
{
    return "hi";
}

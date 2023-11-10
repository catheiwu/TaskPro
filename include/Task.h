#ifndef TASK_H
#define TASK_H

#include <string>
#include <ctime>
#include "SubTask.h"
#include "DeadLine.h"
#include "Description.h"

using namespace std;

class Task
{
private:
    DeadLine* ddl;
    Description* description;
    SubTask **allSubtasks;
    uint numSubtasks;

public:
    Task(DeadLine* dl,Description* des);
    Task();
    ~Task();
    int addSubTask(SubTask *newSubTask);
    int deletSubTask()
    std::string getDdl();
    void editDdl(struct tm *newDdl);
    std::string getDescription();
    void editDescription(std::string newDescription);
};

#endif

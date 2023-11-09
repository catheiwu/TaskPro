#ifndef TASK_H
#define TASK_H

#include <string>
#include <ctime>
#include "SubTask.h"
#include "DeadLine.h"

using namespace std;

class Task
{
private:
    DeadLine* ddl;
    string description;
    SubTask **allSubtasks;
    uint numSubtasks;

public:
    Task(DeadLine* dl);
    Task();
    ~Task();
    int addSubTask(SubTask *newSubTask);
    std::string getDdl();
    void editDdl(struct tm *newDdl);
    std::string getDescription();
    void editDescription(string newDescription);
};

#endif

#ifndef TASK_H
#define TASK_H

#include <string>
#include <ctime>
#include "SubTask.h"
class Task
{
private:
    struct tm* ddl;
    string description;
    SubTask ** allSubtasks;
    uint numSubtasks;

public:
    Task();
    ~Task();
    void addSubTask(SubTask *newSubTask);
    struct tm* getDdl();
    string getDescription();
    void editDdl(struct tm* newDdl);
    void editDescription(string newDescription);
};

#endif

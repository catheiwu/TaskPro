#ifndef SUBTASK_H
#define SUBTASK_H

#include"Task.h"

class SubTask:public Task
{

private:

public:

    SubTask(/* args */);
    SubTask(string Name, string Description, uint Priority);
    ~SubTask();
};

#endif

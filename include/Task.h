#ifndef TASK_H
#define TASK_H

#include <string>
#include "TaskList.h"

using namespace std;

class Task
{
private:
    string name;
    string description;
    uint priority;

public:
    Task();
    ~Task();
    string getName();
    string getDescription();
    uint getPriority();
    void editName(string newName);
    void editDescription(string newDescription);
    void editPriority(uint newPriority);
};

#endif
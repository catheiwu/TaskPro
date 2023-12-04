#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

class Task
{
private:
    string name;
    string description;
    uint priority;

public:
    Task();
    Task(string Name, string Description, uint Priority);
    ~Task();
    string getName();
    string getDescription();
    uint getPriority();
    void editName(string newName);
    void editDescription(string newDescription);
    void editPriority(uint newPriority);
};

#endif
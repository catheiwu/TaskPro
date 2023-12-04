#ifndef MAINTASK_H
#define MAINTASK_H

#include "Task.h"
#include "SubTask.h"
#include <ctime>
#include <vector>


class MainTask: public Task
{
private:
    struct tm* ddl;
    vector<SubTask*> allSubtasks;
    uint recurringEventTime; // Days
    bool ddlPassed; // update every time user looks at it

    
    
public:
    MainTask();
    ~MainTask();
    bool isRecurring();
    bool isDdlPassed();
    int addSubtask(SubTask*);
    time_t getDdl();
    uint getRecurringEventTime();
    void editDdl(struct tm* newDdl);
    void editRecurringEventTime(int newRecurringEventTime);
    vector<SubTask*> getAllSubtasks();
    void editDdlPassed(bool passed);
    int deleteSubtask(int index);
};
#endif
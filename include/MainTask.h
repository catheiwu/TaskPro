#ifndef MAINTASK_H
#define MAINTASK_H

#include "Task.h"
#include "SubTask.h"
#include <ctime>
#include <vector>


class MainTask: public Task
{
private:
    time_t ddl;
    vector<SubTask*> allSubtasks;
    uint recurringEventTime; // Days
    bool ddlPassed; // update every time user looks at it



public:
    MainTask();
    MainTask(time_t Ddl, uint RecurringEventTime, bool DdlPassed);
    MainTask(time_t Ddl, uint RecurringEventTime, bool DdlPassed,std::string Name, std::string Description, uint Priority);

    ~MainTask();
    bool isRecurring();
    bool isDdlPassed();
    int addSubtask(SubTask*);
    time_t getDdl();
    uint getRecurringEventTime();
    void editDdl(time_t newDdl);
    void editRecurringEventTime(uint newRecurringEventTime);
    vector<SubTask*> getAllSubtasks();
    void editDdlPassed(bool passed);
    int updateDdlPassed();
    int deleteSubtask(int index);
    int sort(); //only by priority
};
#endif
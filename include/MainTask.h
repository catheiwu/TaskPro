#include "Task.h"
#include "SubTask.h"
#include <ctime>
#include <vector>


class MainTask::Task
{
private:
    struct tm* ddl;
    vector<SubTask*> allSubtasks;
    uint recurringEventTime;
    
public:
    MainTask(/* args */);
    ~MainTask();
    bool isRecurring();
    int addSubtask(SubTask*);
    std::string getDdl();
    uint getRecurringEventTime();
    void editDdl(struct tm* newDdl);
    void editRecurringEventTime(int newRecurringEventTime);
    vector<SubTask*> getAllSubtasks();
    int deleteSubtask(int index): 
};


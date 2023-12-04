#include "Task.h"
#inlcude "SubTask.h"
#include <ctime>
#include <vector>


class MainTask::Task
{
private:
    struct tm* ddl;
    vector<*SubTask> allSubTasks;
    uint recurringEventTime;
    
public:
    MainTask(/* args */);
    ~MainTask();
    bool isRecurring();
    int addSubTask(SubTask);
    std::string getDdl();
    uint getRecurringEventTime();
    void editDdl(struct tm* newDdl);
    void editRecurringEventTime(int newRecurringEventTime);
    int deleteSubtask(int index): 
};


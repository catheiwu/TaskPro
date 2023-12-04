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
    void editDdlPassed();
    int deleteSubtask(int index): 
};


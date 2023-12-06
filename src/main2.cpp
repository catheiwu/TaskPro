#include "../include/TaskList.h"
#include "../include/Task.h"
#include "../include/SubTask.h"
#include "../include/MainTask.h"
#include "../include/helperFunctions.h"
#include "../include/dfs.h"
#include <ctime>
#include <unistd.h>

int main()
{
    TaskList* ts = new TaskList();
    MainTask* mt1 = new MainTask();
    MainTask* mt2 = new MainTask();
    MainTask* mt3 = new MainTask();
    SubTask* st1 = new SubTask();
    SubTask* st2 = new SubTask();
    SubTask* st3 = new SubTask();
    mt1->addSubtask(st1);
    mt1->addSubtask(st2);
    mt1->addSubtask(st3);
    ts->addTask(mt1);
    ts->addTask(mt2);
    ts->addTask(mt3);
    displayTasks(ts);
    


    return 0;
}
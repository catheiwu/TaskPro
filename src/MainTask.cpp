#include "../include/MainTask.h"
#include <ctime>
#include <vector>
#include "../include/SubTask.h"

using namespace std;

MainTask::MainTask(){

    ddl = nullptr;
    recurringEventTime = 0;
    ddlPassed = false;
    


}

MainTask::MainTask(struct tm* Ddl, uint RecurringEventTime, bool DdlPassed) {

    ddl = Ddl;
    recurringEventTime = RecurringEventTime;
    ddlPassed = DdlPassed;
    
}





MainTask::~MainTask(){

for (int i = 0; i < allSubtasks.size(); i++) {

        delete allSubtasks[i];
    }

}


bool MainTask::isRecurring() {

    if (recurringEventTime == 0) {

        return false;
    }
    
    return true;

}


bool MainTask:: isDdlPassed() {

    return ddlPassed;

}

int MainTask::addSubtask(SubTask* newSubtask) {

  // Task *taskToAdd = new MainTask(taskName);
    allSubtasks.push_back(newSubtask);

    return 0;
}

time_t MainTask::getDdl() {

    return mktime (ddl);

}


uint MainTask::getRecurringEventTime() {

 return recurringEventTime;

}

void MainTask::editDdl(struct tm* newDdl) {

    ddl = newDdl;

    return;

}


void MainTask::editRecurringEventTime(uint newRecurringEventTime) {

    recurringEventTime = newRecurringEventTime;

    return;
}


vector<SubTask*> MainTask::getAllSubtasks(){

 return this->allSubtasks;
}

void MainTask::editDdlPassed(bool passed) {

    ddlPassed = passed;
}

int MainTask::updateDdlPassed() {

    time_t timep;

    time(&timep);
    if (timep > getDdl()) { // which means deadline has already passed

    editDdlPassed(true);

    }
    else {
        editDdlPassed(false);
    }

    return 0; 
}

int MainTask::deleteSubtask(int index) {

    if (index < 1 || index > allSubtasks.size())
    {
        // cout << "Invalid task index. Please enter a valid index." << endl;
        return -1;
    }
    delete allSubtasks[index - 1];
    allSubtasks.erase(allSubtasks.begin() + index - 1);
    // cout << "Task deleted successfully!" << endl;
    return 0;
}

int MainTask::sort() { // by priority

    for (int i = 0; i < allSubtasks.size() - 1; i++)
        {
            for (int j = 0; j < allSubtasks.size() - i - 1; j++)
            {
                if (allSubtasks[j]->getPriority() > allSubtasks[j + 1]->getPriority())
                {
                    SubTask* temp = allSubtasks[j];
                    allSubtasks[j] = allSubtasks[j + 1];
                    allSubtasks[j + 1] = temp;
                }
            }
        }
}

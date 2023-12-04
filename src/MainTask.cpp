#include "../include/MainTask.h"
#include <ctime>
#include <vector>
#include "../include/SubTask.h"

using namespace std;

MainTask::MainTask(){


}


MainTask::~MainTask(){



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

return 0;

}


uint MainTask::getRecurringEventTime() {

return 0;

}

void MainTask::editDdl(struct tm* newDdl) {

return ;

}


void MainTask::editRecurringEventTime(uint newRecurringEventTime) {


}


vector<SubTask*> MainTask::getAllSubtasks(){

MainTask* q = new MainTask();
return q->allSubtasks;
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

    if (taskIndex < 1 || taskIndex > allSubtasks.size())
    {
        // cout << "Invalid task index. Please enter a valid index." << endl;
        return -1;
    }
    delete allSubtasks[taskIndex - 1];
    allSubtasks.erase(allSubtasks.begin() + taskIndex - 1);
    // cout << "Task deleted successfully!" << endl;
}



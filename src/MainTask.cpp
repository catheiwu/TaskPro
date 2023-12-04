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


return true;
}

bool MainTask:: isDdlPassed() {

return true;
}

int MainTask::addSubtask(SubTask* newSubtask) {

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


void MainTask::editRecurringEventTime(int newRecurringEventTime) {


}


vector<SubTask*> MainTask::getAllSubtasks(){

MainTask* q = new MainTask();
return q->allSubtasks;
}

void MainTask::editDdlPassed(bool passed) {


}

int MainTask::deleteSubtask(int index) {

return 0;
}


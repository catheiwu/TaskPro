#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

#include <iostream>
#include <string>
#include <ctime>

using namespace std;


// void displayTasks(TaskList*);
// void taskToAdd(TaskList*):
// void taskToDelete(TaskList*):
// void taskToEdit(TaskList*);
// void sort(TaskList*);
// void* updateDdlHelper(void*);
time_t _addRecurring(time_t oldDeadLine, uint recurringDay);
int getUserInput();
    
#endif
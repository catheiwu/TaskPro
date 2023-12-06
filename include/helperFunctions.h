#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

#include <iostream>
#include <string>
#include <ctime>
#include "../include/TaskList.h"



using namespace std;


void displayTasks(TaskList*);
void taskToAdd(TaskList*);
void subtaskToAdd(TaskList* taskList);
void taskToDelete(TaskList*);
void taskToEdit(TaskList*);
void sort(TaskList*);
void* updateDdlHelper(void*);
time_t _addRecurring(time_t oldDeadLine, uint recurringDay);
int getUserInputInteger();
time_t getUserInputDdl();
int getUserInputIntegerForMinute();
    
#endif
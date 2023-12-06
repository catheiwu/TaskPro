#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

#include <iostream>
#include <string>
#include <ctime>
#include "../include/TaskList.h"



using namespace std;

void printMainMenu();
void displayTasks(TaskList*);
void taskToAdd(TaskList*);
void taskToDelete(TaskList*);
void taskToEdit(TaskList*);
void sortTasks(TaskList*);
void* updateDdlHelper(void*);
time_t _addRecurring(time_t oldDeadLine, uint recurringDay);
int getUserInputInteger();
time_t getUserInputDdl();
int getUserInputIntegerForMinute();
    
#endif
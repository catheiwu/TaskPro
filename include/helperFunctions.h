#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

#include <iostream>
#include <string>
#include "../include/TaskList.h"

using namespace std;

void displayTasks(TaskList*);
void taskToAdd(TaskList*);
void taskToDelete(TaskList*);
void taskToEdit(TaskList*);
void sort(TaskList*);
    
#endif
#include "../include/Task.h"
#include "../include/dfs.h"
#include <ctime>
#include <unistd.h>

#include <iostream>

Task::Task(){
    name = "";
    description = "";
    priority = INFINITY;
}

Task::Task(string Name, string Description, uint Priority){
    name = Name;
    description = Description;
    priority = Priority;
}

Task::~Task(){

}

string Task::getName(){
    return name;
}

string Task::getDescription(){
    return description;
}

uint Task::getPriority(){
    return priority;
}

void Task::editName(string newName){
    name = newName;
}

void Task::editDescription(string newDescription){
    description = newDescription;
}

void Task::editPriority(uint newPriority){
    priority = newPriority;
}
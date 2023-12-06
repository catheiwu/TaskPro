#include "TaskList.h"
#include "Task.h"
#include "SubTask.h"
#include "MainTask.h"
#include "helperFunctions.h" 

using namespace std;

void displayTasks(TaskList* taskList){
    taskList->getAllSubtasks();
}

void taskToAdd(TaskList* taskList){

    int taskNumber;
    cout << "Enter the task number: ";
    cin.ignore();  // To clear the buffer before getline
    getline(cin, newTask);
    taskList->addTask();
    cout << "Task added successfully!\n";
}

void taskToDelete(TaskList* taskList){

    int taskNumber;
    cout << "Enter the task number: ";
    cin.ignore();  // To clear the buffer before getline
    getline(cin, taskNumber);
    taskList->deleteTask();
    cout << "Task deleted successfully!\n";

}

void taskToEdit(TaskList* taskList){

    int editChoice;

    cout << "Enter 1 - Edit task name." << endl;
    cout << "Enter 2 - Edit task description." << endl;
    cout << "Enter 3 - Edit task priority." << endl;
    cout << "Enter 4 - Edit task deadline." << endl;
    cin >> editChoice;

    if(editChoice == 1){
        taskList->editName();
    } else if (editChoice == 2){
        taskList->editDescription();
    } else if (editChoice == 3){
        taskList->editPriority;
    } else if (editChoice == 4){
        taskList->editDdl();
    } else {
        cout << "Invalid choice. Please enter a number between 1 and 4.\n";
    }
}


void sortTasks(TaskList* taskList){

    int sortChoice;

    cout << "Enter 1 - Sort by priority. Enter 2 - Sort by deadline.\n";
    cin >> sortChoice;

    if (sortChoice == 1){
        taskList->sort(1);
    } else if (sortChoice == 2){
        taskList->sort(2);
    } else {
        cout << "Invalid choice. Please enter a number between 1 and 2.\n";
    }
}
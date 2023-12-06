#include "../include/TaskList.h"
#include "../include/Task.h"
#include "../include/SubTask.h"
#include "../include/MainTask.h"
#include "../include/helperFunctions.h"
#include <ctime>
#include <unistd.h>

using namespace std;

// void displayTasks(TaskList *taskList)
// {
//     taskList->getAllSubtasks();
// }

// void taskToAdd(TaskList *taskList)
// {

//     int taskNumber;
//     cout << "Enter the task number: ";
//     cin.ignore(); // To clear the buffer before getline
//     getline(cin, newTask);
//     taskList->addTask();
//     cout << "Task added successfully!\n";
// }

// void taskToDelete(TaskList *taskList)
// {

//     int taskNumber;
//     cout << "Enter the task number: ";
//     cin.ignore(); // To clear the buffer before getline
//     getline(cin, taskNumber);
//     taskList->deleteTask();
//     cout << "Task deleted successfully!\n";
// }

// void taskToEdit(TaskList *taskList)
// {

//     int editChoice;

//     cout << "Enter 1 - Edit task name." << endl;
//     cout << "Enter 2 - Edit task description." << endl;
//     cout << "Enter 3 - Edit task priority." << endl;
//     cout << "Enter 4 - Edit task deadline." << endl;
//     cin >> sortChoice;

//     if (userChoice == 1)
//     {
//         taskList->editName();
//     }
//     else if (userChoice == 2)
//     {
//         taskList->editDescription();
//     }
//     else if (userChoice == 3)
//     {
//         taskList->editPriority;
//     }
//     else if (userChoice == 4)
//     {
//         taskList->editDdl();
//     }
//     else
//     {
//         cout << "Invalid choice. Please enter a number between 1 and 4.\n";
//     }
// }

// void sortTasks(TaskList *taskList)
// {

//     int sortChoice;

//     cout << "Enter 1 - Sort by priority. Enter 2 - Sort by deadline." cin >> sortChoice;

//     if (userChoice == 1)
//     {
//         taskList->sort(1);
//     }
//     else if (userChoice == 2)
//     {
//         taskList->sort(2);
//     }
//     else
//     {
//         cout << "Invalid choice. Please enter a number between 1 and 2.\n";
//     }
// }

// get the old one ddl and return the newone
time_t _addRecurring(time_t oldDeadLine, uint recurringDay)
{
    // std::cout << "in _addRecurring " << std::endl;
    time_t newDdl = oldDeadLine + (ONE_DAY * recurringDay);
    return newDdl;
}

#include "../include/TaskList.h"
#include "../include/Task.h"
#include "../include/SubTask.h"
#include "../include/MainTask.h"
#include "../include/helperFunctions.h"
#include "../include/dfs.h"
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <cstdlib>
#include <cstring>
using namespace std;

void printMainMenu()
{
    int userChoice;

    cout << "==========================\n";
    cout << "-------Main Menu----------\n";
    cout << "==========================\n";
    cout << "1) View list of tasks\n";
    cout << "2) Add tasks\n";
    // cout << "3) Add subtasks\n";
    cout << "3) Delete tasks\n";
    cout << "4) Edit tasks\n";
    cout << "5) Sort tasks\n";
    cout << "6) Quit\n";
    cout << "other: print main menu\n";
    cout << "                       \n";
}

void displayTasks(TaskList *taskList)
{
    vector<MainTask *> t1 = taskList->getAllTasks();
    for (int i = 0; i < t1.size(); i++)
    {
        string taskDescription = t1[i]->getDescription();
        string taskPriority = to_string(t1[i]->getPriority());
        string taskDeadline;

        cout << i + 1 << ".\t" << t1[i]->getName() << '\t';

        if (taskPriority == to_string(INFINITY))
        {
            taskPriority = "No priority";
        }
        cout << "Task priority: " << taskPriority << '\t';
        time_t ddl = t1[i]->getDdl();

        if (ddl == 0)
        {

            taskDeadline = "No deadline";
        }
        else
        {
            taskDeadline = ctime(&ddl);
            taskDeadline = taskDeadline.substr(0, taskDeadline.size() - 1);
        }
        
        cout << "Task deadline: " << taskDeadline << "  ";

        t1[i]->updateDdlPassed();
        if (t1[i]->isDdlPassed() == true && ddl != 0)
        {
            cout << "Deadline passed!\t";
        }

        cout << endl;

        if (taskDescription == "")
        {
            taskDescription = "No description";
        }
        cout << "Task description: " << taskDescription << endl;

        vector<SubTask *> sub = t1[i]->getAllSubtasks();
        for (int j = 0; j < sub.size(); j++)
        {
            string subtaskPriority = to_string(sub[j]->getPriority());

            cout << '\t' << j + 1 << ". Subtask name: " << sub[j]->getName() << '\t';

            if (subtaskPriority == to_string(INFINITY))
            {
                subtaskPriority = "No priority";
            }
            cout << "Priority: " << subtaskPriority << endl;

            cout << '\t' << "Subtask description: " << sub[j]->getDescription() << endl;
        }
        cout << endl;
    }
    cout << endl
         << endl
         << endl;
}

void taskToAdd(TaskList *taskList)
{

    string taskName; // prompt for taskname
    cout << endl
         << endl;
    cout << "Enter the task name: ";
    taskName = getUserInputString();

    while (taskName == "")
    {

        cout << "Nothing entered. Please enter valid task name: " << endl;
        taskName = getUserInputString();
    }
    MainTask *newtask = new MainTask();
    newtask->editName(taskName);

    uint priority; // prompt for priority
    cout << "Enter priority for this task" << endl;
    priority = getUserInputInteger();

    while (priority == -1 || priority > INFINITY)
    {

        cout << "Priority must be greater than 0" << endl;
        priority = getUserInputInteger();
    }
    newtask->editPriority(priority);

    string desc; // prompt for task description
    cout << "Enter description for task" << endl;
    desc = getUserInputString();
    newtask->editDescription(desc);

    cout << "Task Deadline: Enter 1 if task has no deadline, Enter 2 to enter deadline for this task" << endl; // prompt for task deadline

    int choice;
    choice = getUserInputInteger();

    while (choice == -1)
    {

        cout << "Choice must be either 1 or 2" << endl;
        choice = getUserInputInteger();
    }

    if (choice == 1)
    {

        // taskList->addTask(newTask);
    }
    else
    {

        cout << "Enter deadline for this task" << endl;
        time_t taskDeadLine = getUserInputDdl();
        newtask->editDdl(taskDeadLine);
    }

    taskList->addTask(newtask);

    cout << "Task added successfully!" << endl
         << endl;
    printMainMenu();
}

void subtaskToAdd(MainTask *maintask)
{

    string subtaskName;
    cout << "Enter the new subtask name: ";
    subtaskName = getUserInputString();

    while (subtaskName == "")
    {

        cout << "Nothing entered. Please enter valid subtask name: " << endl;
        subtaskName = getUserInputString();
    }

    SubTask *newSubtask = new SubTask();
    newSubtask->editName(subtaskName);

    uint priority; // prompt for priority
    cout << "Enter priority for this subtask" << endl;
    priority = getUserInputInteger();

    while (priority == -1 || priority > INFINITY)
    {

        cout << "Priority must be greater than 0" << endl;
        priority = getUserInputInteger();
    }
    newSubtask->editPriority(priority);

    string desc; // prompt for task description
    cout << "Enter description for subtask" << endl;

    desc = getUserInputString();   
    newSubtask->editDescription(desc);
    maintask->addSubtask(newSubtask);
    printMainMenu();
}

void taskToDelete(TaskList *taskList)
{
    if (taskList->getAllTasks().size() == 0)
    {
        cout << "There are no tasks to delete. " << endl;
        return;
    }
    cout << endl
         << endl;
    int taskIndex;
    int confirmDelete;
    cout << "Are you sure you want to delete a task?\n";
    cout << "1. yes\n" << "2. no\n";
    confirmDelete = getUserInputInteger();
    while (confirmDelete != 1 && confirmDelete != 2){
        cout << "Invalid input. Input must be 1 or 2\n";
        confirmDelete == getUserInputInteger();
    }
    if (confirmDelete == 1){
        cout << endl << endl;
        displayTasks(taskList);
        cout << "Enter the index of the task you want to delete: " << endl;
        taskIndex = getUserInputInteger();

        while (taskIndex == -1 || taskIndex > taskList->getAllTasks().size())
        {

            // cout << "Enter non-zero valid index" << endl;
            taskIndex = getUserInputInteger();
        }

        taskList->deleteTask(taskIndex);
        cout << "Task deleted successfully!\n\n";
        printMainMenu();
    
    } else if (confirmDelete == 2){
        printMainMenu();
        return;
    }
   
}


void taskToEdit(TaskList *taskList)
{
    if (taskList->getAllTasks().size() == 0)
    {
        cout << "There is no Main task added " << endl;
        return;
    }
    int taskIndex;
    displayTasks(taskList);
    cin.ignore();
    cout << "Enter the number of which task would you like to edit: \n";
    taskIndex = getUserInputInteger();
    while (taskIndex == -1 || taskIndex > taskList->getAllTasks().size())
    {
        cout << "Task number must be greater than 0" << endl;
        taskIndex = getUserInputInteger();
    }

    cout << "Enter 1 - Edit task name." << endl;
    cout << "Enter 2 - Edit task description." << endl;
    cout << "Enter 3 - Edit task priority." << endl;
    cout << "Enter 4 - Edit task deadline." << endl;
    cout << "Enter 5 - Add Subtask." << endl;
    cout << "Enter 6 - Edit Subtask." << endl;
    cout << "Enter 7 - Delete Subtask." << endl;
    int taskEditNum;
    taskEditNum = getUserInputInteger();
    while (taskEditNum == -1 || taskEditNum > 7)
    {
        cout << "Invalid choice. Please enter a number between 1 and 7.\n";
        taskEditNum = getUserInputInteger();
    }
    cout << endl
         << endl;

    if (taskEditNum == 1)
    {
        cout << "What would you like to edit the task name to?\n";
        string newTaskName; // prompt for taskname
        cin.ignore();       // To clear the buffer before getline
        getline(cin, newTaskName);
        newTaskName = getUserInputString();

        while (newTaskName == "")
        {
            cout << "Nothing entered. Please enter valid task name: " << endl;
            newTaskName = getUserInputString();
        }
        taskList->getAllTasks().at(taskIndex - 1)->editName(newTaskName);
    }
    else if (taskEditNum == 2)
    {
        cout << "What would you like to edit the description to?\n";
        string newDescription;
        cin.ignore();
        getline(cin, newDescription);
        taskList->getAllTasks().at(taskIndex - 1)->editDescription(newDescription);
    }
    else if (taskEditNum == 3)
    {
        cout << "What priority should this task be?\n";
        int newPriority;
        newPriority = getUserInputInteger();
        while (newPriority == -1 || newPriority > INFINITY)
        {
            cout << "Invalid choice. Please enter a valid number for priority.\n";
        }
        taskList->getAllTasks().at(taskIndex - 1)->editPriority(newPriority);
    }
    else if (taskEditNum == 4)
    {
        cout << "What do you want the new deadline to be?\n";
        time_t newTaskDeadLine = getUserInputDdl();
        taskList->getAllTasks().at(taskIndex - 1)->editDdl(newTaskDeadLine);
    }
    else if (taskEditNum == 5)
    {
        subtaskToAdd(taskList->getAllTasks().at(taskIndex - 1));
    }
    else if (taskEditNum == 6)
    {
        subtaskToEdit(taskList->getAllTasks().at(taskIndex - 1));
    }
    else if (taskEditNum == 7)
    {
        subtaskToDelete(taskList->getAllTasks().at(taskIndex - 1));
    }
    return;
    cout << endl
         << endl;
    printMainMenu();
}

void subtaskToDelete(MainTask* maintask)
{
    if(maintask->getAllSubtasks().size() == 0)
    {
        cout << "No subtask to delete" << endl;
        return;

    }
        cout << endl
         << endl;
    int taskIndex;
    // displayTasks(taskList);
    cout << "Enter the index of the subtask you want to delete: " << endl;
    taskIndex = getUserInputInteger();

    while (taskIndex == -1 || taskIndex > maintask->getAllSubtasks().size())
    {

        cout << "Enter a valid index" << endl;
        taskIndex = getUserInputInteger();
    }

    maintask->deleteSubtask(taskIndex);
    cout << "Subtask deleted successfully!\n\n";
    printMainMenu();

}
void subtaskToEdit(MainTask *maintask)
{
    // SubTask* sb = new SubTask ();
    if (maintask->getAllSubtasks().size() == 0)
    {
        cout << "There is no subtask added " << endl;
        return;
    }
    int taskIndex;
    // displayTasks(taskList);
    // cin.ignore();
    cout << "Enter the number of which subtask would you like to edit: \n";
    taskIndex = getUserInputInteger();
    while (taskIndex == -1 || taskIndex > maintask->getAllSubtasks().size())
    {
        cout << "no index found" << endl;
        taskIndex = getUserInputInteger();
    }
    cout << "Enter 1 - Edit subtask name." << endl;
    cout << "Enter 2 - Edit subtask description." << endl;
    cout << "Enter 3 - Edit subtask priority." << endl;
    int taskEditNum;
    taskEditNum = getUserInputInteger();
    while (taskEditNum == -1 || taskEditNum > 3)
    {
        cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        taskEditNum = getUserInputInteger();
    }
    if (taskEditNum == 1)
    {
        cout << "What would you like to edit the subtask name to?\n";
        string taskName = getUserInputString();

        while (taskName == "")
        {
            cout << "Nothing entered. Please enter valid task name: " << endl;
            taskName = getUserInputString();
        }

        maintask->getAllSubtasks().at(taskIndex - 1)->editName(taskName);
    }
    else if (taskEditNum == 2)
    {
        cout << "What would you like to edit the description to?\n";
        string newDescription;
        cin.ignore();
        getline(cin, newDescription);
        maintask->getAllSubtasks().at(taskIndex - 1)->editDescription(newDescription);
    }
    else if (taskEditNum == 3)
    {
        cout << "What priority should this subtask be?\n";
        int newPriority;
        newPriority = getUserInputInteger();
        while (newPriority == -1 || newPriority > INFINITY)
        {
            cout << "Invalid choice. Please enter a valid number for priority.\n";
        }
        maintask->getAllSubtasks().at(taskIndex - 1)->editPriority(newPriority);
    }
}

void sortTasks(TaskList *taskList)
{

    if (taskList->getAllTasks().size() == 0)
    {
        cout << "There are no tasks to sort! " << endl;
        return;
    }
    int sortChoice;
    cout << endl
         << endl;
    displayTasks(taskList);
    cout << "Enter 1 - Sort by priority. Enter 2 - Sort by deadline." << endl;
    cout << endl
         << endl;
    sortChoice = getUserInputInteger();

    while (sortChoice != 1 && sortChoice != 2)
    { /////
        cout << "Enter 1 or 2." << endl;
        sortChoice = getUserInputInteger();
    }

    if (sortChoice == 1)
    {
        taskList->sort(1);
    }
    else if (sortChoice == 2)
    {
        taskList->sort(2);
    }
}

// get the old one ddl and return the newone
time_t _addRecurring(time_t oldDeadLine, uint recurringDay)
{
    // std::cout << "in _addRecurring " << std::endl;
    time_t newDdl = oldDeadLine + (ONE_DAY * recurringDay);
    return newDdl;
}

// return the user input integer if the int > 0
//  if not return -1
int getUserInputInteger()
{
    char buff[MAX_BUFF_SIZE] = {};
    int choice = 0;
    memset(buff, 0, sizeof(buff));
    fgets(buff, MAX_BUFF_SIZE-1 , stdin);
    char *p;
    choice = strtol(buff, &p, 0);
    if (choice <= 0)
    {
        return -1;
    }
    return choice;
}

int getUserInputIntegerForMinute()
{
    char buff[MAX_BUFF_SIZE] = {};
    int choice = 0;
    memset(buff, 0, sizeof(buff));
    fgets(buff, MAX_BUFF_SIZE-1 , stdin);
    char *p;
    choice = strtol(buff, &p, 0);
    if (choice < 0)
    {
        return -1;
    }
    return choice;
}

time_t getUserInputDdl()
{

    tm *Ddl = new tm;
    uint minute, hour, day, month;

    cout << "Please enter month of deadline (use a number 1-12)" << endl;

    month = getUserInputInteger();
    while (month == -1 || month > 12)
    {

        cout << "Month must be between 1 and 12" << endl;
        month = getUserInputInteger();
    }
    month--;

    cout << "Please enter day of deadline (use a number 1-31)" << endl;

    day = getUserInputInteger();
    while (day == -1 || day > 31)
    {

        cout << "day must be between 1 and 31" << endl;
        day = getUserInputInteger();
    }

    cout << "Please enter hour of deadline (use a number 0-23)" << endl;

    hour = getUserInputIntegerForMinute();
    while (hour == -1 || day > 23)
    {

        cout << "hour must be between 0 and 23" << endl;
        hour = getUserInputIntegerForMinute();
    }

    cout << "Please enter minutes of deadline (use a number 0-60)" << endl;

    minute = getUserInputIntegerForMinute();
    while (minute == -1 || minute > 60)
    {

        cout << "minute must be between 1 and 60" << endl;
        minute = getUserInputIntegerForMinute();
    }
    // --minute;

    time_t currentTime;
    time(&currentTime);

    struct tm *curTime = localtime(&currentTime);

    Ddl->tm_sec = 0;
    Ddl->tm_min = curTime->tm_min;
    Ddl->tm_hour = curTime->tm_hour;
    // cout << "hello" << curTime->tm_hour << endl;
    Ddl->tm_mday = curTime->tm_mday;
    Ddl->tm_mon = curTime->tm_mon;
    Ddl->tm_year = curTime->tm_year;
    Ddl->tm_wday = curTime->tm_wday;
    Ddl->tm_yday = curTime->tm_yday;
    Ddl->tm_isdst = curTime->tm_isdst;

    Ddl->tm_min = minute;
    Ddl->tm_hour = hour;
    Ddl->tm_mday = day;
    Ddl->tm_mon = month;

    if (currentTime > mktime(Ddl))
    {

        Ddl->tm_year += 1;
    }

    time_t deadline = mktime(Ddl);

    delete Ddl;

    return deadline;
}

// return a string, ignore the spaces in the front
std::string getUserInputString()
{
    char buff[MAX_BUFF_SIZE] = {};
    char buff2[MAX_BUFF_SIZE] = {};
    memset(buff, 0, sizeof(buff));
    memset(buff2, 0, sizeof(buff));
    fgets(buff, MAX_BUFF_SIZE-1 , stdin);
    int j = 0;
    int i = 0;
    for(; i < strlen(buff) && buff[i] == ' '; i++);
    for (; i < strlen(buff); i++)
    {
        if (buff[i] == '\n')
        {
            buff2[j] = '\0';
            j++;
            break;
        }
        else
        {
            buff2[j] = buff[i];
            j++;
        }
    }
    if (strlen(buff2) == 0)
    {
        return "";
    }
    return std::string(buff2);
    return std::string(buff2);

}

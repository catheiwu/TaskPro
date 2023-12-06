#include "../include/TaskList.h"
#include "../include/Task.h"
#include "../include/SubTask.h"
#include "../include/MainTask.h"
#include "../include/helperFunctions.h"
#include <ctime>
#include <unistd.h>
#include <cstdlib>
#include <cstring>
#define MAX_BUFF_SIZE 100
using namespace std;

// void displayTasks(TaskList *taskList)
// {
//     taskList->getAllSubtasks();
// }

void taskToAdd(TaskList *taskList)
{

    string taskName; //prompt for taskname
    cout << "Enter the task name: ";
    cin.ignore(); // To clear the buffer before getline
    getline(cin, taskName);
    MainTask* newtask = new MainTask();
    newtask->editName(taskName);
    
    uint priority; //prompt for priority
    cout << "Enter priority for this task" << endl;
    priority = getUserInputInteger();

    while(priority == -1) {

        cout << "Priority must be greater than 0" << endl;
        priority = getUserInputInteger();
    }
    newtask->editPriority(priority);

    string desc; // prompt for task description
    cout << "Enter description for task" << endl;

    cin.ignore();
    getline(cin, desc);
    newtask->editDescription(desc);


    
    cout << "Task Deadline: Enter 1 if task has no deadline, Enter 2 to enter deadline for this task" << endl;//prompt for task deadline

    int choice; 
    choice = getUserInputInteger();

     while(choice == -1) {

        cout << "Choice must be either 1 or 2" << endl;
        choice = getUserInputInteger();
    }

    if (choice == 1) {

        // taskList->addTask(newTask);
        
    }
    else {

        cout << "Enter deadline for this task" << endl;
        time_t taskDeadLine = getUserInputDdl();
        newtask->editDdl(taskDeadLine);
    }


    taskList->addTask(newtask);

  }

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


//return the user input integer if the int > 0
// if not return -1
int getUserInputInteger()
{
    char buff[MAX_BUFF_SIZE] = {};
    int choice = 0;
    memset(buff, 0, sizeof(buff));
    std::cin >> buff;
    char *p;  
    choice = strtol(buff, &p, 0);
    if(choice<=0)
    {
        return -1;
    }
    return choice;
    
}

time_t getUserInputDdl() 
{

    tm* Ddl = new tm;
    uint minute, hour, day, month;

    cout << "Please enter month of deadline (use a number 1-12)" << endl;


    while(month=getUserInputInteger() == -1 && month<=12) {

        cout << "Month must be between 1 and 12" << endl;
        // month = getUserInputInteger();
    }
    month--;

    cout << "Please enter day of deadline (use a number 1-31)" << endl;

     while(day = getUserInputInteger() == -1 && day <= 31) {

        cout << "day must be between 1 and 31" << endl;
        // month = getUserInputInteger();
    }

    cout << "Please enter hour of deadline (use a number 1-24)" << endl;

     while(hour = getUserInputInteger() == -1 && day <= 24) {

        cout << "hour must be between 1 and 24" << endl;
        // month = getUserInputInteger();
    }
    --hour;

    cout << "Please enter minutes of deadline (use a number 0-60)" << endl;

    while(minute = getUserInputInteger() == -1 && minute <= 60) {

        cout << "hour must be between 1 and 60" << endl;
        // month = getUserInputInteger();
    }
    --minute;

    time_t currentTime;
    time(&currentTime);

    struct tm* curTime = localtime(&currentTime);

    Ddl->tm_sec = curTime->tm_sec;
    Ddl->tm_min = curTime->tm_min;
    Ddl->tm_hour = curTime->tm_hour;
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

    if (currentTime > mktime(Ddl)) {

        Ddl->tm_year += 1;
    }



    time_t deadline = mktime(Ddl);

    delete Ddl;

    return deadline;
}

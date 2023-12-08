#include <iostream>
#include <vector>
// #include "../include/TaskList.h"
#include "../include/helperFunctions.h"
using namespace std;

int main()
{
    cout << "\n\n WELCOME TO TaskPro! \n\n\n";
    string file = "../LIST_OF_TASKS.txt";
    TaskList* tl = new TaskList();
    int start = tl->updateDdl();
    if(start == -1)
    {
        cout<< "ERROR: LUNCH FAILED! ABORT!"<<endl;
    }
    printMainMenu();
    

    while (true)
    {

        cout << "Enter your choice (number 1-7): ";
         int userChoice  = getUserInputInteger();

        if (userChoice == 1)
        {
            cout << "View list of tasks\n";
            displayTasks(tl);
            printMainMenu();
        }
        else if (userChoice == 2)
        {
            cout << "Add tasks\n";
            taskToAdd(tl);
        }
        else  if (userChoice == 3)
        {
            cout << "Delete tasks\n";
            taskToDelete(tl);
        }
        else if (userChoice == 4)
        {
            cout << "Edit tasks\n";
            taskToEdit(tl);
            // printMainMenu();
        }
        else if (userChoice == 5)
        {
            cout << "Sort tasks\n";
            sortTasks(tl);
        }
        else if (userChoice == 6)
        {
            cout << "Export tasks into txt file\n";
            exportTaskListToTxt(tl, file);
        }
        else if (userChoice == 7){
            cout << "Quited\n";
            delete tl;
            return 0;
        }
        else
        {
            cout << "Invalid choice. Please enter a number between 1 and 7.\n";
            printMainMenu();
        }
    }

    return 0;
}

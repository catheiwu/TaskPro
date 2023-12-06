#include <iostream>
#include <vector>
// #include "../include/TaskList.h"
#include "../include/helperFunctions.h"

using namespace std;
void printMainMenu()
{
    int userChoice;

    cout << "=======================\n";
    cout << "-------Main Menu-------\n";
    cout << "=======================\n";
    cout << "1) View list of tasks\n";
    cout << "2) Add tasks\n";
    cout << "3) Add subtasks\n";
    cout << "4) Delete tasks\n";
    cout << "5) Edit tasks\n";
    cout << "6) Quit\n";
    cout << "other: print main menu\n";
    cout << "                       \n";
}
int main()
{
    TaskList* tl = new TaskList();
    printMainMenu();
    

    while (true)
    {

        cout << "Enter your choice (number 1-5): ";
         int userChoice  = getUserInputInteger();

        if (userChoice == 1)
        {
            cout << "View list of tasks\n";
            displayTasks(tl);
        }
        else if (userChoice == 2)
        {
            cout << "Add tasks\n";
            taskToAdd(tl);
        }
        else if (userChoice == 3)
        {
            // cout << "Delete tasks\n";
            subtaskToAdd(tl);
        }
        else if (userChoice == 4)
        {
            cout << "Delete tasks\n";
            taskToDelete(tl);
        }
        else if (userChoice == 5)
        {
            cout << "Edit tasks\n";
            taskToEdit(tl);
        }
        else if (userChoice == 6)
        {
            cout << "Quit\n";
            return 0;
        }
        else
        {
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            printMainMenu();
        }
    }

    return 0;
}

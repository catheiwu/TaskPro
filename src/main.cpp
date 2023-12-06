#include <iostream>
#include <vector>
//#include "../include/TaskList.h"
#include "../include/helperFunctions.h"

using namespace std;
void PrintMainMenu()
{

    cout << "=======================\n";
    cout << "-------Main Menu-------\n";
    cout << "=======================\n";
    cout << "1) View list of tasks\n";
    cout << "2) Add tasks\n";
    cout << "3) Delete tasks\n";
    cout << "4) Edit tasks\n";
    cout << "5) Quit\n";
    cout << "                       \n";
}
int main()
{
    int userChoice;
    TaskList* tsk= new TaskList();
    
        while (true) {
        PrintMainMenu();
        cout << "Enter your choice (number 1-5): ";
        cin >> userChoice;

        if (userChoice == 1) {
            cout << "View list of tasks\n";
            displayTasks(tsk);
        } else if (userChoice == 2) {
            cout << "Add tasks\n";
            taskToAdd(tsk);
        } else if (userChoice == 3) {
            cout << "Delete tasks\n";
            taskToDelete(tsk);
        } else if (userChoice == 4) {
            cout << "Edit tasks\n";
            taskToEdit(tsk);
        } else if (userChoice == 5) {
            cout << "Quit\n";
            return 1;
        } else {
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    }
    
    return 0;
}




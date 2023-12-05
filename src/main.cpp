#include <iostream>
#include <vector>
//#include "../include/TaskList.h"
#include "helperFunctions.h"

using namespace std;
void PrintMainMenu()
{
    TaskList t
    int userChoice;

    cout << "=======================\n";
    cout << "-------Main Menu-------\n";
    cout << "=======================\n";
    cout << "1) View list of tasks\n";
    cout << "2) Add tasks\n";
    cout << "3) Delete tasks\n";
    cout << "4) Edit tasks\n";
    cout << "5) Quit\n";
    cout << "                       \n";
    while (true) {
        cout << "Enter your choice (number 1-5): ";
        cin >> userChoice;

        if (userChoice == 1) {
            cout << "View list of tasks\n";
            // Add your logic for viewing tasks here
        } else if (userChoice == 2){
            cout << "Sort tasks\n";

        } else if (userChoice == 3) {
            cout << "Add tasks\n";
            // Add your logic for adding tasks here
        } else if (userChoice == 4) {
            cout << "Delete tasks\n";
            // Add your logic for deleting tasks here
        } else if (userChoice == 5) {
            cout << "Edit tasks\n";
            // Add your logic for editing tasks here
        } else if (userChoice == 6) {
            cout << "Quit\n";
            // Add any cleanup logic here if needed
            return;
        } else {
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    }
}
int main()
{
    TaskList* taskList; 
    PrintMainMenu();
    
    return 0;
}
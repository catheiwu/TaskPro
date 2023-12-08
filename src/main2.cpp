#include "../include/TaskList.h"
#include "../include/Task.h"
#include "../include/SubTask.h"
#include "../include/MainTask.h"
#include "../include/helperFunctions.h"
#include "../include/dfs.h"
#include <ctime>
#include <unistd.h>


// valgrind --leak-check=full ./bin/ValgrindTest
using namespace std;
int main()
{
    // while(true)
    // {
    //     cout<<getUserInputInteger();
    //     cout<< "ho"<<endl;
    // }
    time_t  ct;
    time(&ct);
    TaskList* ts = new TaskList();
    MainTask* mt1 = new MainTask(ct + 5000,0,false,"Study for 100","SOLID",4);
    MainTask* mt4 = new MainTask(ct + 100,0,true,"Study for 141","ALGORITHM",3);
    MainTask* mt2 = new MainTask(ct + 9000,3,false,"Study for 111","",2);
    MainTask* mt3 = new MainTask(ct + 8000,1,false,"This is gonging to be deleted","This is gonging to be deleted",10);
    SubTask* st1 = new SubTask("writing a project","fix bugs",99);
    SubTask* st2 = new SubTask("review SRP","",9);
    SubTask* st3 = new SubTask("taking note","",1);
    SubTask* st4 = new SubTask("This is gonging to be deleted","",1);
    SubTask* st5 = new SubTask("This is gonging to be deleted","",1);
    SubTask* st6 = new SubTask("This is gonging to be deleted","",1);
    SubTask* st7 = new SubTask("This is gonging to be deleted","",1);
    mt1->addSubtask(st1);
    mt1->addSubtask(st2);
    mt1->addSubtask(st3);
    mt1->addSubtask(st4);
    mt1 -> editName("Name Edited");
    mt3->addSubtask(st5);
    mt3->addSubtask(st7);
    mt3->addSubtask(st6);


    ts->addTask(mt1);
    ts->addTask(mt2);
    ts->addTask(mt3);
    ts->addTask(mt4);
    cout<<"at first"<<endl;
    displayTasks(ts);
    cout<<"delete some"<<endl;
    ts->deleteTask(3);
    mt1->deleteSubtask(4);
    displayTasks(ts);
    ts->sort(1);
    ts->sort(2);




    delete ts;
    
    return 0;
}
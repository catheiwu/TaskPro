#include "gtest/gtest.h"
#include "TaskList.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <unistd.h> 
#include "../include/MainTask.h" 
using namespace std;

TEST(TaskList, TestSortbyPriority) {

    TaskList tasklist = TaskList();
    MainTask* task1 = new MainTask();
    MainTask* task2 = new MainTask();
    MainTask* task3 =new MainTask();

    task1->editPriority(3);
    task2->editPriority(2);
    task3->editPriority(1);

    tasklist.addTask(task1); 
    tasklist.addTask(task2);
    tasklist.addTask(task3);
    tasklist.sort(1);


    EXPECT_EQ(tasklist.getAllTasks().at(0)->getPriority(), 1);
    EXPECT_EQ(tasklist.getAllTasks().at(1)->getPriority(), 2);
    EXPECT_EQ(tasklist.getAllTasks().at(2)->getPriority(), 3);

}

TEST(TaskList, TestSortbyDdl) {

    time_t  timep1;
    time_t  timep2;
    time_t  timep3;

    time(&timep1);

    TaskList taskList = TaskList();
    MainTask* task1 = new MainTask();
    MainTask* task2 = new MainTask();
    MainTask* task3 =new MainTask();

    task1->editDdl(localtime(&timep1));
    timep2 = timep1 + 10;
    task2->editDdl(localtime(&timep2));
    

    timep3 = timep1 + 20;
    task3->editDdl(localtime(&timep3));

    taskList.addTask(task3); 
    taskList.addTask(task2);
    taskList.addTask(task1);
    taskList.sort(2);


    EXPECT_EQ(taskList.getAllTasks().at(0)->getDdl(), timep1);
    EXPECT_EQ(taskList.getAllTasks().at(1)->getDdl(), timep2);
    EXPECT_EQ(taskList.getAllTasks().at(2)->getDdl(), timep3);
}

TEST(TaskList, TestDeleteTask) {

    TaskList taskList = TaskList();
    // MainTask* newTask = new MainTask();
    MainTask* task1 = new MainTask();

    taskList.addTask(task1);
    taskList.deleteTask(1);

    EXPECT_EQ(taskList.getAllTasks().size(), 0);

}


TEST(TaskList, TestAddTask) {

    TaskList taskList = TaskList();
    MainTask* newTask = new MainTask();
    MainTask* task1 = new MainTask();
    taskList.addTask(task1);

    EXPECT_EQ(taskList.getAllTasks().size(), 1);
    
}
TEST(TaskList, TestAddTask) {

    time_t  timep1;
    time_t  timep2;
    time_t  timep3,timep4;

    time(&timep1);
    timep1 -=2;

    TaskList taskList = TaskList();

    MainTask* task1 = new MainTask();// passes
    task1->editDdlPassed(true);
    task1->editRecurringEventTime(1);
    task1->editDdl(localtime(&timep1));


    MainTask* task2 = new MainTask();// not passed, don't change
    task2->editDdlPassed(false);
    task2->editRecurringEventTime(3);
    timep2 = timep1 + 1000;
    task2->editDdl(localtime(&timep2));


    MainTask* task3 =new MainTask(); // false but already passed, needs to be changed
    task3->editDdlPassed(false);
    task3->editRecurringEventTime(2);
    timep3 = timep1 - 1000;
    task3->editDdl(localtime(&timep3));

    MainTask* task4 =new MainTask(); // no recurring
    task4->editDdlPassed(false);
    task4->editRecurringEventTime(0);
    timep4 = timep1 - 1500;
    task4->editDdl(localtime(&timep4));

    taskList.addTask(task1); 
    taskList.addTask(task2);
    taskList.addTask(task3);
    taskList.addTask(task4);

    
    int pid = taskList.updateDdl();

    EXPECT_TRUE(pid>0);
    EXPECT_EQ(taskList.getAllTasks().at(0)->getDdl(), timep1 + ONE_DAY);
    EXPECT_EQ(taskList.getAllTasks().at(1)->getDdl(), timep2 );
    EXPECT_EQ(taskList.getAllTasks().at(2)->getDdl(), timep3 + ONE_DAY*2 );
    EXPECT_EQ(taskList.getAllTasks().at(2)->getDdl(), timep4 );
}

int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}


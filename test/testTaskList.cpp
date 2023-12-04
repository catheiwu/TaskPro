#include "gtest/gtest.h"
#include "TaskList.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <unistd.h>  
using namespace std;

TEST(TaskList, TestSortbyPriority) {

    
    Subtask newTask = Subtask();
    MainTask task1 = MainTask();
    MainTask task2 = MainTask();
    MainTask task3 = MainTask();

    task1.editPriority(3);
    task2.editPriority(2);
    task3.editPriority(1);

    taskList.addTask(task1); 
    taskList.addTask(task2);
    taskList.addTask(task3);
    taskList.sort(1);


    EXPECT_TRUE(allTasks.at(0).getPriority(), 1);
    EXPECT_TRUE(allTasks.at(1).getPriority(), 2);
    EXPECT_TRUE(allTasks.at(2).getPriority(), 3);

}

TEST(TaskList, TestSortbyDdl) {

    time_t = timep1;
    time_t = timep2;
    time_t = timep3;

    time(&timep1);

    Subtask newTask = Subtask();
    MainTask task1 = MainTask();
    MainTask task2 = MainTask();
    MainTask task3 = MainTask();

    timep2 = timep1 + 10;
    task2.editDdl(localtime(&timep2));
    

    timep3 = timep1 + 20;
    task3.editDdl(localtime(&timep3));

    taskList.addTask(task3); 
    taskList.addTask(task2);
    taskList.addTask(task1);
    taskList.sort(2)


    EXPECT_EQ(allTasks.at(0).getDdl(), timep1);
    EXPECT_EQ(allTasks.at(1).getDdl(), timep2);
    EXPECT_EQ(allTasks.at(2).getDdl(), timep3);
}

TEST(TaskList, TestDeleteTask) {

    Subtask newTask = Subtask();
    MainTask task1 = MainTask();

    taskList.addTask(task1);
    taskList.deleteTask(1);

    EXPECT_TRUE(allTasks.size(), 0);

}


TEST(TaskList, TestAddTask) {

    Subtask newTask = Subtask();
    MainTask task1 = MainTask();

    taskList.addTask(task1);
    
    EXPECT_TRUE(allTasks.size(), 1);

}

int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}


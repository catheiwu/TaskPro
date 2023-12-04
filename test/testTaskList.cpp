#include "gtest/gtest.h"
#include "TaskList.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <unistd.h>  
using namespace std;

TEST(TaskList, TestSortbyPriority) {

    TaskList taskList;
    taskList->addTask(MainTask);
    taskList->addTask(MainTask);
    taskList->addTask(MainTask);
    taskList.sort(1);
    

    EXPECT_TRUE(allTasks, {1,2,3});

}


TEST(TaskList, TestDeleteTask) {



}


TEST(TaskList, TestAddTask) {



}


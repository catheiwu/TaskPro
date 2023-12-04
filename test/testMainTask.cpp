#include "gtest/gtest.h"
#include "Task.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <unistd.h>  
#include "../include/MainTask.h"
TEST(MainTaskTests, testisRecurringTrue)
{
    MainTask newTask = MainTask(nullptr,0,false,"hi","des",0);
    newTask.editRecurringEventTime(1);
    EXPECT_TRUE(newTask.isRecurring());
 
}
TEST(MainTaskTests, testisRecurringFalse)
{
    MainTask newTask = MainTask();
    newTask.editRecurringEventTime(0);
    EXPECT_FALSE(newTask.isRecurring());
}
TEST(MainTaskTests, testaddSubtask)
{
    SubTask* newTask1 = new SubTask();
    SubTask* newTask2 = new SubTask();
    SubTask* newTask3 = new SubTask();
    MainTask task = MainTask();
    task.addSubtask(newTask1);
    task.addSubtask(newTask2);
    task.addSubtask(newTask3);
    int length = task.getAllSubtasks().size();
    EXPECT_TRUE(length == 3);
}

TEST(MainTaskTests ,testEditDdl)
{
    MainTask task = MainTask();
    time_t timep;
    time(&timep);
    // std::string st1 = asctime(localtime(&timep));
    task.editDdl(localtime(&timep));
    sleep(2);
    time(&timep);
    // std::string st2 = asctime(localtime(&timep));
    task.editDdl(localtime(&timep));
    EXPECT_EQ(task.getDdl(),timep);
}
TEST(MainTaskTests, testEditRecurringEventTime)
{
    MainTask task;
    int newRecurringEventTime = 42;  
    task.editRecurringEventTime(newRecurringEventTime);  
    EXPECT_EQ(newRecurringEventTime, task.getRecurringEventTime());  
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
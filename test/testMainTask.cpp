#include "gtest/gtest.h"
#include "Task.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <unistd.h>  
#include "../include/MainTask.h"
TEST(MainTaskTests, testisRecurringTrue)
{
    MainTask newTask = MainTask();
    newTask.editRecurringEventTime = 1;
    EXPECT_TRUE(isRecurring);
 
}
TEST(MainTaskTests, testisRecurringFalse)
{
    MainTask newTask = MainTask();
    newTask.editRecurringEventTime = 0;
    EXPECT_TRUE(isRecurring);
}
TEST(MainTaskTests, testaddSubtask)
{
    Subtask newTask = Subtask();
    MainTask task = MainTask();
    int length = task.getAllSubtasks.size();
    task.addSubtask(newTask);
    task.addSubtask(newTask);
    task.addSubtask(newTask);
    EXPECT_TRUE(length == 3);
}

// TEST(MainTaskTests editDdl)
// {
//     MainTask task = MainTask();
//     task.editDdl();

// }

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
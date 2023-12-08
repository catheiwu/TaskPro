#include "gtest/gtest.h"
#include "Task.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <unistd.h>
#include "../include/MainTask.h"
TEST(MainTaskTests, testisRecurringTrue)
{
    MainTask newTask = MainTask(0, 0, false, "hi", "des", 0);
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
    SubTask *newTask1 = new SubTask();
    SubTask *newTask2 = new SubTask();
    SubTask *newTask3 = new SubTask();
    MainTask task = MainTask();
    task.addSubtask(newTask1);
    task.addSubtask(newTask2);
    task.addSubtask(newTask3);
    int length = task.getAllSubtasks().size();
    EXPECT_TRUE(length == 3);
}

TEST(MainTaskTests, testEditDdl)
{
    MainTask task = MainTask();
    time_t timep;
    time(&timep);
    // std::string st1 = asctime(localtime(&timep));
    task.editDdl(timep);
    sleep(2);
    time(&timep);
    // std::string st2 = asctime(localtime(&timep));
    task.editDdl(timep);
    EXPECT_EQ(task.getDdl(), timep);
}

TEST(MainTaskTests, testEditDdl2)
{
    MainTask task = MainTask();
    time_t timep, timep2;
    time(&timep);
    // std::string st1 = asctime(localtime(&timep));
    task.editDdl(timep);
    EXPECT_EQ(task.getDdl(), timep);
    timep2 = timep + 200;
    // std::string st2 = asctime(localtime(&timep));
    task.editDdl(timep2);
    EXPECT_EQ(task.getDdl(), timep2);
}
TEST(MainTaskTests, testEditDdl_pointer)
{
    MainTask *task = new MainTask();
    time_t timep, timep2;
    time(&timep);
    // std::string st1 = asctime(localtime(&timep));
    task->editDdl(timep);
    EXPECT_EQ(task->getDdl(), timep);
    timep2 = timep + 200;
    // std::string st2 = asctime(localtime(&timep));
    task->editDdl(timep2);
    EXPECT_EQ(task->getDdl(), timep2);
}

TEST(MainTaskTests, testEditRecurringEventTime)
{
    MainTask task = MainTask();
    int newRecurringEventTime = 42;
    task.editRecurringEventTime(newRecurringEventTime);
    EXPECT_EQ(newRecurringEventTime, task.getRecurringEventTime());
}

TEST(MainTaskTests, testGetDdl)
{
    time_t timep;
    time(&timep);
    MainTask task = MainTask(timep,0,false);
    EXPECT_EQ(timep, task.getDdl());
}

TEST(MainTaskTests, sortSubtasks)
{
    MainTask* subTaskList = new MainTask();
    SubTask *task1 = new SubTask();
    SubTask *task2 = new SubTask();
    SubTask *task3 = new SubTask();

    task1->editPriority(3);
    task2->editPriority(2);
    task3->editPriority(1);

    subTaskList->addSubtask(task1);
    subTaskList->addSubtask(task2);
    subTaskList->addSubtask(task3);
    subTaskList->sort();

    EXPECT_EQ(subTaskList->getAllSubtasks().at(0)->getPriority(), 1);
    EXPECT_EQ(subTaskList->getAllSubtasks().at(1)->getPriority(), 2);
    EXPECT_EQ(subTaskList->getAllSubtasks().at(2)->getPriority(), 3);


}


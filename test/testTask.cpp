#include "gtest/gtest.h"
#include "Task.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <unistd.h>  
TEST(TaskTests, testGetDdl)
{
    time_t timep;
    time(&timep);
    std::string st = asctime(localtime(&timep));
    Task *b = new Task();
    b->editDdl(localtime(&timep));
    // std::cout<<st<<std::endl;
    EXPECT_TRUE(st.compare(b->getDdl()) == 0);
    EXPECT_TRUE(strcmp(st.c_str(), b->getDdl().c_str()) == 0);
}

TEST(TaskTests, testEditDdl)
{
    time_t timep;
    time(&timep);
    std::string st1 = asctime(localtime(&timep));
    DeadLine *a = new DeadLine(localtime(&timep));
    Task *b = new Task(a,nullptr);
    sleep(2);
    time(&timep);
    std::string st2 = asctime(localtime(&timep));
    b->editDdl(localtime(&timep));
    EXPECT_FALSE(st1.compare(st2)==0);
    EXPECT_TRUE(st2.compare(b->getDdl()) == 0);
    EXPECT_FALSE(strcmp(st1.c_str(), b->getDdl().c_str()) == 0);
}

TEST(TaskTests, testEditDescription)
{
    std::string s = "hello";
    Task a = Task();
    a.editDescription(s);
    EXPECT_TRUE(s.compare(a.getDescription())==0);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
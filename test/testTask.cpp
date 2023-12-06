#include "gtest/gtest.h"
#include "Task.h"
#include <time.h>
#include <iostream>
#include <string.h>
#include <unistd.h>  
using namespace std;

TEST(TaskTests, testEditDescription)
{
    std::string s = "hello";
    Task a = Task();
    a.editDescription(s);
    EXPECT_TRUE(s.compare(a.getDescription())==0);
}

TEST(TaskTests, testgetDescription)
{
    std::string s = "hi";
    Task a = Task("asd",s,0);
    EXPECT_TRUE(s.compare(a.getDescription())==0);
}

TEST(TaskTests, testgetPriority)
{
    uint p = 2;
    Task a = Task("s","jj",p);
    EXPECT_EQ(a.getPriority(),p);
}

TEST(TaskTests, testeditPriority)
{
    uint p = 2;
    Task a = Task("s","jj",p);
    a.editPriority(6);
    EXPECT_EQ(a.getPriority(),6);
}
TEST(TaskTests, testgetName)
{
    std::string s = "s";
    Task a = Task("s","jj",0);
    EXPECT_TRUE(s.compare(a.getName())==0);
}
TEST(TaskTests, testEditName)
{
    std::string s = "jj";
    Task a = Task("sasd","jjasd",5);
    a.editName(s);
    EXPECT_TRUE(s.compare(a.getName())==0);
}

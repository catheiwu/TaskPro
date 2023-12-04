#include "gtest/gtest.h"
#include "../include/Deadline.h"
#include <time.h>
#include <iostream>
#include <string.h>
TEST(DeadLineTests, testGetDdl)
{
    time_t timep;
    time(&timep);
    std::string st = asctime(localtime(&timep));
    DeadLine a = DeadLine(localtime(&timep));
    std::cout<<st<<std::endl;
    EXPECT_TRUE(st.compare(a.getDdl())==0);
    EXPECT_TRUE(strcmp(st.c_str(),a.getDdl().c_str())==0);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include "../include/DeadLine.h"
#include <ctime>

DeadLine::DeadLine()
{
    ddl = nullptr;
}

//use localtime() to get the correct value.
DeadLine::DeadLine(struct tm *ddlTime)
{
    ddl = ddlTime;
}
DeadLine::~DeadLine()
{
}

// we don't need to delete cause localtime() uses stack
void DeadLine::editDdl(struct tm *newTime)
{
    // struct tm *temp = ddl;
    // delete temp;
    ddl = newTime;
}

std::string DeadLine::getDdl()
{
    return (asctime(ddl));
}